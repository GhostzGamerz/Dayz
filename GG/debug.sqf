Private ["_EH_Fired"];

if (isNil "inDebug") then {
    inDebug = false;
};

while {true} do {
    waitUntil { inDebug };
    
    waitUntil { player == vehicle player };

    thePlayer = vehicle player;
    _EH_Fired = thePlayer addEventHandler ["Fired", {
	titleText ["weapons disabled","PLAIN DOWN"]; titleFadeOut 4;
        NearestObject [_this select 0,_this select 4] setPos[0,0,0];
    }];

    player_zombieCheck = {};
    fnc_usec_damageHandler = {};
    thePlayer removeAllEventHandlers "handleDamage";
    thePlayer addEventHandler ["handleDamage", {false}];
    thePlayer allowDamage false;

    waitUntil { !inDebug };

    thePlayer removeEventHandler ["Fired", _EH_Fired];

    player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
    fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
    thePlayer addEventHandler ["handleDamage", {true}];
    thePlayer removeAllEventHandlers "handleDamage";
    thePlayer allowDamage true;
};