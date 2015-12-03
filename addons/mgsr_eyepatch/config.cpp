enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class mgsr_eyepatch {
		units[] = {};
        weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;
	
	class mgsr_eyepatch : ItemCore {
		author="rebel / shlomo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		
		class ItemInfo : HeadgearItem {
			mass = 2;
			uniformModel = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
		};
	};
	
	class mgsr_eyepatch2 : ItemCore {
		author="rebel / facel";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Eyepatch 2";
		model = "\mgsr_eyepatch\mgsr_eyepatch2.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		
		class ItemInfo : HeadgearItem {
			mass = 2;
			uniformModel = "\mgsr_eyepatch\mgsr_eyepatch2.p3d";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
		};
	};
};

class CfgGlasses {
    class None;

    class mgsr_eyepatch_goggles: None
    {
		author="rebel / shlomo";
		mass = 2;
        displayname = "MGSR: Eyepatch (goggles slot)";
        model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		identityTypes[]={};
    };
	
	class mgsr_eyepatch2_goggles: None
    {
		author="rebel / facel";
		mass = 2;
        displayname = "MGSR: Eyepatch 2 (goggles slot)";
        model = "\mgsr_eyepatch\mgsr_eyepatch2.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		identityTypes[]={};
    };
};
