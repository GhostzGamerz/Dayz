private ["_type"];
_type = _this select 3;
DZE_updated = true;
switch(_type) do{
	case "reset": {
		DZE_memForBack = 0;
		DZE_memLeftRight = 0;
		DZE_updateVec = true;
	};
	case "forward": {
		DZE_updateVec = true;
		DZE_memForBack = DZE_memForBack + (DZE_curPitch * -1);

	};
	case "back": {
		DZE_updateVec = true;
		DZE_memForBack = DZE_memForBack + DZE_curPitch;

	};
	case "left": {
		DZE_updateVec = true;
		DZE_memLeftRight = DZE_memLeftRight + (DZE_curPitch * -1);

	};
	case "right": {
		DZE_updateVec = true;
		DZE_memLeftRight = DZE_memLeftRight + DZE_curPitch;
	};
	case "1": {DZE_curPitch = 1};
	case "5": {DZE_curPitch = 5};
	case "45":  {DZE_curPitch = 45};
	case "90":  {DZE_curPitch = 90};
};