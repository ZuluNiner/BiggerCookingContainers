class CfgMods
{
	class BiggerCookingContainers
	{
		type = "mod";
		dir = "BiggerCookingContainers";
		name = "Bigger Cooking Containers";
		author = "Z9";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BiggerCookingContainers/scripts/4_World"};
			};
		};
	};
};

class CfgPatches
{
	class BiggerCookingContainersScripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};