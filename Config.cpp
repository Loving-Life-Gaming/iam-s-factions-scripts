#define _ARMA_

class CfgPatches
{
	class iam_Factions_scripts
	{
		
		
		
		
		
		requiredAddons[]={"DayZExpansion_AI_Scripts"};
	};
};
class CfgMods
{
	class iam_Exapnsion_Factions
	{
		action="";
		
		
		hideName = 1;
		hidePicture = 1;
		name = "iam_Exapnsion_Factions";
		credits = "DayZ Expansion and dolphin";
		author = "iam";
		authorID = "";  
		version = "1.0";
		extra = 0;
		type = "servermod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"iam_Factions_scripts/Scripts/3_game"};
			};
		};
	};

};

