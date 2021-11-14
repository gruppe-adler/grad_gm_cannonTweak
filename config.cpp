class CfgPatches
{
	class grad_gm_cannonTweak
	{
		author="nomisum";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"gm_vehicles_land_tracked_m109", "gm_weapons_cannons_155mm_m126", "gm_weapons_ammo"
		};
	};
};


class cfgMagazines {

	class gm_magazine_155mm_base;
	class gm_1Rnd_155mm_he_dm21: gm_magazine_155mm_base
		{
			initSpeed = 210; // 810;
		};
};


class Mode_SemiAuto;

class CfgWeapons {
    class gm_cannon_base;
    class gm_155mm_m126_base: gm_cannon_base {
    	class gm_SemiAuto: Mode_SemiAuto {};
    	class range_01_single: gm_SemiAuto
	    {
	        artilleryDispersion = 3.2;
	        artilleryCharge = 0.05; // 0.25 2000-4000
	        minRange = 0;
            minRangeProbab = 0.2;
            midRange = 500;
            midRangeProbab = 0.3;
            maxRange = 1000;
            maxRangeProbab = 0.2;
	       
	    };
	    class range_02_single: range_01_single
	    {
	        artilleryCharge = 0.1; // 0.34 3800-7500
	        minRange = 1000;
            minRangeProbab = 0.2;
            midRange = 1250;
            midRangeProbab = 0.3;
            maxRange = 1500;
            maxRangeProbab = 0.2;
	    };
	    class range_03_single: range_01_single
	    {
	        artilleryCharge = 0.15; // 0.4675 7300-14600
	        minRange = 1250;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.3;
            maxRange = 2000;
            maxRangeProbab = 0.2;
	    };
    };
    class gm_155mm_m126g: gm_155mm_m126_base
    {
        class range_01_single: range_01_single
        {
        };
        class range_02_single: range_02_single
        {
        };
        class range_03_single: range_03_single
        {
        };
    };
};
