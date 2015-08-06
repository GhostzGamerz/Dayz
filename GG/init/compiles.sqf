BIS_fnc_numberDigits = compile preprocessFileLineNumbers "GG\compile\numberDigits.sqf";
BIS_fnc_numberText = compile preprocessFileLineNumbers "GG\compile\numberText.sqf"; 

SC_fnc_removeCoins=
	{
				private ["_player","_amount","_wealth","_newwealth", "_result"];
				_player =  _this select  0;
				_amount =  _this select  1;
				_result = false;
				_wealth = _player getVariable["cashMoney",0];		
				if (_wealth <= _amount) then { 
					_result = false;
				} else { 						
				_newwealth = _wealth - _amount;
				_player setVariable["cashMoney",_newwealth, true];
				_player setVariable ["moneychanged",1,true];	
				_result = true;
				PVDZE_plr_Save = [_player,(magazines _player),true,true] ;
				publicVariableServer "PVDZE_plr_Save";			
				};
				_result
	};


SC_fnc_addCoins = 
{
	private ["_player","_amount","_wealth","_newwealth", "_result"];			
			_player =  _this select  0;
			_amount =  _this select  1;
			_result = false;	
			_wealth = _player getVariable["cashMoney",0];
			_player setVariable["cashMoney",_wealth + _amount, true];
			PVDZE_plr_Save = [_player,(magazines _player),true,true] ;
			publicVariableServer "PVDZE_plr_Save";
			_player setVariable ["moneychanged",1,true];					
			_newwealth = _player getVariable["cashMoney",0];		
			if (_newwealth >= _wealth) then { _result = true; };			
			_result
};	

KRON_StrToArray = {
	private["_in","_i","_arr","_out"];
	_in=_this select 0;
	_arr = toArray(_in);
	_out=[];
	for "_i" from 0 to (count _arr)-1 do {
		_out=_out+[toString([_arr select _i])];
	};
	_out
};

KRON_StrLen = {
	private["_in","_arr","_len"];
	_in=_this select 0;
	_arr=[_in] call KRON_StrToArray;
	_len=count (_arr);
	_len
};

KRON_StrIndex = {
	private["_hay","_ndl","_lh","_ln","_arr","_tmp","_i","_j","_out"];
	_hay=_this select 0;
	_ndl=_this select 1;
	_out=-1;
	_i=0;
	if (_hay == _ndl) exitWith {0};
	_lh=[_hay] call KRON_StrLen;
	_ln=[_ndl] call KRON_StrLen;
	if (_lh < _ln) exitWith {-1};
	_arr=[_hay] call KRON_StrToArray;
	for "_i" from 0 to (_lh-_ln) do {
		_tmp="";
		for "_j" from _i to (_i+_ln-1) do {
			_tmp=_tmp + (_arr select _j);
		};
		if (_tmp==_ndl) exitWith {_out=_i};
	};
	_out
};

KRON_StrInStr = {
	private["_out"];
	_in=_this select 0;
	_out=if (([_this select 0,_this select 1] call KRON_StrIndex)==-1) then {false} else {true};
 	_out
};

