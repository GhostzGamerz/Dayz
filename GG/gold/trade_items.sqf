private ["_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut","_needed","_started","_finished","_animState","_isMedic","_total_parts_out","_abort","_removed","_tradeCounter","_next_highest_bar","_third_highest_bar","_next_highest_conv","_third_highest_conv","_third_parts_out_raw","_third_parts_out","_remainder","_next_parts_out_raw","_next_parts_out","player","_traderID","_total_trades"];

if(DZE_ActionInProgress) exitWith { cutText ["Trade already in progress." , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;
_buy_o_sell = (_this select 3) select 4;

if(_buy_o_sell == "buy") then {
	
_finish_trade = {
	{player removeAction _x} forEach s_player_parts;s_player_parts = [];
	s_player_parts_crtl = -1;
	DZE_ActionInProgress = false;
	dayzTradeResult = nil;
};

_name = (_this select 3) select 0;
_textPart = (_this select 3) select 6;
_price = (_this select 3) select 3;
_traderID = (_this select 3) select 7;

_player_headShots = player getVariable ["cashMoney",0];

_emptySlots = [player] call BIS_fnc_invSlotsEmpty;
_free_magazine_slots = _emptySlots select 4;

_tradeCounter = 0;

if(_free_magazine_slots < 1) exitWith { 
	_needed =  _qty_in - _qty;
	cutText ["You have no room in your inventory.", "PLAIN DOWN"];
	DZE_ActionInProgress = false;
};

_total_trades = floor(_player_headShots / _price);
if (_total_trades < 1) exitWith {
	_needed =  _price - _player_headShots;
	cutText [format["You need another %1 %2",_needed,CurrencyName] , "PLAIN DOWN"];
	call _finish_trade;
};
if (_total_trades > _free_magazine_slots) then {
	_total_trades = _free_magazine_slots;
};

_abort = false;
for "_x" from 1 to _total_trades do {
	_tradeCounter = _tradeCounter + 1;
	if(_total_trades == 1) then { 
		cutText [format["Starting trade, stand still to complete trade.",_tradeCounter,_total_trades] , "PLAIN DOWN"];
	} else {
		cutText [format["Starting trade, stand still to complete trade %1 of %2.",_tradeCounter,_total_trades] , "PLAIN DOWN"];
	};
	
	private["_newPosition","_finished","_oldPosition"];
    if(isNil "_oldPosition") then { _oldPosition = position player;};
    _finished = false;
    sleep 2;
    if ((position player) distance _oldPosition <= 1) then {
        _finished = true;
    };
    if (!_finished) exitWith {
        DZE_ActionInProgress = false;
        r_autoTrade = false;
        cutText [(localize "str_epoch_player_106") , "PLAIN DOWN"];
    };

	if (_finished) then {
		_player_headShots = player getVariable ["cashMoney",0];
		if (_player_headShots >= _price) then {
				player setVariable["cashMoney",(_player_headShots - _price),true];
				player addMagazine _name;
				_abort = false;
				cutText [format["Traded %1 %2 for %3",_price,CurrencyName,_textPart], "PLAIN DOWN"];
				PVDZE_plr_Save = [player,(magazines player),true,true] ;
				publicVariableServer "PVDZE_plr_Save";
		} else {
			_needed =  _price - _player_headShots;
			cutText [format["You need another %1 %2",_needed,CurrencyName] , "PLAIN DOWN"];
			_abort = true;
		};
	};
	sleep 1;

	if(_abort) exitWith {};
};
DZE_ActionInProgress = false;

} else {
	
	private ["_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut","_needed","_started","_finished","_animState","_isMedic","_total_parts_out","_abort","_removed","_tradeCounter","_next_highest_bar","_third_highest_bar","_next_highest_conv","_third_highest_conv","_third_parts_out_raw","_third_parts_out","_remainder","_next_parts_out_raw","_next_parts_out","player","_traderID","_total_trades"];

_finish_trade = {
	{player removeAction _x} forEach s_player_parts;s_player_parts = [];
	s_player_parts_crtl = -1;
	DZE_ActionInProgress = false;
	dayzTradeResult = nil;
};


_name = (_this select 3) select 1;
_textPart = (_this select 3) select 5;
_price = (_this select 3) select 2;
_traderID = (_this select 3) select 7;


_player_headShots = player getVariable ["cashMoney",0];

_qty = {_x == _name} count magazines player;

_removed = 0;
_tradeCounter = 0;



_total_trades = _qty;
if (_total_trades < 1) exitWith {
	cutText [format["You do not have a %1", _textPart], "PLAIN DOWN"];
	call _finish_trade;
};



_abort = false;
for "_x" from 1 to _total_trades do {
	_tradeCounter = _tradeCounter + 1;
	if(_total_trades == 1) then { 
		cutText [format["Starting trade, stand still to complete trade.",_tradeCounter,_total_trades] , "PLAIN DOWN"];
	} else {
		cutText [format["Starting trade, stand still to complete trade %1 of %2.",_tradeCounter,_total_trades] , "PLAIN DOWN"];
	};
	
	private["_newPosition","_finished","_oldPosition"];
    if(isNil "_oldPosition") then { _oldPosition = position player;};
    _finished = false;
    sleep 2;
    if ((position player) distance _oldPosition <= 1) then {
        _finished = true;
    };
    if (!_finished) exitWith {
        DZE_ActionInProgress = false;
        r_autoTrade = false;
        cutText [(localize "str_epoch_player_106") , "PLAIN DOWN"];
    };

	if (_finished) then {
	
		_removed = ([player,_name,1] call BIS_fnc_invRemove);
		if (_removed > 0) then {
			_player_headShots = player getVariable ["cashMoney",0];	
				player setVariable["cashMoney",(_player_headShots + _price),true];
				cutText [format[("Traded %1 for %2 %3"),_textPart,_price,CurrencyName], "PLAIN DOWN"];
				PVDZE_plr_Save = [player,(magazines player),true,true] ;
				publicVariableServer "PVDZE_plr_Save";
		} else {
			cutText [format["Something went wrong. Could not remove %1 from inventory", _name], "PLAIN DOWN"];
			_abort = true;
		};
	};
	sleep 1;

	if(_abort) exitWith {};
};
DZE_ActionInProgress = false;
	
};

DZE_ActionInProgress = false;