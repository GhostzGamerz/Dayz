
if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;


_LastUsedTime = 60;
_unit = player;
_Range = 1000;
_NearPlotMeters = 60;
_inVehicle = (_vehicle != player);
_hasGPS = "ItemGPS" in items player;

_Time = time - lastscan;

if(_Time < _LastUsedTime) exitWith { // If cooldown is not done then exit script
	DZE_ActionInProgress = false;
	cutText [format["please wait %1s before scaning again!",(round(_Time - _LastUsedTime))], "PLAIN DOWN"]; //display text at bottom center of screen when players cooldown is not done\
};
if(count(nearestObjects [player, ["Plastic_Pole_EP1_DZ"],_NearPlotMeters]) > 1) exitWith {
	DZE_ActionInProgress = false; 
	cutText ["\n\nYou are near a Base and cannot perform that action!" , "PLAIN DOWN"];
};

if (!_hasGPS) exitWith {DZE_ActionInProgress = false;cutText ["You don't have a GPS", "PLAIN DOWN"];};
if (dayz_combat == 1) exitwith { DZE_ActionInProgress = false; cutText ["\n\nYou are in combat and cannot perform that action!", "PLAIN DOWN"]; };

_Radar = ["GG\sounds\GPS.ogv",1.04] spawn bis_fnc_customGPSvideo;

for "_x" from 1 to 10 do {
	if (_x >= 2) then {taskHint ["SCANNING..", [0,1,0,1], 'taskDone'];};
	uiSleep 1;
};

lastscan = time;

_playercount = (({isPlayer _x} count (getPos vehicle player nearEntities [['AllVehicles'],_Range]))-1);

uiSleep 3;

if (_playercount == 0) then {taskHint ["NO PLAYERS DETECTED IN YOUR AREA", [1,0,0.1,1], 'taskFailed'];};
if (_playercount == 1) then {taskHint ["THERE IS ANOTHER PERSON IN YOUR AREA", [0,1,0,1], 'taskDone'];};
if (_playercount > 1) then {taskHint [format["There are %1 players in your area!",_playercount], [(51/255),(181/255),(229/255),1], "taskDone"];

DZE_ActionInProgress = false;
