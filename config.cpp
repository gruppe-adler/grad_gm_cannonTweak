class CfgPatches
{
    class grad_gm_cannonTweak
    {
        author = "nomisum";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "gm_vehicles_land_tracked_m109", "gm_weapons_cannons_155mm_m126", "gm_weapons_ammo"
        };
    };
};

class CfgMagazines
{
    class gm_magazine_155mm_base;
    class gm_1Rnd_155mm_he_dm21 : gm_magazine_155mm_base
    {
        initSpeed = 300; // 810;
    };

    class gm_magazine_122x447mm_base;
    class gm_1Rnd_122x447mm_he_of462: gm_magazine_122x447mm_base
    {
        initSpeed = 300; // 740;
    };
};

class CfgWeapons
{
    class gm_cannon_base;
    class gm_155mm_m126_base : gm_cannon_base 
    {
        class range_01_single;
    };

    class gm_122mm_2a18_base: gm_cannon_base 
    {
        class range_01_single;
    };

    class gm_155mm_m126g : gm_155mm_m126_base
    {
        modes[] = {"range_01_single", "range_02_single", "range_03_single", "range_04_single"};
        class range_01_single : range_01_single
        {
            displayName = "Semi (close)";
            artilleryDispersion = 3.2;
            artilleryCharge = 0.09; // 0.25 2000-4000
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 500;
            midRangeProbab = 0.3;
            maxRange = 1000;
            maxRangeProbab = 0.2;
        };
        class range_02_single : range_01_single
        {
            displayName = "Semi (medium)";
            artilleryCharge = 0.11; // 0.34 3800-7500
            minRange = 1000;
            minRangeProbab = 0.2;
            midRange = 1250;
            midRangeProbab = 0.3;
            maxRange = 1500;
            maxRangeProbab = 0.2;
        };
        class range_03_single : range_01_single
        {
            displayName = "Semi (far)";
            artilleryCharge = 0.133; // 0.4675 7300-14600
            minRange = 1250;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.3;
            maxRange = 2000;
            maxRangeProbab = 0.2;
        };

         class range_04_single  : range_01_single {
            displayName = "Semi (very far)";
            artilleryCharge = 0.153; // 0.4675 7300-14600
            minRange = 1250;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.3;
            maxRange = 2000;
            maxRangeProbab = 0.2;
        };
    };

    class gm_122mm_2a18 : gm_122mm_2a18_base
    {
        magazines[] = {
            "gm_1Rnd_122x447mm_he_of462", 
            "gm_1Rnd_122x447mm_he_3of56", 
            "gm_1Rnd_122x447mm_smoke_d462", 
            "gm_1Rnd_122x447mm_illum_s463", 
            "gm_28Rnd_122x447mm_he_of462", 
            "gm_28Rnd_122x447mm_he_3of56", 
            "gm_28Rnd_122x447mm_smoke_d462", 
            "gm_28Rnd_122x447mm_illum_s463", 
            "gm_9Rnd_122x447mm_he_of462", 
            "gm_9Rnd_122x447mm_he_3of56", 
            "gm_9Rnd_122x447mm_smoke_d462", 
            "gm_9Rnd_122x447mm_illum_s463",  
            "gm_3Rnd_122x447mm_he_of462", 
            "gm_3Rnd_122x447mm_he_3of56", 
            "gm_3Rnd_122x447mm_smoke_d462", 
            "gm_3Rnd_122x447mm_illum_s463"
        };

        class range_01_single : range_01_single
        {
            displayName = "Semi (close)";
            artilleryDispersion = 3.2;
            artilleryCharge = 0.11; // 0.25 2000-4000
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 500;
            midRangeProbab = 0.3;
            maxRange = 1000;
            maxRangeProbab = 0.2;
        };
        class range_02_single : range_01_single
        {
            displayName = "Semi (medium)";
            artilleryCharge = 0.13; // 0.34 3800-7500
            minRange = 1000;
            minRangeProbab = 0.2;
            midRange = 1250;
            midRangeProbab = 0.3;
            maxRange = 1500;
            maxRangeProbab = 0.2;
        };
        class range_03_single : range_01_single
        {
            displayName = "Semi (far)";
            artilleryCharge = 0.15; // 0.4675 7300-14600
            minRange = 1250;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.3;
            maxRange = 2000;
            maxRangeProbab = 0.2;
        };

         class range_04_single  : range_01_single {
            displayName = "Semi (very far)";
            artilleryCharge = 0.17; // 0.4675 7300-14600
            minRange = 1250;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.3;
            maxRange = 2000;
            maxRangeProbab = 0.2;
        };
    };
};
