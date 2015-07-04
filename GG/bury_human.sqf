private["_corpse","_type","_isBuried","_mound","_cross","_gun"];
_corpse = _this select 3;
_type = typeOf _corpse;
_isBuried = _corpse getVariable["isBuried",false];
_hasHarvested = _corpse getVariable["meatHarvested",false];
_namec = _corpse getVariable["bodyName","unknown"];
_namep = name player;
_hasETool = "ItemEtool" in items player;
_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 10]) > 1;

if (isNull cursorTarget || (player distance cursorTarget > 4)) exitWith { cutText ["Aim directly to the body!","PLAIN"]; };
if (!_hasETool) exitWith {cutText ["You don't have an Etool", "PLAIN DOWN"];};
if (_playerNear) exitWith { cutText ["Cannot do this while another player is nearby!","PLAIN"]; };

DZE_ActionInProgress = true;

player removeAction s_player_bury_human;
s_player_bury_human = -1;

player removeAction s_player_studybody;
s_player_studybody = -1;

if (!_isBuried) then {
    if (!_hasHarvested) then {

        _corpse setVariable["isBuried",true,true];
        player playActionNow "Medic";
        sleep 10;

        _position = getPos _corpse;
        _dir = getDir _corpse;
		private ["_newBackpackType","_backpackWpn","_backpackMag"];
        dayz_myBackpack = unitBackpack _corpse;
		_newBackpackType = (typeOf dayz_myBackpack);
        _corpse; private ["_weapons","_magazines","_primweapon","_secweapon"];
        _weapons = weapons _corpse;
        _magazines = magazines _corpse;
        if(_newBackpackType != "") then {
			_backpackWpn = getWeaponCargo unitBackpack _corpse;
			_backpackMag = getMagazineCargo unitBackpack _corpse;
		};
		_box = createVehicle ["USBasicAmmunitionBox", _position, [], 0, "CAN_COLLIDE"];
        _box setpos [(getposATL _box select 0),(getposATL _box select 1)+1.2, 0];
        clearWeaponCargoGlobal _box;
        clearMagazineCargoGlobal _box;
        { _box addWeaponCargoGlobal [_x, 1] } forEach weapons _corpse;
        { _box addMagazineCargoGlobal [_x ,1] } forEach magazines _corpse;
		_box setVariable["CashMoney",0 ,true];
		deleteVehicle _corpse;

        _mound = createVehicle ["Grave", _position, [], 0, "CAN_COLLIDE"];
        _mound setpos [(getposATL _mound select 0),(getposATL _mound select 1), 0];
        _crosstype = ["GraveCross1","GraveCross2","GraveCrossHelmet"]  call BIS_fnc_selectRandom;
        _cross = createVehicle [_crosstype, _position, [], 0, "CAN_COLLIDE"];
        _cross setpos [(getposATL _cross select 0),(getposATL _cross select 1)-1.2, 0];

        if(_newBackpackType != "") then {
            _backpackWpnTypes = [];
            _backpackWpnQtys = [];
            if (count _backpackWpn > 0) then {
                _backpackWpnTypes = _backpackWpn select 0;
                _backpackWpnQtys = _backpackWpn select 1;
            };
            _countr = 0;
            { _box addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
            _countr = _countr + 1;
            } forEach _backpackWpnTypes;
            _backpackmagTypes = [];
            _backpackmagQtys = [];
            if (count _backpackmag > 0) then {
                _backpackmagTypes = _backpackMag select 0;
                _backpackmagQtys = _backpackMag select 1;
            };
            _countr = 0; { _box addMagazineCargoGlobal [_x,(_backpackmagQtys select _countr)];
            _countr = _countr + 1;
            } forEach _backpackmagTypes;
            _box addBackpackCargoGlobal [_newBackpackType, 1];
        };

        //Permaloot
        _box setVariable ["permaLoot", true];
		
		if (_namec == _namep) then {
			cutText [format["Did you just bury yourself %1? Huh.. No humanity gained!",_namep],"PLAIN"];
		} else {
			_deathMessage = format["Rest in Peace, %1...",_namec];
			cutText [_deathMessage, "PLAIN DOWN"];
			[player,100] call player_humanityChange;
			_id = [player,10,true,(getPosATL player)] spawn player_alertZombies;
			player playMove "AmovPercMstpSlowWrflDnon_Salute";
		};
    } else {
        cutText ["The poor bastards been eaten, there's not much left to bury", "PLAIN DOWN"];
    };
};

DZE_ActionInProgress = false;
