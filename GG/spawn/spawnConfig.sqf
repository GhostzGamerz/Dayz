_bodyCheck = 500; // If a player has a body within this distance of a spawn that spawn will be blocked. Set to -1 to disable.
_mapRadius = 12000; // Distance from center to farthest edge of map. Only used when spawnNearPlot is enabled.
_spawnNearGroup = true; // Allow players to spawn near their group. Blocked if the player has a body within bodyCheck distance of the leader. Requires DZGM to work.
_spawnNearPlot = false; // Allow players to spawn near their plot. Blocked if the player has a body within bodyCheck distance of their plot. Requires Plot4Life to work. 
_spawnRadius = 800; // Distance around spawn to find a safe pos. Lower is closer to exact coordinates. Do not set too low or BIS_fnc_findSafePos may fail.

_spawnPoints = switch (toLower worldName) do {
case "chernarus":{
	[
		["Random",[[4932,1989,0],[12048,8352,0],[6901,2509,0],[10294,2191,0],[2236,1923,0],[13510,5249,0],[3608,2152,0],[7952,3205,0],[12071,3591,0],[13407,4175,0],[7068,11221,0],[9711,8962,0],[5939,10195,0],[8421,6643,0],[8812,11642,0],[5301,8548,0]
		,[11053,12361,0],[2718,10094,0],[4984,12492,0],[4582,6457,0],[9153,3901,0],[3626,8976,0],[6587,6026,0],[2692,5284,0]],0,0,1],
		["Kamenka",[2236,1923,0],0,0],
		["Komarovo",[3608,2152,0],0,0],
		["Balota",[4932,1989,0],0,0],
		["Cherno",[6901,2509,0],0,0],
		["Prigor",[7952,3205,0],0,0],
		["Elektro",[10294,2191,0],0,0],
		["Kamyshovo",[12071,3591,0],0,0],
		["Krutoy",[13407,4175,0],0,0],
		["Solnichny",[13510,5249,0],0,0],
		["Berezino",[12048,8352,0],0,0],
		["Devils",[7068,11221,0],1,0],
		["Gorka",[9711,8962,0],1,0],
		["Grishino",[5939,10195,0],1,0],
		["Guglovo",[8421,6643,0],1,0],
		["Gvozdno",[8812,11642,0],1,0],
		["Kabanino",[5301,8548,0],1,0],
		["Krasnostav",[11053,12361,0],1,0],
		["Lopatino",[2718,10094,0],1,0],
		["Petrovka",[4984,12492,0],1,0],
		["Pogorevka",[4582,6457,0],1,0],
		["Pusta",[9153,3901,0],1,0],
		["Vybor",[3626,8976,0],1,0],
		["Vyshnoye",[6587,6026,0],1,0],
		["Zelenogorsk",[2692,5284,0],1,0],
		["Bandit Vendor",[1607,7804,0],1,-10000],
		["Hero Vendor",[12944,12767,0],1,10000]
		]
	};
	case "tavi":{
		[
		["Random",[[9093,2614,0],[8150,21299,0],[9506,17303,0],[6496,9300,0],[13201,16649,0],[6066,7404,0],[7919,6727,0],[14032,12259,0],[15120,9674,0],[17610,6293,0],[10939,652,0],[17588,4952,0],[15954,15847,0],[16674,13930,0],[8915,2301,0],[11361,6685,0],
		[17744,10299,0],[18292,7537,0],[13561,19300,0],[15246,17425,0],[8350,18937,0],[10180,19059,0],[11238,14413,0],[10184,1542,0],[1529,7271,0],[5904,10519,0]],0,0,1],
		["Topolka",[9093,2614,0],1,0],
		["Helfenburg",[8150,21299,0],0,0],
		["Kozak",[9506,17303,0],0,0],
		["Zmey",[6496,9300,0],1,0],
		["Volcano Perun",[13201,16649,0],0,0],
		["Volcano Vilas",[6066,7404,0],0,0],
		["Novi Dvor",[7919,6727,0],1,0],
		["Solibor",[14032,12259,0],1,0],
		["Sabina",[15120,9674,0],1,0],
		["Kryvoe",[9095,5403,0],0,0],
		["Stari Sad",[17588,4952,0],0,0],
		["Martin",[16674,13930,0],0,0],
		["Komarovo",[11361,6685,0],0,0],
		["Dubovo",[17744,10299,0],0,0],
		["Byelov",[18292,7537,0],1,0],
		["Khotanovsk",[13561,19300,0],0,0],
		["Dalnogorsk",[15246,17425,0],0,0],
		["Kameni",[8350,18937,0],0,0],
		["Yaroslav",[10180,19059,0],1,0],
		["Lyepestok",[11238,14413,0],1,0],
		["Marina",[10184,1542,0],1,0],
		["Race Track",[1529,7271,0],1,0],
		["Cernovar",[5904,10519,0],0,0],
		["Bandit Vendor",[10940,653,0],1,-10000],
		["Hero Vendor",[15586,16396,0],1,10000]
		]
	};
	case "napf":{
		[
		["Random",[[5411,16676,0],[1511,11479,0],[12231,16319,0],[6946,17385,0],[12862,14850,0],[4672,14940,0],[2720,12226,0],[4104,13026,0],[1461,10584,0],[10283,18449,0],[10709,17085,0]],0,0,1],
		["Seltishafen",[5411,16676,0],0,0],
		["Hubel",[1511,11479,0],0,0],
		["Lausen",[12231,16319,0],0,0],
		["Seewen",[6946,17385,0],0,0],
		["Bunig",[12862,14850,0],0,0],
		["Bubendorf",[4672,14940,0],0,0],
		["Hindelbank",[2720,12226,0],0,0],
		["Huttwil",[4104,13026,0],0,0],
		["Ittingen",[1461,10584,0],0,0],
		["Hordstern",[10283,18449,0],0,0],
		["Magden",[10709,17085,0],0,0],
		["South Airstrip",[18291,1790,0],0,0],
		["Buckten",[5906,5637,0],0,0],
		["Giswil",[17101,5282,0],0,0],
		["Horw",[17262,13502,0],0,0],
		["Romoos",[12694,11878,0],0,0],
		["Sachseln",[15554,10651,0],0,0],
		["Schangen",[9412,5882,0],0,0],
		["Sissach",[11111,8326,0],0,0],
		["Waldegg",[8538,852,0],0,0]
		]
	};

};