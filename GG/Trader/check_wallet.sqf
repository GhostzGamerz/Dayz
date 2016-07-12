private ["_body","_hisMoney","_myMoney"];
_body = _this select 3;
if (isNull _body) exitWith {player setVariable ["GGCoins", (player getVariable ["GGCoins",0]) - 1000, true]};
_PlayerNear = _body call dze_isnearest_player;
if (_PlayerNear) exitWith {cutText [localize "str_pickup_limit_4", "PLAIN DOWN"]};
_name = _body getVariable ["bodyName","unknown"];
_hisMoney = _body getVariable ["GGCoins",0];
if(_hisMoney < 1) exitWith {
	cutText ["Cannot take coins from a player with less than 1!", "PLAIN DOWN"];
};
_myMoney = player getVariable ["GGCoins",0];
_myMoney = _myMoney + _hisMoney;
_body setVariable ["GGCoins", 0, true];
player setVariable ["GGCoins", _myMoney , true];
PVOZ_coinlog = [player,"looted corpse ("+_name+") for",(_hisMoney call BIS_fnc_numberText),(player getVariable ["GGCoins",0]),(player getVariable ["GGBank",0])];
publicVariableServer "PVOZ_coinlog";
_msg = format ["You took %1 %2, his name was %3!",_hisMoney call BIS_fnc_numberText,GCoins,_name];
systemChat ("Server: "+str _msg+"");
_msg call AH_fnc_dynTextMsg;
_cid =	player getVariable ["CharacterID","0"];
_cashMoney = player getVariable ["GGCoins",0];