if (!isDedicated) then {

	"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";
	
	//Door Management
	DoorGetFriends 		= 			compile preprocessFileLineNumbers "GG\doorManagement\doorGetFriends.sqf";
	DoorNearbyHumans 	= 			compile preprocessFileLineNumbers "GG\doorManagement\doorNearbyHumans.sqf";
	DoorAddFriend 		= 			compile preprocessFileLineNumbers "GG\doorManagement\doorAddFriend.sqf";
	DoorRemoveFriend 	= 			compile preprocessFileLineNumbers "GG\doorManagement\doorRemoveFriend.sqf";
	
	player_unlockDoor       = 		compile preprocessFileLineNumbers "GG\doorManagement\player_unlockDoor.sqf";
	player_unlockDoorCode = 		compile preprocessFileLineNumbers "GG\doorManagement\player_unlockDoorCode.sqf";
	player_manageDoor       = 		compile preprocessFileLineNumbers "GG\doorManagement\initDoorManagement.sqf";
	player_enterCode       = 		compile preprocessFileLineNumbers "GG\doorManagement\player_enterCode.sqf";
	player_changeCombo = 			compile preprocessFileLineNumbers "GG\doorManagement\player_changeCombo.sqf"; 
	
	player_onPause = 				compile preprocessFileLineNumbers "GG\compile\player_onPause.sqf"; 
	
	GGText = 						compile preprocessFileLineNumbers "ca\modules_e\functions\GUI\fn_dynamicText.sqf";
	BIS_Effects_Burn = 				compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf";
	player_zombieCheck = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
	player_zombieAttack = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieAttack.sqf";
	fnc_usec_damageActions =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\fn_damageActions.sqf";
	fnc_inAngleSector =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inAngleSector.sqf";
	fnc_usec_selfActions =			compile preprocessFileLineNumbers "GG\compile\fn_selfActions.sqf";
	fnc_usec_unconscious =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player_temp_calculation	=		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_temperatur.sqf";
	player_weaponFiredNear =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponFiredNear.sqf";
	player_animalCheck =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_animalCheck.sqf";
	player_spawnCheck = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnCheck.sqf";
	player_dumpBackpack = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_dumpBackpack.sqf";
	building_spawnLoot =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnLoot.sqf";
	building_spawnZombies =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnZombies.sqf";
	randomMags =					compile preprocessFileLineNumbers "GG\randomMags.sqf";
	
	dayz_spaceInterrupt = 			compile preprocessFileLineNumbers "GG\compile\dayz_spaceInterrupt.sqf";
	
	//Plot Management
	PlotGetFriends      = 			compile preprocessFileLineNumbers "GG\plotManage\plotGetFriends.sqf";
	PlotNearbyHumans    = 			compile preprocessFileLineNumbers "GG\plotManage\plotNearbyHumans.sqf";
	PlotAddFriend       = 			compile preprocessFileLineNumbers "GG\plotManage\plotAddFriend.sqf";
	PlotRemoveFriend    = 			compile preprocessFileLineNumbers "GG\plotManage\plotRemoveFriend.sqf";
	MaintainPlot    	= 			compile preprocessFileLineNumbers "GG\plotManage\maintain_area.sqf";
	PlotPreview    	    = 			compile preprocessFileLineNumbers "GG\plotManage\plotToggleMarkers.sqf";
	PlotObjects         = 			compile preprocessFileLineNumbers "GG\plotManage\plotObjects.sqf";
	//Plot Management End
	
	DoorGetFriends 		= 			compile preprocessFileLineNumbers "GG\doorManagement\doorGetFriends.sqf";
	DoorNearbyHumans 	= 			compile preprocessFileLineNumbers "GG\doorManagement\doorNearbyHumans.sqf";
	DoorAddFriend 		= 			compile preprocessFileLineNumbers "GG\doorManagement\doorAddFriend.sqf";
	DoorRemoveFriend 	= 			compile preprocessFileLineNumbers "GG\doorManagement\doorRemoveFriend.sqf";
	
	//Garage
	player_getVehicle = 			compile preprocessFileLineNumbers "GG\garage\getvehicle.sqf";
	player_storeVehicle = 			compile preprocessFileLineNumbers "GG\garage\player_storeVehicle.sqf";
	vehicle_info = 					compile preprocessFileLineNumbers "GG\garage\vehicle_info.sqf";
	//Garage End
	
	player_fired =					compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";
	player_harvest =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_harvest.sqf";
	player_packTent =				compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\player_packTent.sqf";
	player_packVault =				compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\player_packVault.sqf";
	player_unlockVault =			compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\player_unlockVault.sqf";
	player_removeObject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\remove.sqf";	
	player_removeNearby =    		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_removeNearby.sqf";

	player_removeTankTrap = {
		[["Hedgehog_DZ"], 1,"STR_EPOCH_ACTIONS_14"] call player_removeNearby;
	};
	player_removeNet = {
		[["DesertLargeCamoNet","ForestCamoNet_DZ","DesertLargeCamoNet_DZ","ForestLargeCamoNet_DZ"], 5,"str_epoch_player_8"] call player_removeNearby;
	};

	player_login = {
		private ["_unit","_detail","_PUID"];
		_unit = _this select 0;
		_detail = _this select 1;
		if(_unit == _PUID) then {
			player setVariable["publish",_detail];
		};
	};


	player_lockVault =			compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\player_lockVault.sqf";
	player_updateGui =			compile preprocessFileLineNumbers "GG\compile\player_updateGui.sqf";
	player_crossbowBolt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_crossbowBolt.sqf";
	player_music = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_music.sqf";
	player_death =				compile preprocessFileLineNumbers "GG\compile\player_death.sqf";
	player_switchModel =		compile preprocessFileLineNumbers "GG\compile\player_switchModel.sqf";
	player_checkStealth =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_checkStealth.sqf";
	world_sunRise =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_sunRise.sqf";
	world_surfaceNoise =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_surfaceNoise.sqf";
	player_humanityMorph =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityMorph.sqf";
	player_throwObject = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_throwObject.sqf";
	player_alertZombies = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_alertZombies.sqf";
	player_fireMonitor = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
	fn_gearMenuChecks =			compile preprocessFileLineNumbers "GG\compile\fn_gearMenuChecks.sqf";

	//Objects
	object_roadFlare = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_roadFlare.sqf";
	object_setpitchbank	=		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setpitchbank.sqf";
	object_monitorGear =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_monitorGear.sqf";

	local_roadDebris =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_roadDebris.sqf";

	//Zombies
	zombie_findTargetAgent = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_findTargetAgent.sqf";
	zombie_loiter = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_loiter.sqf";
	zombie_generate = 			compile preprocessFileLineNumbers "GG\zombies\zombie_generate.sqf";
	wild_spawnZombies = 		compile preprocessFileLineNumbers "GG\zombies\wild_spawnZombies.sqf";

	pz_attack = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\pzombie\pz_attack.sqf";

	dog_findTargetAgent = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dog_findTargetAgent.sqf";

	//actions
	player_countmagazines =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_countmagazines.sqf";
	player_addToolbelt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_addToolbelt.sqf";
	player_copyKey =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_copyKey.sqf";
	player_reloadMag =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_reloadMags.sqf";
	player_loadCrate =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_loadCrate.sqf";
	player_craftItem =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem.sqf";
	player_tentPitch =			compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\tent_pitch.sqf";
	player_vaultPitch =			compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\vault_pitch.sqf";	
	player_drink =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_drink.sqf";
	player_eat =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_eat.sqf";
	player_useMeds =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useMeds.sqf";
	player_fillWater = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\water_fill.sqf";
	player_makeFire =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_makefire.sqf";
	player_harvestPlant =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_harvestPlant.sqf";
	player_goFishing =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_goFishing.sqf";

		player_build =				compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\modular_build.sqf";
		player_build_custom	= 		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_custom.sqf";
		fnc_SetPitchBankYaw =       compile preprocessFileLineNumbers "GG\BuildVectors\fnc_SetPitchBankYaw.sqf";
		DZE_build_vector_file =     "GG\BuildVectors\build_vectors.sqf";
		build_vectors =             compile preprocessFileLineNumbers DZE_build_vector_file;
		player_build_countNearby =	compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_countNearby.sqf";
		player_build_states =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_states.sqf";
		player_build_needNearby =	compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_needNearby.sqf";
		player_build_getConfig =	compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_getConfig.sqf";
		player_build_plotCheck =	compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_plotCheck.sqf";
		player_build_buildReq =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_buildReq.sqf";
		player_build_create =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_create.sqf";
		player_build_controls =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_controls.sqf";
		player_build_publish =		compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Action\player_build_publish.sqf";
		DZE_snap_build_file = 		"GG\Snap_Pro\snap_build.sqf";
		snap_build = 				compile preprocessFileLineNumbers DZE_snap_build_file;
	
	FNC_check_owner =			compile preprocessFileLineNumbers "GG\A_Plot_for_Life\Compile\fn_check_owner.sqf";
	
	player_wearClothes =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_wearClothes.sqf";
	object_pickup = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_pickup.sqf";
	player_flipvehicle = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_flipvehicle.sqf";
	player_sleep = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_sleep.sqf";
	player_antiWall =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_antiWall.sqf";
	player_deathBoard =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\list_playerDeathsAlt.sqf";

	player_upgradeVehicle =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_upgradeVehicle.sqf";

	

	
	//ui
	player_gearSync	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSync.sqf";
	player_gearSet	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSet.sqf";
	ui_changeDisplay = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_changeDisplay.sqf";
	ui_gear_sound =             compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_gear_sound.sqf";

	//System
	player_monitor =			compile preprocessFileLineNumbers "GG\compile\player_monitor.sqf";
	player_spawn_1 =			compile preprocessFileLineNumbers "GG\spawn\player_spawn_1.sqf";
	player_spawn_2 =			compile preprocessFileLineNumbers "GG\spawn\player_spawn_2.sqf";
	onPreloadStarted 			"dayz_preloadFinished = false;";
	onPreloadFinished 			"dayz_preloadFinished = true;";

	// helper functions
	player_hasTools =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_hasTools.sqf";
	player_checkItems =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_checkItems.sqf";
	player_removeItems =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_removeItems.sqf";
	player_traderCity = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderCity.sqf";

	// combination of check && remove items
	player_checkAndRemoveItems = {
		private ["_items","_b"];
		_items = _this;
		_b = _items call player_checkItems;
		if (_b) then {
			_b = _items call player_removeItems;
		};
		_b
	};

	dayz_HungerThirst = {
		dayz_hunger = dayz_hunger + (_this select 0);
		dayz_thirst = dayz_thirst + (_this select 1);
	};

	epoch_totalCurrency = {
		// total currency
		_total_currency = 0;
		{
			_part =  (configFile >> "CfgMagazines" >> _x);
			_worth =  (_part >> "worth");
			if isNumber (_worth) then {
				_total_currency = _total_currency + getNumber(_worth);
			};
		} count (magazines player);
		_total_currency
	};

	epoch_itemCost = {
		_trade_total = 0;
		{
			_part_in_configClass =  configFile >> "CfgMagazines" >> (_x select 0);
			if (isClass (_part_in_configClass)) then {
				_part_inWorth = (_part_in_configClass >> "worth");
				if isNumber (_part_inWorth) then {
					_trade_total = _trade_total + (getNumber(_part_inWorth) * (_x select 1));
				};
			};
		} count _this;
		_trade_total
	};

	epoch_returnChange =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_returnChange.sqf";

	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = 	_this select 0;
		_dis =		_this select 1;
		_maxDis = 	_this select 2;
		_val = 		(_maxDis - _dis) max 0;
		_maxExp = 	((exp 2) * _maxDis);
		_myExp = 	((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};

	ui_initDisplay = {
		private["_control","_ctrlBleed","_display","_ctrlFracture","_ctrlDogFood","_ctrlDogWater","_ctrlDogWaterBorder", "_ctrlDogFoodBorder"];
		disableSerialization;
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = 	_display displayCtrl 1204;
		_control ctrlShow false;
		if (!r_player_injured) then {
			_ctrlBleed = 	_display displayCtrl 1303;
			_ctrlBleed ctrlShow false;
		};
		if (!r_fracture_legs && !r_fracture_arms) then {
			_ctrlFracture = 	_display displayCtrl 1203;
			_ctrlFracture ctrlShow false;
		};
		_ctrlDogFoodBorder = _display displayCtrl 1501;
		_ctrlDogFoodBorder ctrlShow false;
		_ctrlDogFood = _display displayCtrl 1701;
		_ctrlDogFood ctrlShow false;

		_ctrlDogWaterBorder = _display displayCtrl 1502;
		_ctrlDogWaterBorder ctrlShow false;
		_ctrlDogWater = _display displayCtrl 1702;
		_ctrlDogWater ctrlShow false
	};

	dayz_losCheck = {
		private["_target","_agent","_cantSee"];
		_target = _this select 0;
		_agent = _this select 1;
		_cantSee = true;
		if (!isNull _target) then {

			_tPos = visiblePositionASL _target;
			_zPos = visiblePositionASL _agent;

			_tPos set [2,(_tPos select 2)+1];
			_zPos set [2,(_zPos select 2)+1];

			if ((count _tPos > 0) && (count _zPos > 0)) then {
				_cantSee = terrainIntersectASL [_tPos, _zPos];
				if (!_cantSee) then {
					_cantSee = lineIntersects [_tPos, _zPos, _agent, vehicle _target];
				};
			};
		};
		_cantSee
	};

	dayz_equipCheck = {
		private ["_empty", "_needed","_diff","_success"];
		_config = _this;
		_empty = [player] call BIS_fnc_invSlotsEmpty;
		_needed = [_config] call BIS_fnc_invSlotType;
		_diff = [_empty,_needed] call BIS_fnc_vectorDiff;

		_success = true;
		{
			if (_x > 0) then {_success = false};
		} count _diff;
		hint format["Config: %5\nEmpty: %1\nNeeded: %2\nDiff: %3\nSuccess: %4",_empty,_needed,_diff,_success,_config];
		_success
	};

	vehicle_gear_count = {
		private["_counter"];
		_counter = 0;
		{
			_counter = _counter + _x;
		} count _this;
		_counter
	};

	player_tagFriendlyMsg = {
		if(player == (_this select 0)) then {
			cutText[(localize "str_epoch_player_2"),"PLAIN DOWN"];
		};
	};

	player_serverModelChange = {
		private["_object","_model"];
		_object = _this select 0;
		_model = _this select 1;
		if (_object == player) then {
			_model call player_switchModel;
		};
	};
	
	player_guiControlFlash = {
		private["_control"];
		_control = _this;
		if (ctrlShown _control) then { 
			_control ctrlShow false;
		} else {
			_control ctrlShow true;
		};
	};
	
	gearDialog_create = {
		private ["_i","_dialog"];
		if (!isNull (findDisplay 106)) then {
			(findDisplay 106) closeDisplay 0;
		};
		openMap false;
		closeDialog 0;
		if (gear_done) then {sleep 0.001;};
		player action ["Gear", player];
		if (gear_done) then {sleep 0.001;};
		_dialog = findDisplay 106;
		_i = 0;
		while {isNull _dialog} do {
			_i = _i + 1;
			_dialog = findDisplay 106;
			if (gear_done) then {sleep 0.001;};
			if (_i in [100,200,299]) then {
				closeDialog 0;
				player action ["Gear", player];
			};
			if (_i > 300) exitWith {};
		};
		if (gear_done) then {sleep 0.001;};
		_dialog = findDisplay 106;
		if ((parseNumber(_this select 0)) != 0) then {
			ctrlActivate (_dialog displayCtrl 157);
			if (gear_done) then {
				waitUntil {ctrlShown (_dialog displayCtrl 159)};
				sleep 0.001;
			};
		};
		_dialog
	};

	gear_ui_offMenu = {
		private["_control","_parent","_menu"];
		disableSerialization;
		_control = 	_this select 0;
		_parent = 	findDisplay 106;
		if (!(_this select 3)) then {
			for "_i" from 0 to 9 do {
				_menu = _parent displayCtrl (1600 + _i);
				_menu ctrlShow false;
			};
			_grpPos = ctrlPosition _control;
			_grpPos set [3,0];
			_control ctrlSetPosition _grpPos;
			_control ctrlShow false;
			_control ctrlCommit 0;
		};
	};

	dze_surrender_off = {
		player setVariable ["DZE_Surrendered", false, true];
		DZE_Surrender = false;
	};

	gear_ui_init = {
		private["_control","_parent","_menu","_dspl","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = 	_parent displayCtrl 6902;
		for "_i" from 0 to 9 do {
			_menu = _parent displayCtrl (1600 + _i);
			_menu ctrlShow false;
		};
		_grpPos = ctrlPosition _control;
		_grpPos set [3,0];
		_control ctrlSetPosition _grpPos;
		_control ctrlShow false;
		_control ctrlCommit 0;
	};

	dayz_eyeDir = {
		private["_vval","_vdir"];
		_vval = (eyeDirection _this);
		_vdir = (_vval select 0) atan2 (_vval select 1);
		if (_vdir < 0) then {_vdir = 360 + _vdir};
		_vdir
	};

	DZE_getModelName = {
		_objInfo = toArray(str(_this));
		_lenInfo = count _objInfo - 1;
		_objName = [];
		_i = 0;
		// determine where the object name starts
		{
			if (58 == _objInfo select _i) exitWith {};
			_i = _i + 1;
		} count _objInfo;
		_i = _i + 2;
		for "_k" from _i to _lenInfo do {
			_objName set [(count _objName), (_objInfo select _k)];
		};
		_objName = toLower(toString(_objName));
		_objName
	};

	dze_isnearest_player = {
		private ["_notClosest","_playerDistance","_nearPlayers","_obj","_playerNear"];
		if(!isNull _this) then {
			_nearPlayers = _this nearEntities ["CAManBase", 12];
			_playerNear = ({isPlayer _x} count _nearPlayers) > 1;
			_notClosest = false;
			if (_playerNear) then {
				// check if another player is closer
				_playerDistance = player distance _this;
				{
					if (_playerDistance > (_x distance _this)) exitWith { _notClosest = true; };
				} count _nearPlayers;
			};
		} else {
			_notClosest = false;
		};
		_notClosest
	};

	// trader menu code
	if (DZE_ConfigTrader) then {
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderMenuConfig.sqf";
	}else{
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderMenuHive.sqf";
	};
	// recent murders menu code
	call compile preprocessFileLineNumbers "GG\compile\player_murderMenu.sqf";

	Zupa_LoadingMessage = ["Loading up [GG] Ghostz Gamerz"];
	"PVDZE_Z_LoadMessage" addPublicVariableEventHandler {Zupa_LoadingMessage = _this select 1;};

     [] spawn {
        private["_timeOut","_display","_control1","_control2"];
        disableSerialization;
        _timeOut = 0;
        dayz_loadScreenMsg = "";
        diag_log "DEBUG: loadscreen guard started.";
        _display = uiNameSpace getVariable "BIS_loadingScreen";
        if (!isNil "_display") then {
                _control1 = _display displayctrl 8400;
                _control2 = _display displayctrl 102;
        };
		if (!isNil "dayz_DisplayGenderSelect") then {
			waitUntil {!dayz_DisplayGenderSelect};
		};

        while { _timeOut < 12000 } do {
            if (dayz_clientPreload && dayz_authed) exitWith { 
					diag_log "PLOGIN: Login loop completed!"; 
					endLoadingScreen;
				 };
            if (!isNil "_display") then {
                if ( isNull _display ) then {
                        waitUntil { !dialog; };
                        startLoadingScreen ["","RscDisplayLoadCustom"];
                        _display = uiNameSpace getVariable "BIS_loadingScreen";
                        _control1 = _display displayctrl 8400;
                        _control2 = _display displayctrl 102;
                };
                 _control1 ctrlSetText format["[GG] Server : %1 & %2",Zupa_LoadingMessage select 0 ,dayz_loadScreenMsg];             
                 _control2 ctrlSetText format["%1",round(_timeOut*0.01)];
            };
			
	    if( Zupa_LoadingMessage select 0 != "Server running")then{
		    _timeOut = 0;
		}else{
                    _timeOut = _timeOut + 1;
	    };

            if (_timeOut >= 12000) then {
                1 cutText [localize "str_player_login_timeout", "PLAIN DOWN"];
                sleep 10;
                endLoadingScreen;
                endMission "END1";
            };

            sleep 0.01;
        };
     };

	dayz_meleeMagazineCheck = {
                private["_meleeNum","_magType"];
                _magType =         ([] + getArray (configFile >> "CfgWeapons" >> _wpnType >> "magazines")) select 0;
                _meleeNum = ({_x == _magType} count magazines player);
                if (_meleeNum < 1) then {
                        player addMagazine _magType;
                };
        };
		
	"PVOZ_adminSkin" addPublicVariableEventHandler {
		 _obj =  (_this select 1) select 0 ;
		 _colour =  (_this select 1) select 1;	
	                          _obj setObjectTexture [0, _colour];
    };

	dayz_originalPlayer = player;

	progressLoadingScreen 0.8;
};

	//Both
	BIS_fnc_selectRandom =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_selectRandom.sqf";
	BIS_fnc_vectorAdd =         compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_vectorAdd.sqf";
	BIS_fnc_halo =              compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_halo.sqf";
	BIS_fnc_findNestedElement =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_findNestedElement.sqf";
	BIS_fnc_param = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_param.sqf";

	fnc_buildWeightedArray = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";
	fnc_usec_damageVehicle =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerVehicle.sqf";
	
	zombie_initialize = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\init\zombie_init.sqf";

	object_setHitServer =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHitServer.sqf";
	object_setFixServer =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setFixServer.sqf";
	object_getHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_getHit.sqf";
	object_setHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHit.sqf";
	object_processHit =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_processHit.sqf";
	object_delLocal =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_delLocal.sqf";
	fnc_usec_damageHandler =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
	fnc_veh_ResetEH = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\init\veh_ResetEH.sqf";
	vehicle_handleDamage    = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
	vehicle_handleKilled    = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";
	fnc_inString = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inString.sqf";
	fnc_isInsideBuilding = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding.sqf";
	fnc_isInsideBuilding2 = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding2.sqf";
	fnc_isInsideBuilding3 = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding3.sqf";
	dayz_zombieSpeak = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_speak.sqf";
	vehicle_getHitpoints =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getHitpoints.sqf";
	local_gutObject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObject.sqf";
	local_lockUnlock =		 compile preprocessFileLineNumbers "GG\compile\local_lockUnlock.sqf";
	local_gutObjectZ =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObjectZ.sqf";
	local_zombieDamage = 			compile preprocessFileLineNumbers "GG\zombies\fn_damageHandlerZ.sqf";
	checkWepBpSlot = 			compile preprocessFileLineNumbers "GG\checkWepBpSlot.sqf"; 
	local_eventKill = 			compile preprocessFileLineNumbers "GG\compile\local_eventKill.sqf";
	curTimeStr =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_curTimeStr.sqf";
	player_medBandage =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
	player_medInject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medInject.sqf";
	player_medEpi =				compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medEpi.sqf";
	player_medTransfuse =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medTransfuse.sqf";
	player_medMorphine =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	player_breaklegs =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBreakLegs.sqf";
	player_medPainkiller =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
	world_isDay = 				{if ((daytime < (24 - dayz_sunRise)) && (daytime > dayz_sunRise)) then {true} else {false}};
	player_humanityChange =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityChange.sqf";
	spawn_loot =				compile preprocessFileLineNumbers "GG\loot\spawn_loot.sqf";
	spawn_loot_small = compile preprocessFileLineNumbers "GG\loot\spawn_loot_small.sqf";
	FNC_GetPlayerUID = {
		private ["_object","_version","_PID"];
		_object = _this select 0;
		_version = productVersion select 3;
		if (DayZ_UseSteamID) then {
			_PID = GetPlayerUID _object;
		} else {
			if (_version >= 125548) then {
				_PID = call (compile "GetPlayerUIDOld _object");
			} else {
				_PID = GetPlayerUID _object;
				diag_log format["Your game version, %1, is less than the required for the old UID system; using Steam ID system instead. Update to 1.63.125548 (or latest steam beta)", _version];
			};
		};
		_PID
	};
	FNC_GetSetPos = {
		private "_pos";
		_thingy = _this select 0;
		_pos = getPosASL _thingy;
		if (surfaceIsWater _pos) then {
			_thingy setPosASL _pos;
		} else {
			_thingy setPosATL (ASLToATL _pos);
		};
	};
	FNC_GetPos = {
		private "_pos";
		if (isNil {_this select 0}) exitWith {[0,0,0]};
		_thingy = _this select 0;
		_pos = getPosASL _thingy;
		if !(surfaceIsWater _pos) then {
			_pos =  ASLToATL _pos;
		};
		_pos
	};
	local_setFuel =	{
		private["_qty","_vehicle"];
		_vehicle = _this select 0;
		_qty = _this select 1;
		_vehicle setFuel _qty;
	};
	zombie_initialize = {
		private ["_unit","_position"];
		_unit = _this select 0;
		if (isServer) then {
			_unit addEventHandler ["local", {_this call zombie_findOwner}];
		};
		_id = _unit addeventhandler["HandleDamage", { _this call local_zombieDamage }];
		_id = _unit addeventhandler["Killed", { [_this, "zombieKills"] call local_eventKill }];
	};

	dayz_EjectPlayer = {
		// check if player in vehicle
        private ["_noDriver","_vehicle","_inVehicle"];
        _vehicle = vehicle player;
		_inVehicle = (_vehicle != player);
		if(_inVehicle) then {
			_noDriver = ((_vehicle emptyPositions "driver") > 0);
			if (_noDriver && (speed _vehicle) != 0) then {
				player action [ "eject", _vehicle];
			};
		};
	};

	player_sumMedical = {
		private["_character","_wounds","_legs","_arms","_medical"];
		_character = 	_this;
		_wounds =		[];
		if (_character getVariable["USEC_injured",false]) then {
			{
				if (_character getVariable[_x,false]) then {
					_wounds set [count _wounds,_x];
				};
			} count USEC_typeOfWounds;
		};
		_legs = _character getVariable ["hit_legs",0];
		_arms = _character getVariable ["hit_arms",0];
		_medical = [
			_character getVariable["USEC_isDead",false],
			_character getVariable["NORRN_unconscious", false],
			_character getVariable["USEC_infected",false],
			_character getVariable["USEC_injured",false],
			_character getVariable["USEC_inPain",false],
			_character getVariable["USEC_isCardiac",false],
			_character getVariable["USEC_lowBlood",false],
			_character getVariable["USEC_BloodQty",12000],
			_wounds,
			[_legs,_arms],
			_character getVariable["unconsciousTime",0],
			_character getVariable["messing",[0,0]]
		];
		_medical
	};

	//Server Only
	if (isServer) then {
		call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\server_functions.sqf";
	} else {
		eh_localCleanup = {};
	};

	vehicle_handleDamage = compile preprocessFileLineNumbers "GG\compile\vehicle_handleDamage.sqf";
	
	call compile preprocessFileLineNumbers "GG\gold\player_traderMenu.sqf";
	
	//Safe-zones ---------------------------------------
	SafeZoneCreate 			= compile preprocessFileLineNumbers "GG\safezone\SafeZoneCreate.sqf";
	SafeZoneEnable 			= compile preprocessFileLineNumbers "GG\safezone\safeZoneEnable.sqf";
	SafeZoneDisable 		= compile preprocessFileLineNumbers "GG\safezone\safeZoneDisable.sqf";
	{
		private ["_pos", "_radius", "_name", "_trigger", "_marker"];
		_pos = _x select 0;
		_radius = _x select 1;
		_name = _x select 2;
		_trigger = createTrigger ["EmptyDetector", _pos];
		_trigger setTriggerArea [_radius, _radius, 0, false];
		_trigger setTriggerActivation ["ANY", "PRESENT", true];
		_trigger setTriggerType "SWITCH";
		if (isServer) then {
			_trigger spawn SafeZoneCreate;
		} else {
			_trigger setTriggerStatements ["(vehicle player) in thisList", "call SafeZoneEnable", "call SafeZoneDisable"];
			_marker = createMarkerLocal [format["Safezone%1", _name], _pos];
			_marker setMarkerShapeLocal "ELLIPSE";
			_marker setMarkerTypeLocal "Empty";
			_marker setMarkerColorLocal "ColorGreen";
			_marker setMarkerBrushLocal "Grid";
			_marker setMarkerSizeLocal [_radius, _radius];
		};
		true 
	} count GGSafezones;
	
	
	
initialized = true;