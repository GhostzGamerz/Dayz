 /******************************************************************************
 *
 *  Adds the load cargo action to the vehicle.
 *
 ******************************************************************************/


//// Variables
_Transporter = _this select 0;
_Unit = _this select 1;


//// Check for action
_BTK_CargoDrop_ActionAdded = _Transporter getVariable "BTK_CargoDrop_ActionAdded";
if (_BTK_CargoDrop_ActionAdded) exitWith {};


//// If no action continue here
_Transporter setVariable ["BTK_CargoDrop_ActionAdded", true];
_CargoAction = _Transporter addAction [("<t color=""#fadfbe"">" + ("Load cargo") + "</t>"),"GG\CargoDrop\Engine.sqf",["LoadCargo"], 5, false, false, "", "vehicle _this == player"];


//// remove Action
waitUntil {(_Unit distance _Transporter > 20) || !(alive _Unit) || !(alive _Transporter)};
_Transporter removeAction _CargoAction;
_Transporter setVariable ["BTK_CargoDrop_ActionAdded", false];