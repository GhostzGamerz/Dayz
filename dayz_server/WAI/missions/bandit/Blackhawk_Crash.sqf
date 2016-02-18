if(isServer) then {
	private ["_complete","_crate_type","_mission","_playerPresent","_position","_crate","_baserunover","high_value","high_value2","high_value3","high_value_chance","high_value_chance2","high_value_chance3","high_value_amounts","high_value_amounts2","high_value_amounts3","items_high_value","items_high_value2","weapons_high_value"];
	high_value			   		= true;
	high_value2			   		= true;
	high_value3			   		= true;
	item_high_value_chance		= 75;
	item_high_value_chance2		= 25;
	weapon_high_value_chance	= 15;
	high_value_amounts 			= [1];
	high_value_amounts2 		= [1];
	high_value_amounts3 		= [1];
	items_high_value = [
	"ItemBriefcase100oz"
	];
	items_high_value2 = [
	"ItemVault"
	];
	weapons_high_value = [
	"ItemHotwireKit",
	"RPG18",
	"Stinger",
	"Javelin"
	];
	_mission 		= count wai_mission_data -1;
	_position		= [30] call find_position;
	[_mission,_position,"Medium","Black Hawk Crash","MainBandit",true] call mission_init;
	diag_log 		format["WAI: [Mission:[Bandit] Black Hawk Crash]: Starting... %1",_position];
	_crate_type 	= crates_medium call BIS_fnc_selectRandom;
	_crate 			= createVehicle [_crate_type,[(_position select 0),(_position select 1),0],[],0,"CAN_COLLIDE"];
	_baserunover 	= createVehicle ["UH60_ARMY_Wreck_burned_DZ",[((_position select 0) + 5), ((_position select 1) + 5), 0],[],10,"FORM"];
	_baserunover 	setVectorUp surfaceNormal position _baserunover;
	[[_position select 0,_position select 1,0],3,"Medium",["Random","AT"],4,"Random","Hero","Random","Hero",_mission] call spawn_group;
	[[_position select 0,_position select 1,0],3,"Medium","Random",4,"Random","Hero","Random","Hero",_mission] call spawn_group;
	[[_position select 0,_position select 1,0],3,"Medium","Random",4,"Random","Hero","Random","Hero",_mission] call spawn_group;
	[[
		[(_position select 0) + 25, (_position select 1) + 25, 0],
		[(_position select 0) - 25, (_position select 1) - 25, 0]
	],"M2StaticMG","Easy","Hero","Hero",0,2,"Random","Random",_mission] call spawn_static;
	_complete = [
		[_mission,_crate],
		["crate"],
		[_baserunover],
		"A Black Hawk carrying supplies has crashed and heroes are securing the site! Check your map for the location!",
		"Bandits have secured the crashed Black Hawk!",
		"Bandits did not secure the crashed Black Hawk in time"
	] call mission_winorfail;
	if(_complete) then {
		[_crate,[10,ai_wep_random2],5,25,2] call dynamic_crate;
	};
	diag_log format["WAI: [Mission:[Bandit] Black Hawk Crash]: Ended at %1",_position];
	b_missionsrunning = b_missionsrunning - 1;
};