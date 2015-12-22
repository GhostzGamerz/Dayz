private["_vehicle","_vehicleClass","_vehicleName","_dir","_helipad","_location","_veh","_location","_veh","_result","_id","_inventory","_backpack","_fuel","_damage","_id","_isOk","_isKeyOK"];

if(DZE_ActionInProgress) exitWith { cutText ["Action already in progress." , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

if(lbCurSel 2802 == -1) exitWith {DZE_ActionInProgress = true;hint  "No Vehicle selected"};
closeDialog 0;
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]);
_vehicleClass = getText(configFile >> "CfgVehicles" >> (_vehicle select 1) >> "vehicleClass");
_vehicleName = getText(configFile >> "CfgVehicles" >> (_vehicle select 1) >> "displayName");
_dir = round(random 360);
_helipad = nearestObjects [player, ["HeliH","HeliHCivil","HeliHRescue","MAP_Heli_H_army","MAP_Heli_H_cross","Sr_border"], 70];
if((count _helipad == 0) && (_vehicleClass == "Air")) exitWith {DZE_ActionInProgress = true;cutText ["You need to be near a helipad to spawn air vehicles", "PLAIN DOWN"];};
if(count _helipad > 0) then {
	_location = (getPosATL (_helipad select 0));
} else {
	_location = [(position player),0,20,1,0,2000,0] call BIS_fnc_findSafePos;
};

_veh = createVehicle ["Sign_arrow_down_large_EP1", _location, [], 0, "CAN_COLLIDE"];
_location = (getPosATL _veh);


PVDZE_spawnVehicle = [_veh, [_dir,_location], player,  (_vehicle select 0)]; // _vehicle select 0 = id
publicVariableServer "PVDZE_spawnVehicle";


waitUntil {!isNil "PVDZE_spawnVehicleResult"};

if(PVDZE_spawnVehicleResult != "0") then {
	_result = "0";
	_id = parsenumber PVDZE_spawnVehicleResult;
	if ((_id > 0) && (_id <= 2500)) then {_result = format["ItemKeyGreen%1",_id];};
	if ((_id > 2500) && (_id <= 5000)) then {_result = format["ItemKeyRed%1",_id-2500];};
	if ((_id > 5000) && (_id <= 7500)) then {_result = format["ItemKeyBlue%1",_id-5000];};
	if ((_id > 7500) && (_id <= 10000)) then {_result = format["ItemKeyYellow%1",_id-7500];};
	if ((_id > 10000) && (_id <= 12500)) then {_result = format["ItemKeyBlack%1",_id-10000];};
	
	_inventory = (weapons player);
	_backpack = ((getWeaponCargo unitBackpack player) select 0);
	if (_result in (_inventory+_backpack)) then
	{
		if (_result in _inventory) then {cutText [format["Key [%1] already in your inventory!",_result], "PLAIN"];};
		if (_result in _backpack) then {cutText [format["Key [%1] already in your backpack!",_result], "PLAIN"];};
	}
	else
	{
		_isKeyOK = 	isClass(configFile >> "CfgWeapons" >> _result);
		_config = _result;
		_isOk = [player,_config] call BIS_fnc_invAdd;
		waitUntil {!isNil "_isOk"};
		if (!_isOk or !_isKeyOK) exitwith {
			cutText ["You do not have enough room on your toolbelt.", "PLAIN DOWN"];
			PVDZE_spawnVehicleResult = nil;
			PVDZE_queryGarageVehicleResult = nil;
			DZE_ActionInProgress = false;
		};
		player addweapon _result;
		cutText [format["Key [%1] added to your inventory!",_result], "PLAIN"];	
	};
};

PVDZE_spawnVehicleResult = nil;
PVDZE_queryGarageVehicleResult = nil;
DZE_ActionInProgress = false;
uiSleep 2;
cutText [""+_vehicleName+" retrieved from your garage!", "PLAIN DOWN"];