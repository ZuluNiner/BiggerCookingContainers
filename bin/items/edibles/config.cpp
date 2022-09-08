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
			"DZ_Gear_Food",
			"DZ_Gear_Cooking"
		};
	};
};
class CfgSlots
{
	class Slot_SmokingE
	{
		name="SmokingE";
		displayName="#STR_CfgSmoking0";
		ghostIcon="set:dayz_inventory image:smoking";
	};
	class Slot_SmokingF
	{
		name="SmokingF";
		displayName="#STR_CfgSmoking0";
		ghostIcon="set:dayz_inventory image:smoking";
	};
	class Slot_SmokingG
	{
		name="SmokingG";
		displayName="#STR_CfgSmoking0";
		ghostIcon="set:dayz_inventory image:smoking";
	};
	class Slot_SmokingH
	{
		name="SmokingH";
		displayName="#STR_CfgSmoking0";
		ghostIcon="set:dayz_inventory image:smoking";
	};
}

class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base: Inventory_Base
	{
		varTemperatureMax=100;
	};
	class MushroomBase: Edible_Base
	{
		debug_ItemCategory=6;
		varQuantityInit=130;
		varQuantityMin=0;
		varQuantityMax=130;
	};
	class Apple: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Plum: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Pear: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Tomato: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class GreenBellPepper: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Zucchini: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class SlicedPumpkin: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Potato: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class HumanSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class GoatSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class MouflonSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class PigSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class DeerSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class WolfSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class BearSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class CowSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class SheepSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class FoxSteakMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class ChickenBreastMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class RabbitLegMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class CarpFilletMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class MackerelFilletMeat: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Lard: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Bitterlings: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Carp: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class Sardines: Edible_Base
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class AgaricusMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class MacrolepiotaMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class LactariusMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class AuriculariaMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class BoletusMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};

	class PleurotusMushroom: MushroomBase
	{
		inventorySlot[]=
		{
			"Ingredient",
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
	};
};