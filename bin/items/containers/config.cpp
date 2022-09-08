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
	class Bottle_Base;
	class Inventory_Base;
	class Pot: Bottle_Base
	{
		scope=2;
		displayName="Bigger Cooking Pot";
		descriptionShort="$STR_CfgVehicles_Pot1";
		model="\dz\gear\cooking\CookingPot.p3d";
		weight=440;
		itemSize[]={4,3};
		itemsCargoSize[]={8,4};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FryingPan: Inventory_Base
	{
		scope=2;
		displayName="Bigger Frying Pan";
		descriptionShort="$STR_CfgVehicles_FryingPan1";
		model="\dz\gear\cooking\FryingPan.p3d";
		rotationFlags=2;
		openable=0;
		weight=220;
		itemSize[]={4,3};
		itemsCargoSize[]={4,5};
		fragility=0.0099999998;
		allowOwnedCargoManipulation=1;
		volume=1000;
		varTemperatureMax=200;
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\cooking\data\frying_pan.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\cooking\data\frying_pan.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\cooking\data\frying_pan_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\cooking\data\frying_pan_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\cooking\data\frying_pan_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};