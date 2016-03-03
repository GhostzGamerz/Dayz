if(isServer) then {
	private	["_complete","_crate_type","_mission","_vehname","_vehicle","_position","_vehclass","_crate","_rndnum"];
	item_high_value			    = true;
	item_high_value2			= true;
	item_high_value3			= false;
	weapon_high_value			= false;
	weapon_high_value2			= false;
	weapon_high_value3			= true;
	item_high_value_chance		= 50;
	item_high_value_chance2		= 25;
	item_high_value_chance3 	= 10;
	item_high_value_amounts 	= [1];
	item_high_value_amounts2 	= [1];
	item_high_value_amounts3 	= [1];
	weapon_high_value_chance	= 50;
	weapon_high_value_chance2	= 50;
	weapon_high_value_chance3	= 25;
	weapon_high_value_amounts	= [1];
	weapon_high_value_amounts2	= [1];
	weapon_high_value_amounts3	= [1];
	_mission 		= count wai_mission_data -1;
	_position		= [30] call find_position;
	[_mission,_position,"Easy","Camel Refuel","MainBandit",true] call mission_init;
	diag_log 		format["WAI: [Mission:[Bandit] Captured Camel]: Starting... %1",_position];
	_crate_type 	= crates_small call BIS_fnc_selectRandom;
	_crate 			= createVehicle [_crate_type,[(_position select 0) - 20,(_position select 1) - 20,0], [], 0, "CAN_COLLIDE"];
	[[_position select 0,_position select 1,0],3,"Easy","Random",4,"Random","Hero","Random","Hero",_mission] call spawn_group;
	[[_position select 0,_position select 1,0],3,"Easy","Random",4,"Random","Hero","Random","Hero",_mission] call spawn_group;
	_vehclass 		= "CYBP_Camel_us";
	_vehicle		= [_vehclass,_position,_mission] call custom_publish;
	if(debug_mode) then {
		diag_log format["WAI: [Bandit] captains_camel spawned a MV22 at %1", _position];
	};
	_complete = [
		[_mission,_crate],
		["crate"],
		[_vehicle],
		"Heroes are attempting to refuel their camel! Check your map for the location!",
		"Bandits hijacked the camel!",
		"Bandits failed to hijack the camel"
		] call mission_winorfail;
		if(_complete) then {
		[_crate,[10,ai_wep_random2],5,25,2] call dynamic_crate;
		};
	diag_log format["WAI: [Mission:[Bandit] Captured Camel]: Ended at %1",_position];
	h_missionsrunning = h_missionsrunning - 1;
};