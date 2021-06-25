class CfgPatches
{
	class reaperCrew_GM_Vests
	{
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F", "cba_settings", "gm_core"};
	};
};
class CfgAddons 
{
	class PreloadAddons 
	{
		class reaperCrew_GM_Vests
		{
			list[] = {"reaperCrew_GM_Vests"};
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class VestItem;

	class gm_ge_army_vest_80_crew;
	class gm_ge_army_vest_80_demolition;
	class gm_ge_army_vest_80_leader;
	class gm_ge_army_vest_80_machinegunner;
	class gm_gc_army_vest_80_lmg_str;
	class gm_ge_army_vest_80_medic;
	class gm_ge_army_vest_80_mp_wht;
	class gm_ge_army_vest_80_officer;
	class gm_ge_army_vest_80_rifleman;

	class RC_gm_ge_army_vest_80_crew: gm_ge_army_vest_80_crew {
		displayName = "GER 80s, Webbing, Crew";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_crew";
			containerClass = "Supply100";
			mass = 5;
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80"};
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_demolition: gm_ge_army_vest_80_demolition {
		displayName = "GER 80s, Webbing, Explosives Specialist";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_demolition";
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80"};
			containerClass = "Supply160";
			mass = 60;
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_leader: gm_ge_army_vest_80_leader {
		displayName = "GER 80s, Webbing, Team Leader";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_leader";
			containerClass = "Supply160";
			mass = 60;
			armor = 0;
			passThrough = 1;
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_machinegunner: gm_ge_army_vest_80_machinegunner {
		displayName = "GER 80s, Webbing, Machine Gunner";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_machinegunner";
			containerClass = "Supply200";
			mass = 20;
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80"};
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_medic: gm_ge_army_vest_80_medic {
		displayName = "GER 80s, Webbing, Medic";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_medic";
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80"};
			containerClass = "Supply160";
			mass = 60;
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_officer: gm_ge_army_vest_80_officer {
		displayName = "GER 80s, Webbing, Officer";
		class ItemInfo: VestItem {
			containerClass = "Supply80";
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_officer";
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80"};
			mass = 60;
			armor = 0;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

	class RC_gm_ge_army_vest_80_rifleman: gm_ge_army_vest_80_rifleman {
		displayName = "GER 80s, Webbing, Rifleman";
		class ItemInfo: VestItem {
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_vest_80_rifleman";
			containerClass = "Supply160";
			mass = 40;
			armor = 0;
			passThrough = 1;
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co"};
			hiddenSelectionsMaterials[] = {"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 24;	
					passThrough		= 0.5;		
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 24;
					passThrough		= 0.5;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.5;
					armor			= 24;
				};
			};
			modelSides[] = {6};
			overlaySelectionsInfo[] = {"hide_for_big_suit", "hide_for_normal_suit", "hide_for_tank_suit"};
			hiddenSelections[] = {"tex_01", "tex_02", "cord_01", "rank_01", "armband_l", "armband_r", "clan", "insignia", "letter_01", "letter_02", "letter_03", "letter_04", "letter_05", "letter_06", "letter_07", "letter_08", "letter_09", "letter_10"};
			author = "Bohemia Interactive";
			_generalMacro = "VestItem";
			type = 701;
			uniformType = "Default";
			showHolsteredPistol = 0;
			scope = 0;
		};
	};

};