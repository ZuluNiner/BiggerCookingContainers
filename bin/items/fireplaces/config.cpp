class CfgPatches
{
	class BiggerCookingContainers
	{
		units[] = {};
		weapons[] = {};
		name = "Bigger Cooking Containers";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Cooking"
		};
	};
};
class CfgVehicles
{
	class FireplaceBase;
	class FireplaceIndoor: FireplaceBase
	{
		scope=2;
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"DirectCookingA",
			"DirectCookingB",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"SmokingE",
			"SmokingF",
			"SmokingG",
			"SmokingH"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD",
					"SmokingE",
					"SmokingF",
					"SmokingG",
					"SmokingH"
				};
			};
		};
	};
	class Fireplace: FireplaceBase
	{
		scope=2;
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"CookingEquipment",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"CookingTripod",
			"Stones",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"SmokingE",
			"SmokingF",
			"SmokingG",
			"SmokingH"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD",
					"SmokingE",
					"SmokingF",
					"SmokingG",
					"SmokingH"
				};
			};
		};
	};
	
	class OvenIndoor: FireplaceBase
	{
		scope=2;
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"DirectCookingA",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
			};
		};
	};
	
	class BarrelHoles_ColorBase: FireplaceBase
	{
		scope=2;
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"SmokingE",
			"SmokingF",
			"SmokingG",
			"SmokingH"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD",
					"SmokingE",
					"SmokingF",
					"SmokingG",
					"SmokingH"
				};
			};
		};
	};
};