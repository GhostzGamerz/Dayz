if (!isDedicated) then {

	call compile preprocessFileLineNumbers "GG\Lift\config.sqf";

	MONI_OBJECT	= compile preprocessFileLineNumbers "GG\Lift\monitor\monitor_object.sqf";
	MONI_ACTION	= compile preprocessFileLineNumbers "GG\Lift\monitor\monitor_action.sqf";
	LOG_OBJ_INIT = compile preprocessFileLineNumbers "GG\Lift\object\init.sqf";
	LOG_LIFT_INIT = compile preprocessFileLineNumbers "GG\Lift\lift\init.sqf";
	LOG_TOW_INIT = compile preprocessFileLineNumbers "GG\Lift\tow\init.sqf";
	
	LOG_FNCT_DETACH_AND_SAVE = {
			private ["_object"]; 
			_object = (_this select 0);
			_object setVelocity [0,0,0];
			detach _object;
			if (!isNil "dayz_zombieSpeak" && !isNil "dayz_HungerThirst" && !isNil "player_alertZombies" ) then {			
				PVDZE_veh_Update = [_object,"all"];
				publicVariableServer "PVDZE_veh_Update";
				[10,10] call dayz_HungerThirst;
				player playActionNow "Medic";
				[player,"repair",0,false,20] call dayz_zombieSpeak;
				[player,20,true,(getPosATL player)] spawn player_alertZombies;
			}else{
				player playActionNow "Medic";
			};
	};

	LOG_FNCT_LOCKED = { 
		private ["_return","_target"]; 
		_target = (_this select 0);
		_return = true; 
			if ( !(LOG_CFG_ALLOW_LOCKED) && (locked _target) && !(canbuild) ) then { 
				_return = false; 
			};
		_return
		};
	
	LOG_FNCT_CHAINING = { 
		private ["_return","_target"];
		_target = (_this select 0);
		_return = true; 
		if !(LOG_CFG_ALLOW_CHAINING) then  { 	
			if ( ( (_this select 1) == 1 ) && !( isNull (_target getVariable "LOG_moves_by") || (!alive (_target getVariable "LOG_moves_by")) ) ) then {_return = false;};	
			if ( (_this select 1) == 2 && !isNull (_target getVariable "LOG_trailer") ) then { _return = false;};
		};
		_return 
	};
	
	LOG_FNCT_GETPOS = {
		private "_pos";
		if (isNil {_this select 0}) exitWith {[0,0,0]};
		_thingy = _this select 0;
		_pos = getPosASL _thingy;
		if !(surfaceIsWater _pos) then { _pos =  ASLToATL _pos;};
		_pos
	};
	
	LOG_OBJECT_MOVES = objNull;
	LOG_OBJECT_SELECTION = objNull;
	LOG_OBJECT_ADDACTION = objNull;
	LOG_INPROGRESS = false;
	LOG_LOAD_MOVES_VALID = false;
	LOG_LOAD_SELECTION_VALID = false;
	LOG_CONTENT_VALID = false;
	LOG_TRAILER_MOVE_VALID = false;
	LOG_TRAILER_SELECT_VALID = false;
	LOG_HELI_LIFT_VALID = false;
	LOG_HELI_DROP_VALID = false;
	LOG_OBJECT_TRAILER_VALID = false;
	LOG_DETACH_VALID = false;
	
LOG_READY = true;
};