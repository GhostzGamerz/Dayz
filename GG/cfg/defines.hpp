class SnapPoints {
	class Barrier {
		snapTo[] = {
			"Land_HBarrier5_DZ",
			"Land_HBarrier3_DZ",
			"Land_HBarrier1_DZ",
			"Sandbag1_DZ",
			"BagFenceRound_DZ",
			"Fort_RazorWire"
		};
		radius = 5;
	};
	class Land_HBarrier5Preview: Barrier{
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0.1,"Back"},
		{0,0.75,0.1,"Front"},
		{-2.85,0,0.1,"Left"},
		{2.85,0,0.1,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier5_DZ: Land_HBarrier5Preview {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-2.85,0,0,"Left"},
		{2.85,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier3ePreview: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-1.7,0,0,"Left"},
		{1.7,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier3_DZ: Land_HBarrier3ePreview{};
	class Land_HBarrier1Preview: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-0.6,0,0,"Left"},
		{0.6,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier1_DZ: Land_HBarrier1Preview{};
	class Fort_RazorWirePreview: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.95,-0.3,"Back"},
		{0,0.95,-0.3,"Front"},
		{-4.1,0,-0.3,"Left"},
		{4.1,0,-0.3,"Right"},
		{0,0,1,"Top"}
		};
	};
	class Fort_RazorWire: Fort_RazorWirePreview {};
	class Sandbag1_DZ: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{-1.5,0,0,"Left"},
		{1.5,0,0,"Right"},
		{0,0,0.4,"Top"}
		};
	};
	class BagFenceRound_DZ: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{-1.295,0.38,0,"Left"},
		{1.295,0.38,0,"Right"},
		{0,0,0.4,"Top"}
		};
	};
	class FloorsWallsStairs {
		snapTo[] = {
			"WoodFloorQuarter_DZ",
			"WoodFloorHalf_DZ",
			"WoodFloor_DZ",
			"WoodStairs_DZ",
			"WoodStairsSans_DZ",
			"WoodSmallWallDoor_DZ",
			"WoodSmallWall_DZ",
			"WoodSmallWallWin_DZ",
			"Land_DZE_WoodDoor",
			"Land_DZE_WoodDoorLocked",
			"WoodLargeWall_DZ",
			"Land_DZE_LargeWoodDoor",
			"WoodLargeWallWin_DZ",
			"WoodLargeWallDoor_DZ",
			"Land_DZE_GarageWoodDoor",
			"Land_DZE_GarageWoodDoorLocked",
			"Land_DZE_LargeWoodDoorLocked",
			"WoodSmallWallThird_DZ",
			"CinderWall_DZ",
			"CinderWallDoorway_DZ",
			"CinderWallDoorLocked_DZ",
			"CinderWallDoor_DZ",
			"CinderWallSmallDoorway_DZ",
			"CinderWallDoorSmallLocked_DZ",
			"CinderWallHalf_DZ",
			"CinderWallDoorSmall_DZ",
			"MetalFloor_DZ"
		};
		radius = 7;
	};
	class WoodFloorQuarter_Preview_DZ: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-1.23,0,"Back"},
		{0,1.23,0,"Front"},
		{-1.24,0,0,"Left"},
		{1.24,0,0,"Right"}
		};
	};
	class WoodFloorQuarter_DZ: FloorsWallsStairs { 
		points[] = {
		{0,0,0,"Pivot"},
		{0,-1.23,0.137726,"Back"},
		{0,1.23,0.137726,"Front"},
		{-1.24,0,0.137726,"Left"},
		{1.24,0,0.137726,"Right"}
		};
	};
	class WoodFloorHalf_Preview_DZ: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.34,0,"Back"},
		{0,2.34,0,"Front"},
		{-1.25,0,0,"Left"},
		{1.25,0,0,"Right"}
		};
	};
	class WoodFloorHalf_DZ: FloorsWallsStairs{
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.34,0.1407,"Back"},
		{0,2.34,0.1407,"Front"},
		{-1.25,0,0.1407,"Left"},
		{1.25,0,0.1407,"Right"}
		};
	};
	class WoodFloor_Preview_DZ: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.33,0.130,"Back"},
		{0,2.33,0.130,"Front"},
		{-2.495,0,0.130,"Left"},
		{2.495,0,0.130,"Right"}
		};
		radius = 10;
	};
	class WoodFloor_DZ: WoodFloor_Preview_DZ{};
	class Stairs_DZE: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{1.56055,-0.78,1.5,"Back"},
		{1.56055,0.78,1.5,"Front"},
		{1.73926,0.05,2.9,"Top"},
		{-1.73926,0.05,0,"Bottom"}
		};
	};
	class WoodStairs_DZ: Stairs_DZE {};
	class WoodStairs_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_DZ: Stairs_DZE {};
	class WoodSmall_DZE: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.285, 0, 1.5,"Left"},
		{2.285, 0, 1.5,"Right"},
		{0, 0, 3,"Top"}
		};
	};
	class WoodSmallWallDoor_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWall_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWallWin_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWallDoor_DZ: WoodSmall_DZE {};
	class WoodSmallWall_DZ: WoodSmall_DZE {};
	class WoodSmallWallWin_DZ: WoodSmall_DZE {};
	class Land_DZE_WoodDoor: WoodSmall_DZE {};
	class Land_DZE_WoodDoorLocked: WoodSmall_DZE {};
	class WoodDoor_Preview_DZ: WoodSmall_DZE{};
	class WoodLarge_DZE: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.45, 0, 1.5,"Left"},
		{2.45, 0, 1.5,"Right"},
		{0, 0, 3,"Top"}
		};
	};
	class WoodLargeWall_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallWin_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallDoor_Preview_DZ: WoodLarge_DZE {};
	class WoodSmallWallThird_Preview_DZ: WoodLarge_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.445, 0, 1.5,"Left"},
		{2.445, 0, 1.5,"Right"},
		{0, 0, 1.17,"Top"}
		};
	};
	class WoodSmallWallThird_DZ: WoodSmallWallThird_Preview_DZ{};
	class WoodLargeWall_DZ: WoodLarge_DZE {};
	class Land_DZE_LargeWoodDoor: WoodLarge_DZE {};
	class WoodLargeWallWin_DZ: WoodLarge_DZE {};
	class WoodLargeWallDoor_DZ: WoodLarge_DZE {};
	class Land_DZE_GarageWoodDoor: WoodLarge_DZE {};
	class GarageWoodDoor_Preview_DZ: WoodLarge_DZE {};
	class Land_DZE_GarageWoodDoorLocked: WoodLarge_DZE {};
	class Land_DZE_LargeWoodDoorLocked: WoodLarge_DZE {};
	class LargeWoodDoor_Preview_DZ: WoodLarge_DZE {};
	class Cinder_DZE: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 3.37042,"Top"}
		};
		radius = 10;
	};
	class CinderWall_Preview_DZ: Cinder_DZE {};
	class CinderWallDoorway_Preview_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_Preview_DZ: Cinder_DZE {}; 
	class CinderWallHalf_Preview_DZ: Cinder_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 1.5,"Top"}
		};
	};
	class CinderWall_DZ: Cinder_DZE {};
	class CinderWallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorLocked_DZ: Cinder_DZE {};
	class CinderWallDoor_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorSmallLocked_DZ: Cinder_DZE {};
	class CinderWallHalf_DZ: Cinder_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 1.5,"Top"}
		};
	};
	class CinderWallDoorSmall_DZ: Cinder_DZE {};
	class MetalFloor_Preview_DZ: FloorsWallsStairs {
		points[] = {
		{0,0,0.011,"Pivot"},
		{0, -2.64, 0.009,"Back"},
		{0, 2.64, 0.009,"Front"},
		{-2.64, 0, 0.009,"Left"},
		{2.64, 0, 0.009,"Right"}
		};
		radius = 12;
	};
	class MetalFloor_DZ: FloorsWallsStairs{
		points[] = {
		{0,0,0,"Pivot"},
		{0, -2.64, 0.15,"Back"},
		{0, 2.64, 0.15,"Front"},
		{-2.64, 0, 0.15,"Left"},
		{2.64, 0, 0.15,"Right"}
		};
		radius = 12;
	};
	class WoodCrate_DZ {
		snapTo[] = {
			"WoodCrate_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.47,0,"Back"},
		{0,0.47,0,"Front"},
		{-0.47,0,0,"Left"},
		{0.47,0,0,"Right"},
		{0,0,0.47,"Top"}
		};
	};
	class MetalPanel_DZ {
		snapTo[] = {
			"MetalPanel_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-1.5,0,0,"Left"},
		{1.5,0,0,"Right"}
		};
	};
	class MetalGate_DZ {
		snapTo[] = {
			"MetalGate_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-4.1,0,0,"Left"}
		};
	};
	class StickFence_DZ {
		snapTo[] = {
			"StickFence_DZ"
		};
		radius = 10;
		points[] = {
		{0,0,0,"Pivot"},
		{-2.95,0,0.3,"Left"},
		{2.95,0,0.3,"Right"}
		};
	};
	class Fence_corrugated_DZ {
		snapTo[] = {
			"Fence_corrugated_DZ"
		};
		radius = 10;
		points[] = {
		{0,0,0,"Pivot"},
		{-1.95,0,0.88,"Left"},
		{1.95,0,0.88,"Right"}
		};
	};
	class WoodRamp_Preview_DZ {
		snapTo[] = {
			"WoodRamp_DZ"
		};
		radius = 7;
		points[] = {
		{0,0,0,"Pivot"},
		{0.65,-1.7,1.2,"Back"},
		{0.65,1.5,1.2,"Front"},
		{3.34,-0.115,2.82,"Top"}
		};
	};
	class WoodRamp_DZ: WoodRamp_Preview_DZ{};
	class WoodLadder_Preview_DZ {
		snapTo[] = {
			"WoodLadder_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-0.4,0,1.725,"Left"},
		{0.4,0,1.725,"Right"}
		};
	};
	class WoodLadder_DZ: WoodLadder_Preview_DZ{};
	class VaultStorageLocked {
		snapTo[] = {
			"VaultStorageLocked",
			"VaultStorage"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{0,0.284,0.615,"Back"},
		{0,0,1.23,"Top"},
		{-0.362,0,0.615,"Left"},
		{0.362,0,0.615,"Right"}
		};
		
	};
	class VaultStorage: VaultStorageLocked {};
};
class RscCombo {
	access = 0;
	type = 4;
	style = 0;
	colorSelect[] = {0.023529,0,0.0313725,1};
	colorText[] = {0.023529,0,0.0313725,1};
	colorBackground[] = {0.95,0.95,0.95,1};
	colorScrollbar[] = {0.023529,0,0.0313725,1};
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	class ScrollBar {
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	shadow = 0;
	colorSelectBackground[] = {0.8784,0.8471,0.651,1};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	color[] = {0,0,0,0.6};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	font = "Zeppelin32";
	sizeEx = 0.03921;
};
class RscBackground {
	type = 0;
	style = 0x50;
	shadow = 2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};
class RscFrame {
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};
class RscMapControl {
	access = 0;
	type = 101;
	idc = 51;
	style = 48;
	x = "0.42315 * safezoneW + safezoneX";
	y = "0.269348 * safezoneH + safezoneY";
	w = "0.293691 * safezoneW";
	h = "0.463997 * safezoneH";
	moveOnEdges = 0;
	shadow = 0;
	maxSatelliteAlpha = .85;
	alphaFadeStartScale = .35;
	alphaFadeEndScale = .4;
	colorOutside[] = {0,0,0,1};
	font = "EtelkaNarrowMediumPro";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
	colorBackground[] = {.8,.8,.8,1};
	colorText[] = {0,0,0,1};
	colorRailway[] = {.5,.5,.5,.5};
	colorSea[] = {.56,.8,.98,.5};
	colorForest[] = {.6,.8,.2,.5};
	colorRocks[] = {.5,.5,.5,.5};
	colorCountlines[] = {.65,.45,.27,.5};
	colorMainCountlines[] = {.65,.45,.27,1};
	colorCountlinesWater[] = {0,.53,1,.5};
	colorMainCountlinesWater[] = {0,.53,1,1};
	colorForestBorder[] = {.4,.8,0,1};
	colorRocksBorder[] = {.5,.5,.5,1};
	colorPowerLines[] = {0,0,0,1};
	colorNames[] = {0,0,0,1};
	colorInactive[] = {1,1,1,.5};
	colorLevels[] = {.286,.177,.094,.5};
	fontLabel = "TahomaB";
	sizeExLabel = .04;
	fontGrid = "TahomaB";
	sizeExGrid = .04;
	fontUnits = "TahomaB";
	sizeExUnits = .04;
	fontNames = "TahomaB";
	sizeExNames = .04;
	fontInfo = "TahomaB";
	sizeExInfo = .04;
	fontLevel = "TahomaB";
	sizeExLevel = .04;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	stickX[] = {.2,{"Gamma",1,1.5}};
	stickY[] = {.2,{"Gamma",1,1.5}};
	ptsPerSquareSea = 6;
	ptsPerSquareTxt = 8;
	ptsPerSquareCLn = 8;
	ptsPerSquareExp = 8;
	ptsPerSquareCost = 8;
	ptsPerSquareFor = "4.0f";
	ptsPerSquareForEdge = "10.0f";
	ptsPerSquareRoad = 2;
	ptsPerSquareObj = 10;
	showCountourInterval = 0;
	onMouseMoving = "mouseX = (_this Select 1);mouseY = (_this Select 2)";
	onMouseButtonDown = "mouseButtonDown = _this Select 1";
	onMouseButtonUp = "mouseButtonUp = _this Select 1";				
	class CustomMark {
		icon = "\ca\ui\data\map_waypoint_ca.paa";
		color[] = {0,0,1,1};
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Bunker {
		icon = "\ca\ui\data\map_bunker_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = 1.5 * 14 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Bush {
		icon = "\ca\ui\data\map_bush_ca.paa";
		color[] = {.55,.64,.43,1};
		size = 14;
		importance = .2 * 14 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class BusStop {
		icon = "\ca\ui\data\map_busstop_ca.paa";
		color[] = {0,0,1,1};
		size = 10;
		importance = 1 * 10 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Command {
		icon = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0,.9,0,1};
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Cross {
		icon = "\ca\ui\data\map_cross_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = .7 * 16 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Fortress {
		icon = "\ca\ui\data\map_bunker_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = 2 * 16 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Fuelstation {
		icon = "#(argb,8,8,3)color(0,0,0,1)";
		color[] = {0,0,0,1};
		size = 16;
		importance = 2 * 16 * .05;
		coefMin = .75;
		coefMax = 4;
	};
	class Fountain {
		icon = "\ca\ui\data\map_fountain_ca.paa";
		color[] = {0,.35,.7,1};
		size = 12;
		importance = 1 * 12 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Hospital {
		icon = "\ca\ui\data\map_hospital_ca.paa";
		color[] = {.78,0,.05,1};
		size = 16;
		importance = 2 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
	class Chapel {
		icon = "\ca\ui\data\map_chapel_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = 1 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class Church {
		icon = "\ca\ui\data\map_church_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = 2 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class Legend {
		x = "SafeZoneX";
		y = "SafeZoneY";
		w = .34;
		h = .152;
		font = "Zeppelin32";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
		colorBackground[] = {0,0,0,1};
		color[] = {0,0,0,1};
	};
	class Lighthouse {
		icon = "\ca\ui\data\map_lighthouse_ca.paa";
		color[] = {.78,0,.05,1};
		size = 20;
		importance = 3 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class Quay {
		icon = "\ca\ui\data\map_quay_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = 2 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
	class Rock {
		icon = "\ca\ui\data\map_rock_ca.paa";
		color[] = {0,0,1,1};
		size = 12;
		importance = .5 * 12 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Ruin {
		icon = "\ca\ui\data\map_ruin_ca.paa";
		color[] = {.78,0,.05,1};
		size = 16;
		importance = 1.2 * 16 * .05;
		coefMin = 1;
		coefMax = 4;
	};
	class SmallTree {
		icon = "\ca\ui\data\map_smalltree_ca.paa";
		color[] = {.55,.64,.43,1};
		size = 12;
		importance = .6 * 12 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Stack {
		icon = "\ca\ui\data\map_stack_ca.paa";
		color[] = {0,0,1,1};
		size = 20;
		importance = 2 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class Task {
		icon = "\ca\ui\data\ui_taskstate_current_CA.paa";
		iconCreated = "\ca\ui\data\ui_taskstate_new_CA.paa";
		iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
		iconDone = "\ca\ui\data\ui_taskstate_done_CA.paa";
		iconFailed = "\ca\ui\data\ui_taskstate_failed_CA.paa";
		color[] = {.863,.584,.0,1};
		colorCreated[] = {.95,.95,.95,1};
		colorCanceled[] = {.606,.606,.606,1};
		colorDone[] = {.424,.651,.247,1};
		colorFailed[] = {.706,.0745,.0196,1};
		size = 10;
		coefMin = 1;
		coefMax = 4;
		importance = 1;
	};
	class Tree {
		icon = "\ca\ui\data\map_tree_ca.paa";
		color[] = {.55,.64,.43,1};
		size = 12;
		importance = .9 * 16 * .05;
		coefMin = .25;
		coefMax = 4;
	};
	class Tourism {
		icon = "\ca\ui\data\map_tourism_ca.paa";
		color[] = {.78,0,.05,1};
		size = 16;
		importance = 1 * 16 * .05;
		coefMin = .7;
		coefMax = 4;
	};
	class Transmitter {
		icon = "\ca\ui\data\map_transmitter_ca.paa";
		color[] = {0,0,1,1};
		size = 20;
		importance = 2 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class ViewTower {
		icon = "\ca\ui\data\map_viewtower_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = 2.5 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
	class Watertower {
		icon = "\ca\ui\data\map_watertower_ca.paa";
		color[] = {0,.35,.7,1};
		size = 32;
		importance = 1.2 * 16 * .05;
		coefMin = .9;
		coefMax = 4;
	};
	class Waypoint {
		icon = "\ca\ui\data\map_waypoint_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = 2.5 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
	class WaypointCompleted {
		icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = 2.5 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
	class ActiveMarker {
		icon = "";
		color[] = {0,0,1,1};
		size = 14;
		importance = 2.5 * 16 * .05;
		coefMin = .5;
		coefMax = 4;
	};
};
class RscText {
	access = 0;
	type =0;
	idc = -1;
	x = "0";
	y = "0";
	h = "0.037";
	w = "0.3";
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = "Zeppelin32";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	colorBackground[] = {0,0,0,0};
	linespacing = 1;
	text = "";
	fixedWidth = 0;
};
class RscPicture {
	shadow = 0;
	colorText[] = {1,1,1,1};
	x = "0";
	y = "0";
	w = "0.2";
	h = "0.15";
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
};
class RscPictureGUI {
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = "0";
	y = "0";
	w = "0.2";
	h = "0.15";
};
class RscTextGUI {
    type = 0;
    idc = -1;
    style = 0x02;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1, 1, 1, 0.5};
    //color[] = {1, 1, 1, 0.5};
    font = "TahomaB";
    size = 0.03;
    sizeEx = 0.03;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
};
class RscProgress {
	x = "0.344";
	y = "0.619";
	w = "0.313726";
	h = "0.0261438";
	texture = "\ca\ui\data\loadscreen_progressbar_ca.paa";
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,1,1,1};
};
class RscProgressNotFreeze {
	idc = -1;
	type = 45;
	style = 0;
	x = "0.022059";
	y = "0.911772";
	w = "0.029412";
	h = "0.039216";
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};
class RscActiveText;
class RscStructuredText {
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	x = "0";
	y = "0";
	h = "0.035";
	w = "0.1";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	shadow = 1;
	class Attributes {
		font = "Zeppelin32";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
};
class RscListBox {
	access = 0;
	type = 5;
	w = "0.4";
	h = "0.4";
	rowHeight = 0;
	color[] = {0.95, 0.95, 0.95, 0.5};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorScrollbar[] = {0,0,1,1};
	colorSelect[] = {0, 0, 0, 1};
	colorSelect2[] = {0, 0, 0, 1};
	colorSelectBackground[] = {0.7, 0.7, 0.7, 1};
	colorSelectBackground2[] = {0.7, 0.7, 0.7, 1};
	colorDisabled[] = {0.8, 0.3, 0.3, 0.75};
	colorBackground[] = {0,0,0,0.5};
	soundSelect[] = {"",0.1,1};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ScrollBar {
		color[] = {0,0,1,1};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 1};
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
		border = "\ca\ui\data\ui_border_frame_ca.paa";
	};
	class ListScrollBar: ScrollBar {};
	style = 16;
	font = "Zeppelin32";
	shadow = 0;
	sizeEx = 0.035;
	period = 0;
	maxHistoryDelay = 0;
	autoScrollRewind = 0;
	autoScrollDelay = 0;
	autoScrollSpeed = 0;
};
class RscGUIListBox : RscListBox {
	color[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 0.75};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0.6, 0.839, 0.47, 0.3};
	colorSelectBackground2[] = {0.6, 0.839, 0.47, 1};
	period = 0;
	colorBackground[] = {0, 0, 0, 1};
	sizeEx = 0.035;
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
		border = "\ca\ui\data\igui_border_scroll_ca.paa";
	};
};
class RscList {
	type = 5;
	style = 69;
	idc = -1;
	text = "";
	w = .275;
	h = .04;
	colorSelect[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {1,1,1,1};
	colorSelectBackground[] = {.40, .43, .28, .5};
	colorScrollbar[] = {.2, .2, .2, 1};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = .45;
	rowHeight = .04;
	color[] = {.7, .7, .7, 1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,.3};
	font = "Zeppelin32";
	sizeEx = .023;
	soundSelect[] = {"",.1,1};
	soundExpand[] = {"",.1,1};
	soundCollapse[] = {"",.1,1};
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	class ScrollBar
	{
		color[] = {1, 1, 1, 1};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 1};
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
};
class RscButtonBase {
	idc = -1;
	type = 16;
	style = 0;	
	w = .183825;
	h = .104575;	
	color[] = {.95, .95, .95, 1};
	color2[] = {1, 1, 1, .4};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, .4};
	colorDisabled[] = {1, 1, 1, .25};	
	periodFocus = 1.2;
	periodOver = .8;	
	class HitZone {
		left = .004;
		top = .029;
		right = .004;
		bottom = .029;		
	};
	class ShortcutPos {
		left = .004;
		top = .026;
		w = .0392157;
		h = .0522876;		
	};
	class TextPos {	
		left = .05;
		top = .025;
		right = .005;
		bottom = .025;	
	};
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.01.paa";
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa";
	textureNoShortcut = "";
	period = .4;
	font = "Zeppelin32";
	size = .023;
	sizeEx = .023;
	text = "";
	
	soundEnter[] = {"\ca\ui\data\sound\mouse2", .09, 1};
	soundPush[] = {"\ca\ui\data\sound\new1", .09, 1};
	soundClick[] = {"\ca\ui\data\sound\mouse3", .07, 1};
	soundEscape[] = {"\ca\ui\data\sound\mouse1", .09, 1};
	
	action = "";
	
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "1";	
	};
	
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";	
	};
};
class RscSlider {
	access = 0;
	type = 3;
	style = 1024;
	w = "0.3";
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	shadow = 0;
	h = "0.025";
};
class RscStructuredTextGUI: RscStructuredText {
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes {
		align = "center";
		valign = "middle";
	};
};
class RscScrollBar {
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
	arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
	border = "\ca\ui\data\ui_border_frame_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscControlsgroup {
	type = 15;
	idc = -1;
	style = 16;
	x = "(safeZoneX + (SafezoneW * 0.0163))";
	y = "(safeZoneY + (SafezoneH * 0.132))";
	w = "(SafezoneW  * 0.31)";
	h = "(SafezoneH  * 0.752)";
	class VScrollbar {
		color[] = {0,0,1,1};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 1};
		width = 0.015;
		autoScrollSpeed = -1;
		autoScrollDelay = 0;
		autoScrollRewind = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
		border = "\ca\ui\data\ui_border_frame_ca.paa";
	};
	class HScrollbar {
		color[] = {1, 1, 1, 1};
		height = 0.028;
	};
	class ScrollBar {
		color[] = {0,0,1,1};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 1};
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
		border = "\ca\ui\data\ui_border_frame_ca.paa";
	};
	class Controls {};
};
class RscShortcutButton {
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone {
		left = 0.004;
		top = 0.029;
		right = 0.004;
		bottom = 0.029;
	};
	class ShortcutPos {
		left = 0.0145;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos {
		left = 0.05;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {0.8784,0.8471,0.651,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,0.4};
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 2;
	w = 0.183825;
	h = 0.104575;
	periodFocus = 1.2;
	periodOver = 0.8;
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa";
	period = 0.4;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	action = "";
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscButton {
	access = 0;
    type = 1;
    text = "";
    colorText[] = {1,1,1,.9};
    colorDisabled[] = {0.4,0.4,0.4,0};
    colorBackground[] = {0.75,0.75,0.75,0.8};
    colorBackgroundDisabled[] = {0,0.0,0};
    colorBackgroundActive[] = {0.75,0.75,0.75,1};
    colorFocused[] = {0.75,0.75,0.75,.5};
    colorShadow[] = {0.023529,0,0.0313725,1};
    colorBorder[] = {0.023529,0,0.0313725,1};
    soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
    soundPush[] = {"\ca\ui\data\sound\new1",0,0};
    soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
    soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
    style = 2;
    x = "0";
    y = "0";
    w = "0.055589";
    h = "0.039216";
    shadow = 2;
    font = "Bitstream";
    sizeEx = 0.03921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};
class RscButtonMenu : RscButton {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};	
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	textureNoShortcut = "";
};
class RscEdit {
	access = 0;
	type = 2;
	x = "0";
	y = "0";
	h = "0.04";
	w = "0.2";
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorDisabled[] = {1,1,1,0.25};
	canModify = 1;
};
class RscTitle: RscText {
	style = 0;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {0.95,0.95,0.95,1};
};
class RscLoadingText : RscText {
	style = 2;
	x = "0.323532";
	y = "0.666672";
	w = "0.352944";
	h = "0.039216";
	sizeEx = 0.03921;
	colorText[] = {0.543,0.5742,0.4102,1.0};
};
class CA_Title: RscTitle{};
class RscProgressF {
	type = 8;
	style = 0;
	colorFrame[] = {1,1,1,1};
	colorBar[] = {1,1,1,0.5};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	w = 1;
	h = 0.02;
};
class CfgSounds {
    sounds[] = {carBeep};
	class carBeep {
		name="carBeep";
		sound[]= {"GG\GUI\carBeep.ogg",0.9,1};
		titles[] = {};
    };
};
class DayZ_loadingScreen { 
	idd = -1;
	duration = 10e10;
	fadein = 0;
	fadeout = 0;
	name = "loading screen";
	class controlsBackground {
		class blackBG : RscText {
			idc = 102;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,1};
		};
	};
	class controls {
		class Title1 : RscLoadingText {idc = 105;text = "$STR_LOADING";};
		class CA_Progress2 : RscProgressNotFreeze {idc = 103;};
		class CA_Progress : RscProgress {
			idc = 104;
			type = 8;
			style = 0;
			texture = "\ca\ui\data\loadscreen_progressbar_ca.paa";
		};
		class Name2: RscText {
			idc = 101;
			x = "0.05";
			y = "0.029412";
			w = "0.9";
			h = "0.04902";
			text = "";
			sizeEx = 0.05;
			colorText[] = {0.543,0.5742,0.4102,1.0};
		};
	};
};
class ckc_ui {
	idd = 118339;
	movingenable = 0;
	class Controls {
		class ComboLockUIPic : RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\combo_gui.paa";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class top_combo : RscPicture {
			idc = 17734;
			text = "\z\addons\dayz_epoch\ui\top_0.paa";
			x = 0.418883;
			y = 0.234042;
			w = 0.388564;
			h = 0.161072;
		};
		class middle_combo : RscPicture {
			idc = 17735;
			text = "\z\addons\dayz_epoch\ui\mid_0.paa";
			x = 0.420213;
			y = 0.431049;
			w = 0.387234;
			h = 0.161072;
		};
		class bottom_combo : RscPicture {
			idc = 17736;
			text = "\z\addons\dayz_epoch\ui\bot_0.paa";
			x = 0.420212;
			y = 0.616233;
			w = 0.387234;
			h = 0.180772;
		};
		class unlock_combo : RscPicture {
			idc = 17737;
			text = "\z\addons\dayz_epoch\ui\unlock_a.paa";
			x = 0.219415;
			y = 0.762017;
			w = 0.199734;
			h = 0.208353;
		};
		class exit_combo : RscPicture {
			idc = 17738;
			text = "\z\addons\dayz_epoch\ui\exit_a.paa";
			x = 0.863032;
			y = 0.0252169;
			w = 0.0946809;
			h = 0.0724192;
		};
		class main_combo : RscButton {
			idc = -1;
			text = "";
			style = 0x02 + 0x100;
			colorText[] = {1, 1, 1, 0};
			colorDisabled[] = {1, 1, 1, 0};
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0};
			colorShadow[] = {1, 1, 1, 0};
			colorFocused[] = {1, 1, 1, 0};
			soundClick[] = {"", 0.6, 1};
		};
		class top_left : main_combo {
			idc = -1;
			x = 0.43484;
			y = 0.243893;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17734,1,""top""] call ckc_button";
		};
		class top_right : main_combo {
			idc = -1;
			x = 0.660904;
			y = 0.241923;
			w = 0.147872;
			h = 0.135461;
			onButtonClick = "[17734,0,""top""] call ckc_button";
		};
		class mid_left : main_combo {
			idc = -1;
			x = 0.43484;
			y = 0.433018;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17735,1,""mid""] call ckc_button";
		};
		class mid_right : main_combo {
			idc = -1;
			x = 0.659574;
			y = 0.427108;
			w = 0.153191;
			h = 0.135461;
			onButtonClick = "[17735,0,""mid""] call ckc_button";
		};
		class bottom_left : main_combo {
			idc = -1;
			x = 0.4375;
			y = 0.637904;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17736,1,""bot""] call ckc_button";
		};
		class bottom_right : main_combo {
			idc = -1;
			x = 0.658245;
			y = 0.633964;
			w = 0.155851;
			h = 0.133491;
			onButtonClick = "[17736,0,""bot""] call ckc_button";
		};
		class exit_combo_btn : main_combo {
			idc = -1;
			x = 0.827128;
			y = 0.0153665;
			w = 0.158511;
			h = 0.153191;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);";
		};
		class unlock_combo_btn : main_combo {
			idc = -1;
			x = 0.218085;
			y = 0.762017;
			w = 0.201064;
			h = 0.233964;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);call ckc_upddoor;";
		};
	};
};
class ckc_SafeUI {
	idd = 118338;
	movingenable = 0;
	class Controls {
		class SafeKeyPadPic : RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\pictures\SafeKeyPad.paa";
			x = "0.361701 * safezoneW + safezoneX";
			y = "0.255985 * safezoneH + safezoneY";
			w = "0.281637 * safezoneW";
			h = "0.470087 * safezoneH";
		};
		class b1 : RscButton {
			idc = -1;
			x = "0.444897 * safezoneW + safezoneX";
			y = "0.39423 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "1";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(1);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.ogg", 0.5, 1};
		};
		class b4 : RscButton {
			idc = -1;
			x = "0.444897 * safezoneW + safezoneX";
			y = "0.441239 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "4";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(4);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_4.ogg", 0.5, 1};
		};
		class b7 : RscButton {
			idc = -1;
			x = "0.444897 * safezoneW + safezoneX";
			y = "0.488248 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "7";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(7);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_7.ogg", 0.5, 1};
		};
		class b2 : RscButton {
			idc = -1;
			x = "0.487755 * safezoneW + safezoneX";
			y = "0.39423 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "2";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(2);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_2.ogg", 0.5, 1};
		};
		class b8 : RscButton {
			idc = -1;
			x = "0.487755 * safezoneW + safezoneX";
			y = "0.488248 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "8";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(8);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_8.ogg", 0.5, 1};
		};
		class b5 : RscButton {
			idc = -1;
			x = "0.487755 * safezoneW + safezoneX";
			y = "0.441239 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "5";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(5);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_5.ogg", 0.5, 1};
		};
		class b3 : RscButton {
			idc = -1;
			x = "0.530613 * safezoneW + safezoneX";
			y = "0.39423 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "3";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(3);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_3.ogg", 0.5, 1};
		};
		class b6 : RscButton {
			idc = -1;
			x = "0.530613 * safezoneW + safezoneX";
			y = "0.441239 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "6";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(6);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_6.ogg", 0.5, 1};
		};
		class b9 : RscButton {
			idc = -1;
			x = "0.530613 * safezoneW + safezoneX";
			y = "0.488248 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "9";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(9);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.ogg", 0.5, 1};
		};
		class b0 : RscButton {
			idc = -1;
			x = "0.487755 * safezoneW + safezoneX";
			y = "0.535257 * safezoneH + safezoneY";
			w = "0.0283751 * safezoneW";
			h = "0.0490667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.05;
			text = "0";
			colorText[] = {0, 0.6, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			action = "dayz_combination = dayz_combination + str(0);";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.ogg", 0.5, 1};
		};
		class bcancel : RscButton {
			idc = -1;
			x = "0.444897 * safezoneW + safezoneX";
			y = "0.545257 * safezoneH + safezoneY";
			w = "0.0263751 * safezoneW";
			h = "0.0440667 * safezoneH";
			font = "Zeppelin33";
			sizeEx = 0.1;
			text = "*";
			colorText[] = {1, 0.1, 0.1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_star.ogg", 0.6, 1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);";
		};
		class benter : RscButton {
			idc = -1;
			x = "0.530613 * safezoneW + safezoneX";
			y = "0.535257 * safezoneH + safezoneY";
			w = "0.0263751 * safezoneW";
			h = "0.0440667 * safezoneH";
			font = "Zeppelin33Italic";
			sizeEx = 0.1;
			text = "#";
			colorText[] = {0, 1, 0, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000); [] spawn ckc_updSafe;";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_hash.ogg", 0.6, 1};
		};
	};
};
class BankDialog {
	idd = 420000;
	movingenable = 0;
	class controlsBackground {
		class BD_background: RscText {
			idc = -1;
			text = "";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.274947 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class BD_titleBG: RscPicture {
			moving = 1;
			idc = -1;
			text = "GG\GUI\background_ca.paa";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class BD_title: RscText {
			idc = -1;
			text = "GhostzGamerz Hived Bank";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_wallet: RscText {
			idc = -1;
			text = "Wallet:";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.445011 * safezoneH + safezoneY;
			w = 0.0386578 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_walletBAL: RscText {
			idc = 13001;
			text = "0 gold coins";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.472505 * safezoneH + safezoneY;
			w = 0.154631 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_bank: RscText {
			idc = -1;
			text = "Bank:";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.445011 * safezoneH + safezoneY;
			w = 0.0386578 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_bankBAL: RscText {
			idc = 13002;
			text = "0 gold coins";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.472505 * safezoneH + safezoneY;
			w = 0.154631 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_editTXT: RscText {
			idc = -1;
			text = "Amount:";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.527495 * safezoneH + safezoneY;
			w = 0.0451008 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class BD_editboxBG: RscText {
			idc = 13003;
			text = "";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.554989 * safezoneH + safezoneY;
			w = 0.309263 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,1,0.25};
		};
	};
	class Controls {
		class BD_editBox: RscEdit {
			idc = 13000;
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.554989 * safezoneH + safezoneY;
			w = 0.309263 * safezoneW;
			h = 0.0274947 * safezoneH;
		};
		class BD_depositBTN: RscButton {
			idc = -1;
			text = "Deposit";
			x = 0.371141 * safezoneW + safezoneX;
			y = 0.609979 * safezoneH + safezoneY;
			w = 0.0644297 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "[(ctrlText 13000)] spawn bankDialogDepositAmount; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class BD_withdrawBTN: RscButton {
			idc = -1;
			text = "Withdraw";
			x = 0.56443 * safezoneW + safezoneX;
			y = 0.609979 * safezoneH + safezoneY;
			w = 0.0644297 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "[(ctrlText 13000)] spawn bankDialogWithdrawAmount; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class BD_closeBTN: RscButton {
			idc = -1;
			text = "Close";
			font = "Zeppelin32";
			x = 0.641745 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.0386578 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			onButtonClick = "closeDialog 0;";
		};
	};
};
class GivePlayerDialog {
	idd = 420001;
	movingenable = 0;
	class controlsBackground {
		class GPD_background: RscText {
			idc = -1;
			text = "";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.274947 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class GPD_titleBG: RscPicture {
			moving = 1;
			idc = -1;
			text = "GG\GUI\background_ca.paa";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class GPD_title: RscText {
			idc = -1;
			text = "Transfer Coins";
			x = 0.319597 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.360806 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class GPD_editboxTXT: RscText {
			idc = -1;
			text = "Amount:";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.527495 * safezoneH + safezoneY;
			w = 0.0451008 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class GPD_curTXT: RscText {
			idc = -1;
			text = "Wallet:";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.445011 * safezoneH + safezoneY;
			w = 0.0386578 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class GPD_curBal: RscText {
			idc = 14001;
			text = "0 gold coins";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.472505 * safezoneH + safezoneY;
			w = 0.154631 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class GPD_editboxBG: RscText {
			idc = 13003;
			text = "";
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.554989 * safezoneH + safezoneY;
			w = 0.309263 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,1,0.25};
		};
	};
	class Controls {
		class GPD_editbox: RscEdit {
			idc = 14000;
			x = 0.345369 * safezoneW + safezoneX;
			y = 0.554989 * safezoneH + safezoneY;
			w = 0.309263 * safezoneW;
			h = 0.0274947 * safezoneH;
		};
		class GPD_transferBTN: RscButton {
			idc = -1;
			text = "Transfer";
			x = 0.371141 * safezoneW + safezoneX;
			y = 0.609979 * safezoneH + safezoneY;
			w = 0.0644297 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "(ctrlText 14000) spawn givePlayerAmount; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class GPD_closeBTN: RscButton {
			idc = -1;
			text = "Close";
			font = "Zeppelin32";
			x = 0.641745 * safezoneW + safezoneX;
			y = 0.390021 * safezoneH + safezoneY;
			w = 0.0386578 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			onButtonClick = "closeDialog 0;";
		};
	};
};
class RefuelDialog {
	idd = 420003;
	movingenable = 1;
	moving = 1;
	onLoad = "uiNamespace setVariable ['RefuelDialog', _this select 0]";
	class controlsBackground {
		class RD_background: RscText {
			idc = -1;
			text = "";
			x = 0.332386 * safezoneW + safezoneX;
			y = 0.334976 * safezoneH + safezoneY;
			w = 0.34812 * safezoneW;
			h = 0.357552 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RD_titleBG: RscPicture {
			idc = 1200;
			moving = 1;
			text = "GG\GUI\background_ca.paa";
			x = 0.332386 * safezoneW + safezoneX;
			y = 0.307472 * safezoneH + safezoneY;
			w = 0.34812 * safezoneW;
			h = 0.027504 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class RD_title: RscText {
			idc = -1;
			text = "Refuel and Repair";
			x = 0.332439 * safezoneW + safezoneX;
			y = 0.307482 * safezoneH + safezoneY;
			w = 0.348012 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RD_vehicleFuel: RscText {
			idc = -1;
			text = "Vehicle fuel:";
			x = 0.358217 * safezoneW + safezoneX;
			y = 0.348736 * safezoneH + safezoneY;
			w = 0.0644466 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RD_fbuyInfo: RscText {
			idc = -1;
			text = "Fuel to buy:";
			x = 0.358173 * safezoneW + safezoneX;
			y = 0.389984 * safezoneH + safezoneY;
			w = 0.0644667 * safezoneW;
			h = 0.027504 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RD_fuelInfo: RscStructuredText {
			idc = 4601;
			text = "Fuel Info";
			x = 0.358217 * safezoneW + safezoneX;
			y = 0.444995 * safezoneH + safezoneY;
			w = 0.154672 * safezoneW;
			h = 0.137513 * safezoneH;
		};
		class RD_fuelCost: RscStructuredText {
			idc = 4603;
			text = "";
			x = 0.525779 * safezoneW + safezoneX;
			y = 0.444995 * safezoneH + safezoneY;
			w = 0.128893 * safezoneW;
			h = 0.0687566 * safezoneH;
		};
		class RD_repairCost: RscStructuredText {
			idc = 4604;
			text = "";
			x = 0.525779 * safezoneW + safezoneX;
			y = 0.513751 * safezoneH + safezoneY;
			w = 0.128893 * safezoneW;
			h = 0.0687566 * safezoneH;
		};
	};
	class Controls {
		class RD_currentFuel: RscProgressF {
			idc = 4600;
			x = 0.429109 * safezoneW + safezoneX;
			y = 0.348736 * safezoneH + safezoneY;
			w = 0.225564 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorBackground[] = {1,1,1,0.5};
			colorText[] = {1,0,0,0.5};
			color[] = {0,1,0,0.5};
		};
		class RscSliderFuel {
			idc = 4602;
			x = 0.429087 * safezoneW + safezoneX;
			y = 0.389984 * safezoneH + safezoneY;
			w = 0.225634 * safezoneW;
			h = 0.027504 * safezoneH;
			type = 3;
			style = 0x400;
			color[] = {1, 1, 1, 0.5};
			coloractive[] = {1, 1, 1, 1};
			onSliderPosChanged = "_this call RefuelUpdateCost;";
		};
		class RD_closeBTN: RscButton {
			idc = -1;
			text = "Close";
			font = "Zeppelin32";
			x = 0.641827 * safezoneW + safezoneX;
			y = 0.307472 * safezoneH + safezoneY;
			w = 0.03868 * safezoneW;
			h = 0.027504 * safezoneH;
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RD_buyBTN: RscButton {
			idc = -1;
			text = "Buy Fuel";
			x = 0.396885 * safezoneW + safezoneX;
			y = 0.610011 * safezoneH + safezoneY;
			w = 0.0515573 * safezoneW;
			h = 0.0550052 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "call RefuelBuyFuel; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RD_repairBTN: RscButton {
			idc = 4605;
			text = "Repair";
			x = 0.564447 * safezoneW + safezoneX;
			y = 0.610011 * safezoneH + safezoneY;
			w = 0.0515573 * safezoneW;
			h = 0.0550052 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "call RepairVehicle; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
	};
};
class AH_RSC_AHT {
	idd = 3030;
	movingEnable = 1;
	moving = 1;
	enableSimulation = 0;
	onload = "";
	onunload = "";
	class controlsBackground {
		class Menu_titlebarBG: RscPicture {
			idc = 1200;
			text = "GG\GUI\background_ca.paa";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.529 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0,0,1,1};
		};
		class Menu_MBoxBG : RscText {
			idc = 1000;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.75";
			w = "0.3";
			h = "safezoneH - 0.93";
			colorBackground[] = {0,0,1,0.5};
		};
		class Menu_TBoxBG : RscText {
			idc = 1001;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 1.143";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class Menu_BBox : RscText {
			idc = 1002;
			type = 0;
			text = "";
			x = "0.2365 * safezoneW + safezoneX + 0.9774245";
			y = "safezoneY + 1.65";
			w = "0.301";
			h = "safezoneH - 1.68";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class Menu_titlebar: RscText {
			moving = 1;
			idc = 1004;
			type = 0;
			text = "Title";
			font = "TahomaB";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.529 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,-1};
		};
		class MainTreeBG : RscText {
			idc = 1005;
			type = 0;
			text = "";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 0.07 - 0.03";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class MainListBG : RscText {
			idc = 1006;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.3";
			y = "safezoneY + 0.07";
			w = "safezoneWAbs - 1.75";
			h = "safezoneH - 0.07 - 0.03";
			colorBackground[] = {0, 0, 0, 0.8};
		};
	};
	class Controls {
		class Menu_TboxHolder: RscControlsGroup {
			idc = 100301;
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 1.143";
			sizeEx = 0.023;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,-1};
			class Controls {
				class Menu_TBox : RscStructuredText {
					idc = 1003;
					text = "";
					x = "0";
					y = "0";
					w = "0.29";
					h = "1";
				};
			};
		};
		class MainTree {
			style = 0;
			maxHistoryDelay = 0;
			idc = 1;
			type = 5;
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 0.07 - 0.03";
			font = "Zeppelin32";
			sizeEx = 0.023;
			text = "";
			rowHeight = 0;
			color[] = {0,0,1,0.5};
			colorText[] = {0.643,0.643,0.643,1};
			colorScrollbar[] = {0,0,1,1};
			colorSelect[] = {0, 0, 0, 1};
			colorSelect2[] = {0, 0, 0, 1};
			colorSelectBackground[] = {0,0,1,1};
			colorSelectBackground2[] = {0,0,1,1};
			colorDisabled[] = {0,0,1,0.75};
			period = 0;
			colorBackground[] = {0, 0, 0, 0.5};
			soundSelect[] = {"", 0.1, 1};
			onLBSelChanged = "";
			onLBDblClick = ";";
			onMouseButtonDown = "";
			onKeyDown = "";
			class ScrollBar {
				color[] = {0,0,1,1};
				colorActive[] = {1, 1, 1, 1};
				colorDisabled[] = {1, 1, 1, 1};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
				border = "\ca\ui\data\ui_border_frame_ca.paa";
			};
			class ListScrollBar: ScrollBar {};
			autoScrollRewind = 0;
			autoScrollDelay = 0;
			autoScrollSpeed = 0;
			shadow = 0;
		};
		class MainList : MainTree {
			color[] = {0,0,1,0.5};
			colorActive[] = {0,0,1,0.5};
			colorDisabled[] = {0,0,1,0.5};
			colorBackground[] = {0, 0, 0, 0.8};
			idc = 2;
			x = "0.237 * safezoneW + safezoneX + 0.3";
			y = "safezoneY + 0.07";
			w = "safezoneWAbs - 1.75";
			h = "safezoneH - 0.07 - 0.03";
			onLBSelChanged = "";
			onLBDblClick = "";
			onMouseButtonDown = "";
			onKeyDown = "";
			shadow = false;
		};
		class Menu_MBox : RscEdit {
			idc = 4;
			style = "0x00 + 0x10";
			linespacing = 1;
			text = "";
			font = "EtelkaMonospaceProBold";
			htmlControl = true;
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.75";
			w = "0.3";
			h = "safezoneH - 0.93";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,0,0};
		};
		class Menu_btnTTL: RscButton {
			idc = 781;
			text = "Run target";
			font = "Zeppelin32";
			onButtonClick = "[format ['if (name player == ''%1'') then {'+(ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)))+'};',(lbtext [1,(lbCurSel 1)])]] spawn admin_dothis;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.655";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnTTR: RscButton {
			idc = 782;
			text = "Clear text";
			font = "Zeppelin32";
			onButtonClick = "((ctrlParent (_this select 0)) displayCtrl 4) ctrlSetText ''";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.655";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnTL: RscButton {
			idc = 891;
			text = "Run local";
			font = "Zeppelin32";
			onButtonClick = "call compile (ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)));";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.7";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnTR: RscButton {
			idc = 892;
			text = "Run global";
			font = "Zeppelin32";
			onButtonClick = "[ctrlText (((ctrlParent (_this select 0)) displayCtrl 4))] spawn admin_dothis;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.7";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnBL: RscButton {
			idc = 981;
			text = "MSG server";
			font = "Zeppelin32";
			onButtonClick = "ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)) spawn msg_all;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.745";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnBR: RscButton {
			idc = 982;
			text = "MSG target";
			font = "Zeppelin32";
			onButtonClick = "ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)) spawn msg_player";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.745";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorBackground[] = {0,0,1,1};
		};
		class Menu_btnDisc: RscButton {
			idc = 990;
			text = "Disconnect";
			font = "Zeppelin32";
			onButtonClick = "endMission 'loser'";
			x = "0.712 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.052 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
	};
};
class AH_RSC_TXT {
	idd = 71069;
	movingEnable = true;
	moving = 1;
	onLoad = "";
	onUnload = "";
	class controlsBackground {
		class TXT_titlebg: RscPicture {
			idc = 1200;
			text = "GG\GUI\background_ca.paa";
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.444978 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0,0,1,1};
		};
		class TXT_title: RscText {
			idc = 1000;
			type = 0;
			text = "Title";
			font = "TahomaB";
			moving = 1;
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.444978 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,-1};
		};
		class TXT_mainbg: RscText {
			idc = 1001;
			text = "";
			type = 0;
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.466986 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.0880359 * safezoneH";
			colorBackground[] = {0,0,0,0.5};
		};
		class TXT_editTitle: RscText {
			idc = 1002;
			text = "Text:";
			font = "Zeppelin32";
			x = "0.381412 * safezoneW + safezoneX";
			y = "0.466986 * safezoneH + safezoneY";
			w = "0.232021 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.8,0.8,0.9};
		};
		class TXT_editboxbg: RscText {
			text = "";
			idc = 1003;
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.488995 * safezoneH + safezoneY";
			w = "0.216553 * safezoneW";
			h = "0.022009 * safezoneH";
			colorBackground[] = {0,0,1,0.2};
		};
	};
	class controls {
		class TXT_editbox: RscEdit {
			idc = 101;
			text = "";
			font = "EtelkaMonospaceProBold";
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.488995 * safezoneH + safezoneY";
			w = "0.216553 * safezoneW";
			h = "0.022009 * safezoneH";
			colorBackground[] = {1,1,1,1};
			colorActive[] = {0,0,1,1};
		};
		class TXT_btnLeft: RscButton {
			idc = 1;
			text = "OK";
			font = "Zeppelin32";
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			onButtonClick = "TXT_var = ctrlText (((ctrlParent (_this select 0)) displayCtrl 101));";
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.522009 * safezoneH + safezoneY";
			w = "0.0412482 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0,0,1,1};
			colorBackground[] = {0.643,0.643,0.643,1};
		};
		class TXT_btnRight: RscButton {
			idc = 2;
			text = "Cancel";
			font = "Zeppelin32";
			shortcuts[] = {1};
			onButtonClick = "closeDialog 0;";
			x = "0.561872 * safezoneW + safezoneX";
			y = "0.522009 * safezoneH + safezoneY";
			w = "0.0412482 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0,0,1};
			colorBackground[] = {0.643,0.643,0.643,1};
		};
	};
};
class RscTitles {
	titles[] = {"DeathScreen","TitleScreen","RscTitleStructuredText"};
    class EarPlugs {
	    idd = -1;
	    fadeout=0;
	    fadein=0;
	    onLoad = "uiNamespace setVariable ['EarPlugs', _this select 0]";
	    duration = 10e10;
	    name= "EarPlugs";
	    controlsBackground[] = {};
	    objects[] = {};
	    class controls {
		    class EarPlugs : RscStructuredText{
			    idc = 1;
			    size = 0.040;
			    text = "";
			    colorBackground[] = { 0,0,0,0 };
                x = 0.85 * safezoneW + safezoneX;
			    y = 0.91 * safezoneH + safezoneY;
                w = 0.2;
                h = 0.2;				
		    };
	    };
    };	
	class DeathScreen {
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture {
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\z\addons\dayz_epoch\ui\screen_death_ca.paa";
		};
	};
	class TitleScreen {
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "TitleScreen";
		controls[] = {"TitleScreen"};
		class TitleScreen: RscPicture {
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz\ui\screen_title_ca.paa";
		};
	};
	class Default {
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	class playerKillScore {
		idd = 6902;
		movingEnable = 0;
		duration = 5;
		name = "playerKillScore";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
		class controlsBackground {
			class RscPicture_1201: RscPictureGUI {
				idc = 1400;
				text = "\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
				x = "0.044687 * safezoneW + safezoneX";
				y = "0.934779 * safezoneH + safezoneY";
				w = "0.06";
				h = "0.08";
			};
			class RscPicture_1200: RscPictureGUI {
				idc = 1401;
				text = "\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
				x = "0.044687 * safezoneW + safezoneX";
				y = "0.876025 * safezoneH + safezoneY";
				w = "0.06";
				h = "0.08";
			};
		};
		class Controls {
			class RscText1: RscStructuredTextGUI {
				idc = 1410;
				text = "10";
				x = "(0.044687 * safezoneW + safezoneX) - 0.01";
				y = "0.934779 * safezoneH + safezoneY";
				w = "0.08";
				h = "0.08";
			};
			class RscText2: RscStructuredTextGUI {
				idc = 1411;
				text = "1000";
				x = "(0.044687 * safezoneW + safezoneX) - 0.01";
				y = "0.876025 * safezoneH + safezoneY";
				w = "0.08";
				h = "0.08";
			};
		};
	};
	class playerStatusWaiting {
		idd = 6901;
		movingEnable = 0;
		duration = 100000;
		name = "playerStatusWaiting";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
		class controlsBackground {
			class RscText_1402: RscPictureGUI {
				idc = 1402;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = "0.473572 * safezoneW + safezoneX";
				y = "0.418158 * safezoneH + safezoneY";
				w = "0.0634286 * safezoneW";
				h = "0.136829 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscText_1400: RscPictureGUI {
				idc = 1400;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = "0.473572 * safezoneW + safezoneX";
				y = "0.418158 * safezoneH + safezoneY";
				w = "0.0634286 * safezoneW";
				h = "0";
				colorText[] = {0,0,0,1};
			};
		};
		class Controls {
			class RscPicture_1401: RscPictureGUI {
				idc = 1401;
				text = "\z\addons\dayz_code\gui\status\status_waiting_ca.paa";
				x = "0.434999 * safezoneW + safezoneX";
				y = "0.392207 * safezoneH + safezoneY";
				w = "0.141 * safezoneW";
				h = "0.188013 * safezoneH";
				colorText[] = {0.38,0.63,0.26,1};
			};
		};
	};
	class playerStatusGUI {
		idd = 6900;
		movingEnable = 0;
		duration = 100000;
		name = "statusBorder";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground {
			//BROKEN LEG
	        class RscPicture_1203: RscPictureGUI
	        {
	            idc = 1203;
	            text = "\z\addons\dayz_code\gui\status\status_effect_brokenleg.paa";
	            x = 0.32 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.055*safeZoneH;
	                w = 0.033*safeZoneW;
	            colorText[] = {1,1,1,1};
	        };
			//TEMP BACKGROUND
	        class RscPicture_1908: RscPictureGUI
	        {
	            idc = 1908;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.350 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//TEMP BORDER
	        class RscPicture_1208: RscPictureGUI
	        {
	            idc = 1208;
	            text = "\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa";
	            x = 0.350 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//BLOOD BACKGROUND
	        class RscPicture_1900: RscPictureGUI
	        {
	            idc = 1900;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.380 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//BLOOD BORDER
	        class RscPicture_1200: RscPictureGUI
	        {
	            idc = 1200;
	            text = "\z\addons\dayz_code\gui\status\status_blood_border_ca.paa";
	            x = 0.380 * safezoneW + safezoneX;
	            y = 0.93* safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			
			//FOOD BACKGROUND
	        class RscPicture_1901: RscPictureGUI
	        {
	            idc = 1901;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.41 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//FOOD BORDER
	        class RscPicture_1201: RscPictureGUI
	        {
	            idc = 1201;
	            text = "\z\addons\dayz_code\gui\status\status_food_border_ca.paa";
	            x = 0.41 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//THIRST BACKGROUND
	        class RscPicture_1902: RscPictureGUI
	        {
	            idc = 1902;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.44 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//THIRST BORDER
	        class RscPicture_1202: RscPictureGUI
	        {
	            idc = 1202;
	            text = "\z\addons\dayz_code\gui\status\status_thirst_border_ca.paa";
	            x = 0.44 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//COMBAT BACKGROUND
			class RscPicture_1907: RscPictureGUI
			{
	            idc = 1907;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.475 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//COMBAT BORDER
			class RscPicture_1207: RscPictureGUI
			{
	            idc = 1207;
	            text = "\z\addons\dayz_code\gui\status\status_combat_border_CA.paa";
	            x = 0.475 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//NOISE BACKGROUND
	        class RscPicture_1205: RscPictureGUI
	        {
	            idc = 1205;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.51 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	        };
			//VISIBLE BACKGROUND
	        class RscPicture_1206: RscPictureGUI
	        {
	            idc = 1206;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.54 * safezoneW + safezoneX;
	            y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;			
	        };

			//SURVIVOR ICON
			class RscPicture_1308: RscPictureGUI
			{
				idc = 1308;
				text = "GG\GUI\st_humanity_survivor.paa";
				x = 0.66 * safezoneW + safezoneX;
				y = 0.90 * safezoneH + safezoneY;
				w = 0.027 * safezoneW;
				h = 0.037 * safezoneH;
				colorText[] = {1,1,1,1};
			};
			//BANDIT ICON
			class RscPicture_1309: RscPictureGUI
			{
				idc = 1309;
				text = "GG\GUI\st_humanity_bandit.paa";
				x = 0.66 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.027 * safezoneW;
				h = 0.037 * safezoneH;
				colorText[] = {1,1,1,1};
			};
			//ZOMBIE ICON
			class RscPicture_1310: RscPictureGUI
			{
				idc = 1310;
				text = "GG\GUI\zombie.paa";
				x = 0.66 * safezoneW + safezoneX;
				y = 0.96 * safezoneH + safezoneY;
				w = 0.027 * safezoneW;
				h = 0.037 * safezoneH;
				colorText[] = {1,1,1,1};
			};
			//FPS BACKGROUND
	        class RscText_1322: RscPictureGUI
	        {
	            idc = 1322;
	            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
	            x = 0.95 * safezoneW + safezoneX;
	            y = 0.91 * safezoneH + safezoneY;
	            w = 0.037 * safezoneW;
	            h = 0.047 * safezoneH;
	        };
	    };
	        class Controls {
	        	// LOGO
	        	class RscPicture_7373: RscPictureGUI {
					idc = 7373;//Logo
					text = "GG\GUI\logo.paa";
					x = "(safeZoneX + 0.015)";
					y = "(safeZoneY + safeZoneH) - 0.2";
					colorText[] = {1,1,1,0.8};
					w = "0.13";
					h = "0.15";
				};
				//TEMP ICON
	            class RscPicture_1306: RscPictureGUI
	            {
	                idc = 1306;
					x = 0.35 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	            };		
				//BLOOD ICON
	            class RscPicture_1300: RscPictureGUI
	            {
	                idc = 1300;
	                x = 0.38 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	            };		
				//FOOD ICON
	            class RscPicture_1301: RscPictureGUI
	            {
	                idc = 1301;

	                x = 0.41 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	            };
				//THIRST ICON
	            class RscPicture_1302: RscPictureGUI
	            {
	                idc = 1302;

	                x = 0.44 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;				
	            };
				//BLOOD ICON - BLEEDING
	            class RscPicture_1303: RscPictureGUI
	            {
	                idc = 1303;
	                text = "\z\addons\dayz_code\gui\status\status_bleeding_ca.paa";
	                x = 0.382 * safezoneW + safezoneX;
	                y = 0.932 * safezoneH + safezoneY;
	                h = 0.049*safeZoneH;
	                w = 0.032*safeZoneW;				
	                colorText[] = {1,1,1,0.5};
	            };
				//NOISE ICON
	            class RscPicture_1304: RscPictureGUI
	            {
	                idc = 1304;
	                text = "\z\addons\dayz_code\gui\status\status_noise.paa";
	                x = 0.51 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;				
	            };
				//VISIBLE ICON
	            class RscPicture_1305: RscPictureGUI
	            {
	                idc = 1305;
	                text = "\z\addons\dayz_code\gui\status\status_visible.paa";
	                x = 0.54 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;				
	            };
				//COMBAT ICON
				class RscPicture_1307: RscPictureGUI
	            {
	                idc = 1307;
	                text = "\z\addons\dayz_code\gui\status\status_combat_inside_ca.paa";
	                x = 0.475 * safezoneW + safezoneX;
	                y = 0.93 * safezoneH + safezoneY;
	                h = 0.057*safeZoneH;
	                w = 0.034*safeZoneW;
	            };
				//FPS
	            class RscText_1321: RscTextGUI
	            {
	                idc = 1321;
	                text = "fps";
	                x = 0.95 * safezoneW + safezoneX;
	                y = 0.91 * safezoneH + safezoneY;
	                w = 0.037 * safezoneW;
	                h = 0.047 * safezoneH;
	                size = 0.065;
	                sizeEx = 0.065;
	                colorText[] = {1,1,1,0.0};
	            };
			//SURVIVOR KILLS
			class RscText_1400: RscTextGUI
			{
				idc = 1400;
				text = "1000";
				x = 0.673 * safezoneW + safezoneX;
				y = 0.90 * safezoneH + safezoneY;
				w = 0.037 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			// Coin and Bank Icon
			class RscText_4900: RscTextGUI
	        {
				idc = 4900;
				type = 13;
				size = 0.040;
				x = 0.57 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				h = 0.1*safeZoneH;
				w = 0.1*safeZoneW;	
				colorText[] = {1,1,1,1};
				lineSpacing = 4;
				colorBackground[] = {0,0,0,0};
				text = "";
				shadow = 2;
				class Attributes {
					align = "left";
				};
			};
			//BANDIT KILLS
			class RscText_1402: RscTextGUI
			{
				idc = 1402;
				text = "1000";
				x = 0.673 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.037 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//ZOMBIE KILLS
			class RscText_1403: RscTextGUI
			{
				idc = 1403;
				text = "1000";
				x = 0.673 * safezoneW + safezoneX;
				y = 0.96 * safezoneH + safezoneY;
				w = 0.037 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//BLOOD AMOUNT
			class RscText_1420: RscTextGUI
			{
				idc = 1420;
				text = "1000";
				x = 0.40 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.040 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {0.8,0.07,0.06,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//HUMANITY AMOUNT
			class RscText_1421: RscTextGUI
			{
				idc = 1421;
				text = "1000";
				x = 0.49 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.040 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//SERVER RESTART AMOUNT
			class RscText_1422: RscTextGUI
			{
				idc = 1422;
				text = "X";
				x = 0.61 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.040 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,0.8,0,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//BLOOD LABEL
			class RscText_1423: RscTextGUI
			{
				idc = 1423;
				text = "Blood (%):";
				x = 0.33 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.08 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			//HUMANITY LABEL
			class RscText_1424: RscTextGUI
			{
				idc = 1424;
				text = "Humanity:";
				x = 0.43 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.08 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			// Players near
			class RscText_1425: RscTextGUI
			{
				idc = 1425;
				text = "Server Uptime:";
				x = 0.53 * safezoneW + safezoneX;
				y = 0.895 * safezoneH + safezoneY;
				w = 0.1 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
			class RscText_1429: RscTextGUI
			{
				idc = 1426;
				text = "FPS";
				x = 0.89 * safezoneW + safezoneX;
				y = 0.88 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.047 * safezoneH;
				colorText[] = {1,1,1,1.0};
				size = 0.03;
				sizeEx = 0.03;
			};
		};
	};
	class DZGMHud_Rsc {
		idd = -1;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;

		onLoad = "uiNamespace setVariable ['dzgmHudDisp',_this select 0];";

		duration = 99999999999999999;
		fadein  = 0;
		fadeout = 0;
		class controls
		{
			class Icons : RscStructuredText
			{
				idc = -1;
				style = 0x00;
				x = .9;
				y = .9;
				w = .9;
				h = .9;
				size = .08;
				colorBackground[] = {0,0,0,0};
				colortext[] = {0,0,0,.7};
				text ="";
				class Attributes {
					align = "left";
				};		
			};
			class PlayerIcon00:Icons {idc = 46300 +  0;};
			class PlayerIcon01:Icons {idc = 46300 +  1;};
			class PlayerIcon02:Icons {idc = 46300 +  2;};
			class PlayerIcon03:Icons {idc = 46300 +  3;};
			class PlayerIcon04:Icons {idc = 46300 +  4;};
			class PlayerIcon05:Icons {idc = 46300 +  5;};
			class PlayerIcon06:Icons {idc = 46300 +  6;};
			class PlayerIcon07:Icons {idc = 46300 +  7;};
			class PlayerIcon08:Icons {idc = 46300 +  8;};
			class PlayerIcon09:Icons {idc = 46300 +  9;};
			class PlayerIcon10:Icons {idc = 46300 + 10;};
			class PlayerIcon11:Icons {idc = 46300 + 11;};
			class PlayerIcon12:Icons {idc = 46300 + 12;};
			class PlayerIcon13:Icons {idc = 46300 + 13;};
			class PlayerIcon14:Icons {idc = 46300 + 14;};
			class PlayerIcon15:Icons {idc = 46300 + 15;};
			class PlayerIcon16:Icons {idc = 46300 + 16;};
			class PlayerIcon17:Icons {idc = 46300 + 17;};
			class PlayerIcon18:Icons {idc = 46300 + 18;};
			class PlayerIcon19:Icons {idc = 46300 + 19;};
			class PlayerIcon20:Icons {idc = 46300 + 20;};
			class PlayerIcon21:Icons {idc = 46300 + 21;};
			class PlayerIcon22:Icons {idc = 46300 + 22;};
			class PlayerIcon23:Icons {idc = 46300 + 23;};
			class PlayerIcon24:Icons {idc = 46300 + 24;};
			class PlayerIcon25:Icons {idc = 46300 + 25;};
			class PlayerIcon26:Icons {idc = 46300 + 26;};
			class PlayerIcon27:Icons {idc = 46300 + 27;};
			class PlayerIcon28:Icons {idc = 46300 + 28;};
			class PlayerIcon29:Icons {idc = 46300 + 29;};
			class PlayerIcon30:Icons {idc = 46300 + 30;};
			class PlayerIcon31:Icons {idc = 46300 + 31;};
			class PlayerIcon32:Icons {idc = 46300 + 32;};
			class PlayerIcon33:Icons {idc = 46300 + 33;};
			class PlayerIcon34:Icons {idc = 46300 + 34;};
			class PlayerIcon35:Icons {idc = 46300 + 35;};
			class PlayerIcon36:Icons {idc = 46300 + 36;};
			class PlayerIcon37:Icons {idc = 46300 + 37;};
			class PlayerIcon38:Icons {idc = 46300 + 38;};
			class PlayerIcon39:Icons {idc = 46300 + 39;};
			class PlayerIcon40:Icons {idc = 46300 + 40;};
		};
	};
};
class AH_traderMenu {
	idd = 420420;
	movingEnabled = true;
	moving = 1;
	class controlsBackground {
		class TM_background: RscText {
			idc = -1;
			text = "";
			x = 0.267992 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.464016 * safezoneW;
			h = 0.550052 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class TM_titleBG: RscPicture {
			moving = 1;
			idc = -1;
			text = "GG\GUI\background_ca.paa";
			x = 0.267992 * safezoneW + safezoneX;
			y = 0.224974 * safezoneH + safezoneY;
			w = 0.464016 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class TM_title: RscText {
			idc = -1;
			text = "Trader Menu";
			x = 0.267992 * safezoneW + safezoneX;
			y = 0.224974 * safezoneH + safezoneY;
			w = 0.464016 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0.643,0.643,0.643,1};
		};
		class TM_cattxt: RscText {
			idc = -1;
			text = "Categories";
			x = 0.280881 * safezoneW + safezoneX;
			y = 0.279979 * safezoneH + safezoneY;
			w = 0.116004 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class TM_itemtxt: RscText {
			idc = -1;
			text = "Items";
			x = 0.409775 * safezoneW + safezoneX;
			y = 0.279979 * safezoneH + safezoneY;
			w = 0.0515573 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class TM_buyprice: RscStructuredText {
			idc = 12002;
			text = "";
			x = 0.274437 * safezoneW + safezoneX;
			y = 0.678767 * safezoneH + safezoneY;
			w = 0.077336 * safezoneW;
			h = 0.0550052 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class TM_sellprice: RscStructuredText {
			idc = 12003;
			text = "";
			x = 0.358217 * safezoneW + safezoneX;
			y = 0.678767 * safezoneH + safezoneY;
			w = 0.077336 * safezoneW;
			h = 0.0550052 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class TM_description: RscText {
			idc = 12068;
			text = "Description";
			x = 0.441998 * safezoneW + safezoneX;
			y = 0.651264 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0.643,0.643,0.643,0.9};
		};
		class TM_descTXTholder: RscControlsGroup {
			idc = 100301;
			x = 0.441998 * safezoneW + safezoneX;
			y = 0.678767 * safezoneH + safezoneY;
			w = 0.283565 * safezoneW;
			h = 0.11001 * safezoneH;
			sizeEx = 0.023;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,-1};
			class Controls {
				class TM_descTXT : RscStructuredText {
					idc = 12069;
					text = "";
					x = "0";
					y = "0";
					w = 0.275 * safezoneW;
					h = 0.2 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class TM_currency: RscStructuredText {
			idc = 12006;
			text = "";
			x = 0.267992 * safezoneW + safezoneX;
			y = 0.197471 * safezoneH + safezoneY;
			w = 0.464016 * safezoneW;
			h = 0.0275026 * safezoneH;
		};
		class TM_buysellQTY: RscText {
			idc = 1005;
			text = "Quantity:";
			x = 0.409775 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.0515573 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class TM_deliveryTXT: RscText {
			idc = 1007;
			text = "Delivery:";
			x = 0.538668 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.0451127 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class TM_qtyeditBG: RscText {
			idc = 1006;
			text = "";
			x = 0.461332 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.0644466 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorBackground[] = {0.18,0.392,0.996,1};
		};
		class TM_descTXTbg: RscText {
			idc = 1008;
			text = "";
			x = 0.441998 * safezoneW + safezoneX;
			y = 0.678767 * safezoneH + safezoneY;
			w = 0.283565 * safezoneW;
			h = 0.11001 * safezoneH;
			colorBackground[] = {0.506,0.624,0.969,0.5};
		};
	};
	class Controls {
		class TM_itemlist: RscListBox {
			idc = 12001;
			x = 0.409775 * safezoneW + safezoneX;
			y = 0.307482 * safezoneH + safezoneY;
			w = 0.309344 * safezoneW;
			h = 0.343783 * safezoneH;
			onMouseButtonClick = "[(lbCurSel 12001),(lbData [12710, (lbCurSel 12710)]),(ctrlText 12420)] spawn TraderDialogShowPrices;";
		};
		class TM_catlist: RscListBox {
			idc = 12000;
			x = 0.280881 * safezoneW + safezoneX;
			y = 0.307482 * safezoneH + safezoneY;
			w = 0.128893 * safezoneW;
			h = 0.343783 * safezoneH;
			sizeEx = 0.03;
			onMouseButtonClick = "[(lbCurSel 12000)] spawn TraderDialogLoadItemList;";
		};
		class TM_buybtn: RscButton {
			idc = 12004;
			text = "Buy";
			x = 0.274437 * safezoneW + safezoneX;
			y = 0.761275 * safezoneH + safezoneY;
			w = 0.077336 * safezoneW;
			h = 0.0275026 * safezoneH;
			onButtonClick = "[(lbCurSel 12001),(lbData [12710, (lbCurSel 12710)]),(ctrlText 12420)] call TraderDialogBuy;";
			colorBackgroundDisabled[] = {0.345,0.345,0.98,1};
		};
		class TM_sellbtn: RscButton {
			idc = 12005;
			text = "Sell";
			x = 0.358217 * safezoneW + safezoneX;
			y = 0.761275 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0274947 * safezoneH;
			onButtonClick = "[(lbCurSel 12001),(lbData [12710, (lbCurSel 12710)]),(ctrlText 12420)] call TraderDialogSell;";
			colorBackgroundDisabled[] = {0.345,0.345,0.98,1};
		};
		class TM_closebtn: RscButton {
			idc = -1;
			text = "Close";
			font = "Zeppelin32";
			x = 0.69334 * safezoneW + safezoneX;
			y = 0.224974 * safezoneH + safezoneY;
			w = 0.038668 * safezoneW;
			h = 0.0275026 * safezoneH;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
		class TM_deliveryBOX: RscCombo {
			idc = 12710;
			text = "";
			x = 0.583781 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.0837806 * safezoneW;
			h = 0.0275026 * safezoneH;
		};
		class TM_qtyedit: RscEdit {
			idc = 12420;
			text = "1";
			x = 0.461332 * safezoneW + safezoneX;
			y = 0.252476 * safezoneH + safezoneY;
			w = 0.0644466 * safezoneW;
			h = 0.0275026 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
};
class AH_RAT {
	idd = 710420;
	movingEnabled = true;
	moving = 1;
	class controlsBackground {
		class RAT_BG: RscText {
			idc = 1000;
			text = "";
			x = 0.358174 * safezoneW + safezoneX;
			y = 0.307521 * safezoneH + safezoneY;
			w = 0.296544 * safezoneW;
			h = 0.412455 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class RAT_titleBG: RscPicture {
			idc = 1200;
			text = "GG\GUI\background_ca.paa";
			moving = 1;
			x = 0.358174 * safezoneW + safezoneX;
			y = 0.280024 * safezoneH + safezoneY;
			w = 0.296544 * safezoneW;
			h = 0.027497 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class RAT_title: RscText {
			idc = 1001;
			text = "Reammo Trader";
			x = 0.358174 * safezoneW + safezoneX;
			y = 0.280024 * safezoneH + safezoneY;
			w = 0.296544 * safezoneW;
			h = 0.027497 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RAT_ammolistBG: RscText {
			idc = 1002;
			text = "";
			x = 0.371068 * safezoneW + safezoneX;
			y = 0.335018 * safezoneH + safezoneY;
			w = 0.116039 * safezoneW;
			h = 0.329964 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RAT_ammoInfo: RscStructuredText {
			idc = 1100;
			text = "";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.335018 * safezoneH + safezoneY;
			w = 0.141826 * safezoneW;
			h = 0.329964 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls {
		class RAT_ammolist: RscListbox {
			idc = 1500;
			text = "";
			x = 0.371068 * safezoneW + safezoneX;
			y = 0.335018 * safezoneH + safezoneY;
			w = 0.116039 * safezoneW;
			h = 0.329964 * safezoneH;
			sizeEx = 0.03;
			onMouseButtonClick = "[(lbCurSel 1500),'INFO'] call GG_RATdo;";
		};
		class RAT_buyBtn: RscButton {
			idc = 1600;
			text = "Buy";
			x = 0.371068 * safezoneW + safezoneX;
			y = 0.67873 * safezoneH + safezoneY;
			w = 0.270758 * safezoneW;
			h = 0.027497 * safezoneH;
			onButtonClick = "[(lbCurSel 1500),'BUY'] call GG_RATdo;";
		};
		class RAT_closeBtn: RscButton {
			idc = 1601;
			text = "Close";
			x = 0.622486 * safezoneW + safezoneX;
			y = 0.280024 * safezoneH + safezoneY;
			w = 0.0322331 * safezoneW;
			h = 0.027497 * safezoneH;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			colorText[] = {0.643,0.643,0.643,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0.345,0.345,0.98,1};
			colorFocused[] = {0.75,0.75,0.75,0.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
	};
};
class GarageDialog {
	idd = 50003;
	movingenable = 0;
	onLoad = "uiNamespace setVariable ['GarageDialog', _this select 0]";
	class controlsBackground {
		class VG_BG: RscText {
			idc = -1;
			text = "";
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.459259 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class VG_titleBG: RscPicture {
			idc = 1200;
			text = "GG\GUI\background_ca.paa";
			moving = 1;
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.051851 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class VG_title: RscText {
			idc = -1;
			text = "[GG] Virtual Garage";
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.051851 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
	class Controls {
		class RscListbox_5000302: RscListbox {
			idc = 5200;
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.385185 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.222222 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
		};
		class RscListbox_5000303: RscListbox {
			idc = 5201;
			x = 0.508333 * safezoneW + safezoneX;
			y = 0.385185 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.222222 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
		};
		class RscStructuredText_5000304: RscText {
			idc = 5202;
			text = "Nearby Vehicle's:";
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.340740 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.037037 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscStructuredText_5000305: RscText {
			idc = 5203;
			text = "In Storage:";
			x = 0.508333 * safezoneW + safezoneX;
			y = 0.340740 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.037037 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscShortcutButton_5000306: RscButton {
			idc = -1;
			text = "Store";
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.612222 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "[(lbCurSel 5200)] spawn garage_storeVehicle;";
		};
		class RscShortcutButton_5000307: RscButton {
			idc = -1;
			text = "Retrieve";
			x = 0.508333 * safezoneW + safezoneX;
			y = 0.612222 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,1,1,1};
			onButtonClick = "[(lbCurSel 5201)] spawn garage_spawnVehicle;";
		};
		class RscShortcutButton_5000308: RscButton {
			idc = -1;
			text = "Manage";
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.664074 * safezoneH + safezoneY;
			w = 0.070833 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0,0,1,1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000); [] spawn garage_manage;";
		};		
		class RscShortcutButton_5000309: RscButton {
			idc = -1;
			text = "Close";
			x = 0.591666 * safezoneW + safezoneX;
			y = 0.664074 * safezoneH + safezoneY;
			w = 0.070833 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,0,0,1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
	};
};
class GarageDialogManage {
	idd = 50004;
	movingenable = 0;
	onLoad = "uiNamespace setVariable ['GarageDialogManage', _this select 0]";
	class controlsBackground {
		class GM_BG: RscText {
			idc = -1;
			text = "";
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.459259 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class GM_titleBG: RscPicture {
			idc = 1200;
			text = "GG\GUI\background_ca.paa";
			moving = 1;
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.051851 * safezoneH;
			colorText[] = {0,0,1,1};
		};
		class GM_title: RscText {
			idc = -1;
			text = "Virtual Garage Management";
			x = 0.316666 * safezoneW + safezoneX;
			y = 0.266666 * safezoneH + safezoneY;
			w = 0.366666 * safezoneW;
			h = 0.051851 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
	class Controls {
		class RscListbox_5000402: RscListbox {
			idc = 5204;
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.385185 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.222222 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
		};
		class RscListbox_5000403: RscListbox {
			idc = 5205;
			x = 0.508333 * safezoneW + safezoneX;
			y = 0.385185 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.222222 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
		};
		class RscTextT_5000404: RscText {
			idc = -1;
			text = "Player's Nearby";
			x = 0.337500 * safezoneW + safezoneX;
			y = 0.340740 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.037037 * safezoneH;
		};
		class RscTextT_5000405: RscText {
			idc = 5203;
			text = "Friend's";
			x = 0.508333 * safezoneW + safezoneX;
			y = 0.340740 * safezoneH + safezoneY;
			w = 0.154166 * safezoneW;
			h = 0.037037 * safezoneH;
		};
		class RscShortcutButton_5000406: RscButton {
			idc = -1;
			text = "Add";
			x = 0.379166 * safezoneW + safezoneX;
			y = 0.612222 * safezoneH + safezoneY;
			w = 0.070833 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {0,0,1,1};
			onButtonClick = "[(lbCurSel 5204)] spawn garage_addfriend;";
		};
		class RscShortcutButton_5000407: RscButton {
			idc = -1;
			text = "Remove";
			x = 0.550000 * safezoneW + safezoneX;
			y = 0.612222 * safezoneH + safezoneY;
			w = 0.070833 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,0,0,1};
			onButtonClick = "[(lbCurSel 5205)] spawn garage_removefriend;";
		};	
		class RscShortcutButton_5000408: RscButton {
			idc = -1;
			text = "Close";
			x = 0.591666 * safezoneW + safezoneX;
			y = 0.664074 * safezoneH + safezoneY;
			w = 0.070833 * safezoneW;
			h = 0.0274947 * safezoneH;
			colorText[] = {1,0,0,1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
	};
};
class W_RscText {
	idc = -1;
	type = 0;
	style = 0x00;
	colorBackground[] = { 1 , 1 , 1 , 0 };
	colorText[] = { 1 , 1 , 1 , 1 };
	font = "Zeppelin32";
	sizeEx = .025;
	h = .25;
	text = "";
};

class W_RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {.8784,.8471,.651,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = .035;
	w = .1;
	text = "";
	size = .03921;
	shadow = 2;
};

class W_RscList
{
	type = 5;
	style = 69;
	idc = -1;
	text = "";
	w = .275;
	h = .04;
	colorSelect[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {1,1,1,1};
	colorSelectBackground[] = {.40, .43, .28, .5};
	colorScrollbar[] = {.2, .2, .2, 1};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = .45;
	rowHeight = .04;
	color[] = {.7, .7, .7, 1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,.3};
	font = "Zeppelin32";
	sizeEx = .023;
	soundSelect[] = {"",.1,1};
	soundExpand[] = {"",.1,1};
	soundCollapse[] = {"",.1,1};
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	class ScrollBar
	{
		color[] = {1, 1, 1, 1};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 1};
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
};

class W_RscPicture 
{
	idc = -1; 
	type = 0;
	style = 48;
	font = "Zeppelin32";
	sizeEx = .023;	
	colorBackground[] = {};
	colorText[] = {};	
	x = .0; y = .2;
	w = .2; h = .2;	
	text = "";	
}; 

class W_RscButtonBase {
	idc = -1;
	type = 16;
	style = 0;	
	w = .183825;
	h = .104575;	
	color[] = {.95, .95, .95, 1};
	color2[] = {1, 1, 1, .4};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, .4};
	colorDisabled[] = {1, 1, 1, .25};	
	periodFocus = 1.2;
	periodOver = .8;	
	class HitZone {
		left = .004;
		top = .029;
		right = .004;
		bottom = .029;		
	};
	class ShortcutPos {
		left = .004;
		top = .026;
		w = .0392157;
		h = .0522876;		
	};
	class TextPos {	
		left = .05;
		top = .025;
		right = .005;
		bottom = .025;	
	};
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.01.paa";
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa";
	textureNoShortcut = "";
	period = .4;
	font = "Zeppelin32";
	size = .023;
	sizeEx = .023;
	text = "";
	
	soundEnter[] = {"\ca\ui\data\sound\mouse2", .09, 1};
	soundPush[] = {"\ca\ui\data\sound\new1", .09, 1};
	soundClick[] = {"\ca\ui\data\sound\mouse3", .07, 1};
	soundEscape[] = {"\ca\ui\data\sound\mouse1", .09, 1};
	
	action = "";
	
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "1";	
	};
	
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";	
	};
};

class W_RscButton : W_RscButtonBase {

	w = .183825;
	h = .0522876;

	style = 2;

	color[] = {1, 1, 1, 1};
	color2[] = {1, 1, 1, .85};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, .85};
	colorDisabled[] = {1, 1, 1, .4};
	
	class HitZone {	
		left = .002;
		top = .003;
		right = .002;
		bottom = .016;		
	};
	
	class ShortcutPos {	
		left = -.006;
		top = -.007;
		w = .0392157;
		h = .0522876;	
	};
	
	class TextPos {	
		left = .002;
		top = .014;
		right = .002;
		bottom = .005;
	};
	
	animTextureNormal = "\ca\ui\data\igui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\igui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\igui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\igui_button_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\igui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\igui_button_normal_ca.paa";
	animTextureNoShortcut = "\ca\ui\data\igui_button_normal_ca.paa";
	
	class Attributes {	
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "1";		
	};
};
class GroupManagement {

	idd = 55510;
	movingEnable = true;
	enableSimulation = true;
	
	class ControlsBackground {
		
		class MainBG : W_RscPicture {
			idc = -1;
			text = "\ca\ui\data\ui_background_controlers_ca.paa";		
			moving = true;
			x = .0; y = .1;
			w = 1.0; h = .65;
		};
		
		class MainTitle : W_RscText {
			idc = -1;
			text = "Group Management";
			sizeEx = .04;
			shadow = 2;		
			x = .260; y = .112;
			w = .3; h = .05;
		};

		class InviteTitleText : W_RscText {
			idc = -1;
			text = "Players";
			sizeEx = .025;
			shadow = 2;		
			x = .0875; y = .155;
			w = .3; h = .050;
		};

		class GroupTitleText : W_RscText {
			idc = -1;
			text = "Your Group";
			sizeEx = .025;
			shadow = 2;		
			x = .5575; y = .155;
			w = .3; h = .050;
		};

		class InviteText: W_RscStructuredText
		{
			idc = 55520;
			text = "";
			size = .025;
			x = .255; y = .500;
			w = .235; h = .075;
		};
	};
	
	class controls {

		class PlayerListBox : W_RscList {
			idc = 55511;
			onLBSelChanged = "call playerSelectChange;";
			x = .020; y = .200;
			w = .235; h = .380;
		};
		
		class RefreshButton : W_RscButton {
			idc = -1;
			text = "Refresh";
			onButtonClick = "call updatePlayerList;";
			x = .08; y = .59;
			w = .125; h = .033 * safezoneH;
			color[] = {.1,.95,.1,1};
		};
		
		class GroupListBox : W_RscList {
			idc = 55512;
			x = .490; y = .200;
			w = .235; h = .425;
		};

		class CloseButton : W_RscButton {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;groupManagmentActive = false;";
			x = .02; y = .68;
			w = .125; h = .033 * safezoneH;
			color[] = {.95,.1,.1,1};
		};

		class InviteButton : W_RscButton {
			idc = 55514;
			text = "Invite";
			onButtonClick = "call inviteToGroup;";
			x = .3075; y = .200;
			w = .125; h = .033 * safezoneH;
			color[] = {.1,.95,.1,1};
		};

		class KickButton : W_RscButton {
			idc = 55515;
			text = "Kick";
			onButtonClick = "call kickFromGroup;";
			x = .3075; y = .250;
			w = .125; h = .033 * safezoneH;
			color[] = {.95,.1,.1,1};
		};

		class DisbandButton : W_RscButton {
			idc = 55516;
			text = "Disband";
			onButtonClick = "call disbandGroup;";
			x = .3075; y = .300;
			w = .125; h = .033 * safezoneH;
			color[] = {.95,.1,.1,1};
		};

		class LeaveButton : W_RscButton {
			idc = 55517;
			text = "Leave Group";
			onButtonClick = "call leaveGroup;";
			x = .3075; y = .400;
			w = .125; h = .033 * safezoneH;
			color[] = {.95,.1,.1,1};
		};

		class AcceptInviteButton : W_RscButton {
			idc = 55518;
			text = "Accept";
			onButtonClick = "call acceptGroupInvite;";
			x = .275; y = .625 - .0255 * safezoneH;
			w = .100; h = .033 * safezoneH;
			color[] = {.1,.95,.1,1};
		};

		class DeclineInviteButton : W_RscButton {
			idc = 55519;
			text = "Decline";
			onButtonClick = "call declineGroupInvite;";
			x = .375; y = .625 - .0255 * safezoneH;
			w = .100; h = .033 * safezoneH;
			color[] = {.95,.1,.1,1};
		};
	};
};
class DoorManagement {
	idd = 711195;
	onLoad = "uiNamespace setVariable ['DoorManagement', _this select 0]";
	class Controls {
		class RscText_7100: RscText
		{
			idc = 7100;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.5 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};	
		class RscListbox_7101: RscListbox
		{
			idc = 7101;
			x = 0.31* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscListbox_7102: RscListbox
		{
			idc = 7102;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscShortcutButton_7104: RscButtonMenu
		{
			idc = 7104;
			text = "Add";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7101)] call DoorAddFriend;";
		};
		class RscShortcutButton_7105: RscButtonMenu
		{
			idc = 7105;
			text = "Delete";
			x = 0.47 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7102)] call DoorRemoveFriend;";
		};	
		class RscShortcutButton_7106: RscButtonMenu
		{
			idc = 7106;
			text = "Close";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};		
		class RscText_7107: RscText
		{
			idc = 7107;
			text = "Door Management";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;		
			colorBackground[] = {0,0,0,0.8};	
			colorText[] = {1,1,1,1};			
		};
		class RscText_7108: RscText
		{
			idc = 7108;
			text = "Online People";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};		
		class RscText_7103: RscText
		{
			idc = 71103;
			text = "DoorFriends";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
};
class ComboLockUI {
	idd = 41144;
	movingenable = 0;
	class Controls
	{	
		class ZupaBackground_1
		{
		    access = 0;
			type = 0;
			colorText[] = {0.8784,0.8471,0.651,1};
			text = "";
			fixedWidth = 0;
			style = 0;
			shadow = 2;
			font = "Zeppelin32";
			SizeEx = 0.03921;			
			idc = -1;
			x = 0.35 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.50 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};	
		
		class ZupaHeader_2: RscText
		{
		
			idc = -1;
			x = 0.35 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.05 * safezoneH;		
			text = "Unlock / Lock Door";
			colorBackground[] = {0,0,0,0.8};	
			colorText[] = {1,1,1,1};			
		};
		
					
		class ZupaButton_1 : RscButtonMenu
		{
			idc = -1;
			text = "Eye Scan";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.40 * safezoneH + safezoneY;					
			style = 2;
			w = 0.20;
			onButtonClick = "call player_unlockDoor";					
		};
		
		class ZupaButton_4 : RscButtonMenu
		{
			idc = -1;
			text = "Manual Code";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.50 * safezoneH + safezoneY;					
			style = 2;
			w = 0.20;
			onButtonClick = "call player_enterCode";					
		};
		
		class ZupaButton_2: RscButtonMenu
		{
			idc = -1;
			text = "Cancel";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;			
			w = 0.20;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);";			
		};		

		class ZupaButton_3: RscButtonMenu
		{
			idc = -1;
			text = "Manage";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.60 * safezoneH + safezoneY;			
			w = 0.20;
			onButtonClick = "[] call player_manageDoor";			
		};				
	};	
};
class Entercode {
	idd = 51144;
	movingenable = 0;
	
	class Controls {
		class ComboLockUIPic : RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\combo_gui.paa";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		
		class top_combo : RscPicture {
			idc = 15734;
			text = "\z\addons\dayz_epoch\ui\top_0.paa";
			x = 0.418883;
			y = 0.234042;
			w = 0.388564;
			h = 0.161072;
		};
		
		class middle_combo : RscPicture {
			idc = 15735;
			text = "\z\addons\dayz_epoch\ui\mid_0.paa";
			x = 0.420213;
			y = 0.431049;
			w = 0.387234;
			h = 0.161072;
		};
		
		class bottom_combo : RscPicture {
			idc = 15736;
			text = "\z\addons\dayz_epoch\ui\bot_0.paa";
			x = 0.420212;
			y = 0.616233;
			w = 0.387234;
			h = 0.180772;
		};
		
		class unlock_combo : RscPicture {
			idc = 15737;
			text = "\z\addons\dayz_epoch\ui\unlock_a.paa";
			x = 0.219415;
			y = 0.762017;
			w = 0.199734;
			h = 0.208353;
		};
		
		class exit_combo : RscPicture {
			idc = 15738;
			text = "\z\addons\dayz_epoch\ui\exit_a.paa";
			x = 0.863032;
			y = 0.0252169;
			w = 0.0946809;
			h = 0.0724192;
		};
		
		class main_combo : RscButton {
			idc = -1;
			text = "";
			style = 0x02 + 0x100;
			colorText[] = {1, 1, 1, 0};
			colorDisabled[] = {1, 1, 1, 0};
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0};
			colorShadow[] = {1, 1, 1, 0};
			colorFocused[] = {1, 1, 1, 0};
			soundClick[] = {"", 0.6, 1};
		};
		
		class top_left : main_combo {
			idc = -1;
			x = 0.43484;
			y = 0.243893;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[15734,1,""top""] call player_changeCombo";
		};
		
		class top_right : main_combo {
			idc = -1;
			x = 0.660904;
			y = 0.241923;
			w = 0.147872;
			h = 0.135461;
			onButtonClick = "[15734,0,""top""] call player_changeCombo";
		};
		
		class mid_left : main_combo {
			idc = -1;
			x = 0.43484;
			y = 0.433018;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[15735,1,""mid""] call player_changeCombo";
		};
		
		class mid_right : main_combo {
			idc = -1;
			x = 0.659574;
			y = 0.427108;
			w = 0.153191;
			h = 0.135461;
			onButtonClick = "[15735,0,""mid""] call player_changeCombo";
		};
		
		class bottom_left : main_combo {
			idc = -1;
			x = 0.4375;
			y = 0.637904;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[15736,1,""bot""] call player_changeCombo";
		};
		
		class bottom_right : main_combo {
			idc = -1;
			x = 0.658245;
			y = 0.633964;
			w = 0.155851;
			h = 0.133491;
			onButtonClick = "[15736,0,""bot""] call player_changeCombo";
		};
		
		class exit_combo_btn : main_combo {
			idc = -1;
			x = 0.827128;
			y = 0.0153665;
			w = 0.158511;
			h = 0.153191;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);";
		};
		
		class unlock_combo_btn : main_combo {
			idc = -1;
			x = 0.218085;
			y = 0.762017;
			w = 0.201064;
			h = 0.233964;
			onButtonClick = "call player_unlockDoorCode";
		};
	};
};
class ClassDialog {
	idd = -1;
	movingenable = 0;
	class controlsBackground 
	{
		class ClassBackground: RscText
		{
			text = "";
			x = .31 * safezoneW + safezoneX;
			y = .3 * safezoneH + safezoneY;
			w = .138504 * safezoneW;
			h = .325 * safezoneH;
			colorBackground[] = {.3,.3,.3,1};
			fixedWidth = 0;
		};
	};
	class Controls
	{
		class ClassSelect: RscText
		{
			text = "Class Selection";
			x = .31 * safezoneW + safezoneX;
			y = .26 * safezoneH + safezoneY;
			w = .138504 * safezoneW;
			h = .04025 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {.384,.702,.886,.8};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
		};
		class ClassList
		{
			idc = 8888;
			x = .31 * safezoneW + safezoneX;
			y = .303 * safezoneH + safezoneY;
			w = .138504 * safezoneW;
			h = .25 * safezoneH;
			autoScrollDelay = 5;
			autoScrollRewind = 0;
			autoScrollSpeed = -1;
			colorSelect[] = {};
			colorSelectBackground[] = {.5,.5,.5,1};
			colorText[] = {.88,.88,.88,1};
			font = "Zeppelin32";
			maxHistoryDelay = 1;
			onLBSelChanged = "call classPreview;";
			rowHeight = .04;
			class ScrollBar
			{
				arrowEmpty = "\ca\ui\data\arrow_up_ca.paa";
				arrowFull = "\ca\ui\data\arrow_up_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
				color[] = {.5,.5,.5,.5};
				colorActive[] = {.5,.5,.5,.3};
				colorDisabled[] = {.5,.5,.5,.1};
				shadow = 0;
				thumb = "";
			};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
			soundSelect[] = {"",.1,1};
			style = 16;
			type = 5;
		};
		class ClassButton
		{
			idc = 8889;
			text = "Select Class";
			x = .324 * safezoneW + safezoneX;
			y = .567 * safezoneH + safezoneY;
			w = .109 * safezoneW;
			h = .044 * safezoneH;
			action = "call classPick;";
			borderSize = 0;
			colorBackground[] = {.4,.4,.4,1};
			colorBackgroundActive[] = {.5,.5,.5,1};
			colorBackgroundDisabled[] = {.2,.2,.2,1};
			colorBorder[] = {.88,.88,.88,1};		
			colorDisabled[] = {.2,.2,.2,1};
			colorFocused[] = {.4,.4,.4,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "Zeppelin32";
			offsetPressedX = .002;
			offsetPressedY = .002;
			offsetX = .003;
			offsetY = .003;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
			soundClick[] = {"\ca\ui\data\sound\onclick",.07,1};
			soundEnter[] = {"\ca\ui\data\sound\onover",.09,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",.09,1};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};			
			style = 2;
			type = 1;
		};
	};
};
class HaloDialog {
	idd = -1;
	movingenable = 0;
	class controlsBackground 
	{
		class HaloBackground: RscText
		{
			text = "";
			x = .370287 * safezoneW + safezoneX;
			y = .338822 * safezoneH + safezoneY;
			w = .260299 * safezoneW;
			h = .3 * safezoneH;
			colorBackground[] = {.3,.3,.3,1};
			fixedWidth = 0;
		};
	};
	class Controls
	{
		class HaloSelect: RscText
		{
			text = "Spawn Type Selection";
			x = .370288 * safezoneW + safezoneX;
			y = .289 * safezoneH + safezoneY;
			w = .260299 * safezoneW;
			h = .05 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {.384,.702,.886,.8};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = .03;
		};
		class HaloAir: RscPicture
		{
			fixedWidth = 0;
			text = "\ca\ui\data\iconplane_ca.paa";
			x = .403107 * safezoneW + safezoneX;
			y = .386064 * safezoneH + safezoneY;
			w = .0738056 * safezoneW;
			h = .0873141 * safezoneH;
		};
		class HaloGround: RscPicture
		{
			fixedWidth = 0;
			text = "\ca\ui\data\icontruck_ca.paa";
			x = .524484 * safezoneW + safezoneX;
			y = .386064 * safezoneH + safezoneY;
			w = .0732848 * safezoneW;
			h = .0868511 * safezoneH;
		};
		class HaloButtonAir
		{
			idc = -1;
			text = "Air";
			x = .402585 * safezoneW + safezoneX;
			y = .523 * safezoneH + safezoneY;
			w = .0743267 * safezoneW;
			h = .0877774 * safezoneH;
			action = "uiNamespace setVariable ['haloChoice',1];";
			borderSize = 0;
			colorBackground[] = {.4,.4,.4,1};
			colorBackgroundActive[] = {.5,.5,.5,1};
			colorBackgroundDisabled[] = {.2,.2,.2,1};
			colorBorder[] = {.88,.88,.88,1};		
			colorDisabled[] = {.2,.2,.2,1};
			colorFocused[] = {.4,.4,.4,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "Zeppelin32";
			offsetPressedX = .002;
			offsetPressedY = .002;
			offsetX = .003;
			offsetY = .003;
			sizeEx = .03;
			soundClick[] = {"\ca\ui\data\sound\onclick",.07,1};
			soundEnter[] = {"\ca\ui\data\sound\onover",.09,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",.09,1};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};			
			style = 2;
			type = 1;
		};
		class HaloButtonGround
		{
			idc = -1;
			text = "Ground";
			x = .524484 * safezoneW + safezoneX;
			y = .523 * safezoneH + safezoneY;
			w = .0743267 * safezoneW;
			h = .0877774 * safezoneH;
			action = "uiNamespace setVariable ['haloChoice',0];";
			borderSize = 0;
			colorBackground[] = {.4,.4,.4,1};
			colorBackgroundActive[] = {.5,.5,.5,1};
			colorBackgroundDisabled[] = {.2,.2,.2,1};
			colorBorder[] = {.88,.88,.88,1};		
			colorDisabled[] = {.2,.2,.2,1};
			colorFocused[] = {.4,.4,.4,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "Zeppelin32";
			offsetPressedX = .002;
			offsetPressedY = .002;
			offsetX = .003;
			offsetY = .003;
			sizeEx = .03;
			soundClick[] = {"\ca\ui\data\sound\onclick",.07,1};
			soundEnter[] = {"\ca\ui\data\sound\onover",.09,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",.09,1};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};			
			style = 2;
			type = 1;
		};
	};
};
class SpawnDialog {
	idd = 88890;
	movingenable = 0;
	class controlsBackground 
	{
		class SpawnBackground: RscText
		{
			text = "";
			x = .305217 * safezoneW + safezoneX;
			y = .269348 * safezoneH + safezoneY;
			w = .1185 * safezoneW;
			h = .4644 * safezoneH;
			colorBackground[] = {.3,.3,.3,1};
			fixedWidth = 0;
		};
	};
	class Controls
	{
		class SpawnSelect: RscText
		{
			text = "Spawn Selection";
			x = .305218 * safezoneW + safezoneX;
			y = .269348 * safezoneH + safezoneY;
			w = .1185 * safezoneW;
			h = .0405354 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {.384,.702,.886,.8};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
		};
		class SpawnList
		{
			idc = 8888;
			x = .305217 * safezoneW + safezoneX;
			y = .314737 * safezoneH + safezoneY;
			w = .1185 * safezoneW;
			h = .33 * safezoneH;
			autoScrollDelay = 5;
			autoScrollRewind = 0;
			autoScrollSpeed = -1;
			colorSelect[] = {};
			colorSelectBackground[] = {.5,.5,.5,1};
			colorText[] = {.88,.88,.88,1};
			font = "Zeppelin32";
			maxHistoryDelay = 1;
			onLBSelChanged = "call moveMap;";
			rowHeight = .04;
			class ScrollBar
			{
				arrowEmpty = "\ca\ui\data\arrow_up_ca.paa";
				arrowFull = "\ca\ui\data\arrow_up_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
				color[] = {.5,.5,.5,.5};
				colorActive[] = {.5,.5,.5,.3};
				colorDisabled[] = {.5,.5,.5,.1};
				shadow = 0;
				thumb = "";
			};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
			soundSelect[] = {"",.1,1};
			style = 16;
			type = 5;
		};
		class SpawnButton
		{
			idc = 8889;
			text = "Select Spawn";
			x = .318 * safezoneW + safezoneX;
			y = .6565 * safezoneH + safezoneY;
			w = .092 * safezoneW;
			h = .067 * safezoneH;
			action = "call spawnPick;";
			borderSize = 0;
			colorBackground[] = {.4,.4,.4,1};
			colorBackgroundActive[] = {.5,.5,.5,1};
			colorBackgroundDisabled[] = {.2,.2,.2,1};
			colorBorder[] = {.88,.88,.88,1};		
			colorDisabled[] = {.2,.2,.2,1};
			colorFocused[] = {.4,.4,.4,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "Zeppelin32";
			offsetPressedX = .002;
			offsetPressedY = .002;
			offsetX = .003;
			offsetY = .003;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
			soundClick[] = {"\ca\ui\data\sound\onclick",.07,1};
			soundEnter[] = {"\ca\ui\data\sound\onover",.09,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",.09,1};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};			
			style = 2;
			type = 1;
		};
		class SpawnMap
		{
			idc = 8890;
			x = .42315 * safezoneW + safezoneX;
			y = .269348 * safezoneH + safezoneY;
			w = .293691 * safezoneW;
			h = .463997 * safezoneH;
			moveOnEdges = 0;
			shadow = 0;
			maxSatelliteAlpha = .85;
			alphaFadeStartScale = .35;
			alphaFadeEndScale = .4;
			colorOutside[] = {0,0,0,1};			
			style = 48;
			font = "EtelkaNarrowMediumPro";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
			type = 101;
			colorBackground[] = {.8,.8,.8,1};
			colorText[] = {0,0,0,1};
			colorRailway[] = {.5,.5,.5,.5};
			colorSea[] = {.56,.8,.98,.5};
			colorForest[] = {.6,.8,.2,.5};
			colorRocks[] = {.5,.5,.5,.5};
			colorCountlines[] = {.65,.45,.27,.5};
			colorMainCountlines[] = {.65,.45,.27,1};
			colorCountlinesWater[] = {0,.53,1,.5};
			colorMainCountlinesWater[] = {0,.53,1,1};
			colorForestBorder[] = {.4,.8,0,1};
			colorRocksBorder[] = {.5,.5,.5,1};
			colorPowerLines[] = {0,0,0,1};
			colorNames[] = {0,0,0,1};
			colorInactive[] = {1,1,1,.5};
			colorLevels[] = {.286,.177,.094,.5};
			fontLabel = "TahomaB";
			sizeExLabel = .04;
			fontGrid = "TahomaB";
			sizeExGrid = .04;
			fontUnits = "TahomaB";
			sizeExUnits = .04;
			fontNames = "TahomaB";
			sizeExNames = .04;
			fontInfo = "TahomaB";
			sizeExInfo = .04;
			fontLevel = "TahomaB";
			sizeExLevel = .04;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			stickX[] = {.2,{"Gamma",1,1.5}};
			stickY[] = {.2,{"Gamma",1,1.5}};
			ptsPerSquareSea = 6;
			ptsPerSquareTxt = 8;
			ptsPerSquareCLn = 8;
			ptsPerSquareExp = 8;
			ptsPerSquareCost = 8;
			ptsPerSquareFor = "4.0f";
			ptsPerSquareForEdge = "10.0f";
			ptsPerSquareRoad = 2;
			ptsPerSquareObj = 10;
			showCountourInterval = 0;
			onMouseMoving = "mouseX = (_this Select 1);mouseY = (_this Select 2)";
			onMouseButtonDown = "mouseButtonDown = _this Select 1";
			onMouseButtonUp = "mouseButtonUp = _this Select 1";				
			class CustomMark {
				icon = "\ca\ui\data\map_waypoint_ca.paa";
				color[] = {0,0,1,1};
				size = 18;
				importance = 1;
				coefMin = 1;
				coefMax = 1;
			};
			class Bunker {
				icon = "\ca\ui\data\map_bunker_ca.paa";
				color[] = {0,0,1,1};
				size = 14;
				importance = 1.5 * 14 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Bush {
				icon = "\ca\ui\data\map_bush_ca.paa";
				color[] = {.55,.64,.43,1};
				size = 14;
				importance = .2 * 14 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class BusStop {
				icon = "\ca\ui\data\map_busstop_ca.paa";
				color[] = {0,0,1,1};
				size = 10;
				importance = 1 * 10 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Command {
				icon = "#(argb,8,8,3)color(1,1,1,1)";
				color[] = {0,.9,0,1};
				size = 18;
				importance = 1;
				coefMin = 1;
				coefMax = 1;
			};
			class Cross {
				icon = "\ca\ui\data\map_cross_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = .7 * 16 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Fortress {
				icon = "\ca\ui\data\map_bunker_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = 2 * 16 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Fuelstation {
				icon = "#(argb,8,8,3)color(0,0,0,1)";
				color[] = {0,0,0,1};
				size = 16;
				importance = 2 * 16 * .05;
				coefMin = .75;
				coefMax = 4;
			};
			class Fountain {
				icon = "\ca\ui\data\map_fountain_ca.paa";
				color[] = {0,.35,.7,1};
				size = 12;
				importance = 1 * 12 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Hospital {
				icon = "\ca\ui\data\map_hospital_ca.paa";
				color[] = {.78,0,.05,1};
				size = 16;
				importance = 2 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
			class Chapel {
				icon = "\ca\ui\data\map_chapel_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = 1 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class Church {
				icon = "\ca\ui\data\map_church_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = 2 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class Legend {
				x = "SafeZoneX";
				y = "SafeZoneY";
				w = .34;
				h = .152;
				font = "Zeppelin32";
				sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .6)";
				colorBackground[] = {0,0,0,1};
				color[] = {0,0,0,1};
			};
			class Lighthouse {
				icon = "\ca\ui\data\map_lighthouse_ca.paa";
				color[] = {.78,0,.05,1};
				size = 20;
				importance = 3 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class Quay {
				icon = "\ca\ui\data\map_quay_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = 2 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
			class Rock {
				icon = "\ca\ui\data\map_rock_ca.paa";
				color[] = {0,0,1,1};
				size = 12;
				importance = .5 * 12 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Ruin {
				icon = "\ca\ui\data\map_ruin_ca.paa";
				color[] = {.78,0,.05,1};
				size = 16;
				importance = 1.2 * 16 * .05;
				coefMin = 1;
				coefMax = 4;
			};
			class SmallTree {
				icon = "\ca\ui\data\map_smalltree_ca.paa";
				color[] = {.55,.64,.43,1};
				size = 12;
				importance = .6 * 12 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Stack {
				icon = "\ca\ui\data\map_stack_ca.paa";
				color[] = {0,0,1,1};
				size = 20;
				importance = 2 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class Task {
				icon = "\ca\ui\data\ui_taskstate_current_CA.paa";
				iconCreated = "\ca\ui\data\ui_taskstate_new_CA.paa";
				iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
				iconDone = "\ca\ui\data\ui_taskstate_done_CA.paa";
				iconFailed = "\ca\ui\data\ui_taskstate_failed_CA.paa";
				color[] = {.863,.584,.0,1};
				colorCreated[] = {.95,.95,.95,1};
				colorCanceled[] = {.606,.606,.606,1};
				colorDone[] = {.424,.651,.247,1};
				colorFailed[] = {.706,.0745,.0196,1};
				size = 10;
				coefMin = 1;
				coefMax = 4;
				importance = 1;
			};
			class Tree {
				icon = "\ca\ui\data\map_tree_ca.paa";
				color[] = {.55,.64,.43,1};
				size = 12;
				importance = .9 * 16 * .05;
				coefMin = .25;
				coefMax = 4;
			};
			class Tourism {
				icon = "\ca\ui\data\map_tourism_ca.paa";
				color[] = {.78,0,.05,1};
				size = 16;
				importance = 1 * 16 * .05;
				coefMin = .7;
				coefMax = 4;
			};
			class Transmitter {
				icon = "\ca\ui\data\map_transmitter_ca.paa";
				color[] = {0,0,1,1};
				size = 20;
				importance = 2 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class ViewTower {
				icon = "\ca\ui\data\map_viewtower_ca.paa";
				color[] = {0,0,1,1};
				size = 16;
				importance = 2.5 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
			class Watertower {
				icon = "\ca\ui\data\map_watertower_ca.paa";
				color[] = {0,.35,.7,1};
				size = 32;
				importance = 1.2 * 16 * .05;
				coefMin = .9;
				coefMax = 4;
			};
			class Waypoint {
				icon = "\ca\ui\data\map_waypoint_ca.paa";
				color[] = {0,0,1,1};
				size = 14;
				importance = 2.5 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
			class WaypointCompleted {
				icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
				color[] = {0,0,1,1};
				size = 14;
				importance = 2.5 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
			class ActiveMarker {
				icon = "";
				color[] = {0,0,1,1};
				size = 14;
				importance = 2.5 * 16 * .05;
				coefMin = .5;
				coefMax = 4;
			};
		};
	};
};
class PlotManagement{
	idd = 711194;
	onLoad = "uiNamespace setVariable ['PlotManagement', _this select 0]";
	class Controls {
		class RscText_7000: RscText
		{
			idc = 7000;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.65 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};	
		
	class RscText_7007: RscText
		{
			idc = 7007;
			text = "Plot Management";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;		
			colorBackground[] = {0,0,0,0.8};	
			colorText[] = {1,1,1,1};			
		};
		
		class RscShortcutButton_7009: RscButtonMenu
		{
			idc = -1;
			text = "Boundry";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call PlotPreview;";
		};
		
				class RscShortcutButton_7010: RscButtonMenu
		{
			idc = -1;
			text = "Refresh";
			x = 0.41 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[""preview""] call MaintainPlot;";
		};
		
				class RscShortcutButton_7011: RscButtonMenu
		{
			idc = -1;
			text = "Maintain";
			x = 0.51 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[""maintain""] call MaintainPlot;";
		};
		class RscText_7012: RscText
		{
			idc = 7012;
			text = "";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;			
			colorText[] = {1,1,1,1};
			
		};
		
		class RscText_7014:  RscStructuredText
		{
			idc = 7014;
			text = "";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			class Attributes {
				align = "right";
			};
		};
		
		class RscText_7013: RscText
		{
			idc = 7013;
			text = "";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		
		
		class RscText_7008: RscText
		{
			idc = -1;
			text = "Humans Nearby";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};		
		class RscText_7003: RscText
		{
			idc = -1;
			text = "Plot Friends";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		
		
		class RscListbox_7001: RscListbox
		{
			idc = 7001;
			x = 0.31* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscListbox_7002: RscListbox
		{
			idc = 7002;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscShortcutButton_7004: RscButtonMenu
		{
			idc = -1;
			text = "Add";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7001)] call PlotAddFriend;";
		};
		class RscShortcutButton_7005: RscButtonMenu
		{
			idc = -1;
			text = "Delete";
			x = 0.47 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7002)] call PlotRemoveFriend;";
		};	
		class RscShortcutButton_7006: RscButtonMenu
		{
			idc = -1;
			text = "Close";
			x = 0.40 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;

			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};		

	};
};

#include "traders.hpp"