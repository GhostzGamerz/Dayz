if(isServer) then {
    private			["_complete","_baserunover","_crate_type","_crate","_mission","_position","_num_guns","_num_tools","_num_items","_rndnum","_rndgro","high_value","high_value2","high_value3","high_value_chance","high_value_chance2","high_value_chance3","high_value_amounts","high_value_amounts2","high_value_amounts3","items_high_value","items_high_value2","weapons_high_value"];
	high_value			   		= true;
	high_value2			   		= true;
	high_value3			   		= false;
	item_high_value_chance		= 25;
	item_high_value_chance2		= 10;
	weapon_high_value_chance	= 5;
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
	[_mission,_position,"Easy","Ural Attack","MainHero",true] call mission_init;
	diag_log 		format["WAI: [Mission:[Hero] Ural Attack]: Starting... %1",_position];
	_crate_type 	= crates_medium call BIS_fnc_selectRandom;
	_crate 			= createVehicle [_crate_type,[(_position select 0) - 20,(_position select 1) - 20,0], [], 0, "CAN_COLLIDE"];
	_baserunover 	= createVehicle ["UralWreck",[(_position select 0),(_position select 1),0],[],14,"FORM"];
	_baserunover 	setVectorUp surfaceNormal position _baserunover;
	_rndnum 	= 2 + round (random 2);
	_rndgro 	= 1 + round (random 2);
	[[_position select 0,_position select 1,0],_rndnum,"Easy",["Random","AT"],4,"Random","Bandit","Random","Bandit",_mission] call spawn_group;
	for "_i" from 0 to _rndgro do {
		[[_position select 0,_position select 1,0],_rndnum,"Easy","Random",4,"Random","Bandit","Random","Bandit",_mission] call spawn_group;
	};
	_complete = [
		[_mission,_crate],
		["kill"],
		[_baserunover],
		"Bandits have destroyed a Ural with supplies and are securing the cargo! Check your map for the location!",
		"The supplies have been secured by survivors!",
		"Survivors did not secure the supplies in time"
	] call mission_winorfail;
	if(_complete) then {
		[_crate,[10,ai_wep_random2],4,25,2] call dynamic_crate;
	};
	diag_log format["WAI: [Mission:[Hero] Ural Attack]: Ended at %1",_position];
	h_missionsrunning = h_missionsrunning - 1;
};