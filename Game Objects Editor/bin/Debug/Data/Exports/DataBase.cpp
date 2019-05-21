#pragma once
#include "../../../Header Files/Objects/DataBase.h"

DataBase::~DataBase()
{
}
DataBase::DataBase()
{
/****************************************************************************************************************************************/
//                                                       CHARACTERS                                                                      //
/****************************************************************************************************************************************/
//Characters Stat Blocks: exp, maxHealth, Agility, Precision, MaxEnergy, Precision, Mastery, Actions Remaining

//Character ID: 0 - nullCharacter
charactersIndex.insert(pair<string,int>("nullCharacter",0));
statBlocks[0].exp=0;
statBlocks[0].MaxHealth=0;
statBlocks[0].Agility=0;
statBlocks[0].Precision=0;
statBlocks[0].MaxEnergy=0;
statBlocks[0].Mastery=0;
statBlocks[0].actionsremaining=0;

//Stat Gains Block - Saved as the character's Stat gain block. Also used for level adjustments
statGainBlocks[0].AgilityGain=1;
statGainBlocks[0].MaxActionsGain=1;
statGainBlocks[0].MaxEnergyGain=1;
statGainBlocks[0].MaxHealthGain=1;
statGainBlocks[0].PrecisionGain=1;

//Weapons to Equip, Armour to Equip, Abilities
characterAttachments.push_back({"Null","null","null","null","null"});
weaponDropChance.push_back(0);
armorDropChance.push_back(0);

//====================================================


//Character ID: 1 - Demorgan
charactersIndex.insert(pair<string,int>("Demorgan",1));
statBlocks[1].exp=900;
statBlocks[1].MaxHealth=2;
statBlocks[1].Agility=50;
statBlocks[1].Precision=140;
statBlocks[1].MaxEnergy=122;
statBlocks[1].Mastery=3;
statBlocks[1].actionsremaining=5;

//Stat Gains Block - Saved as the character's Stat gain block. Also used for level adjustments
statGainBlocks[1].AgilityGain=2;
statGainBlocks[1].MaxActionsGain=1;
statGainBlocks[1].MaxEnergyGain=10;
statGainBlocks[1].MaxHealthGain=15;
statGainBlocks[1].PrecisionGain=10;

//Weapons to Equip, Armour to Equip, Abilities
characterAttachments.push_back({"Purple","Bag","Billabong","Billabong","Billabong"});
weaponDropChance.push_back(12);
armorDropChance.push_back(60);

//====================================================


//Character ID: 2 - Uko
charactersIndex.insert(pair<string,int>("Uko",2));
statBlocks[2].exp=100;
statBlocks[2].MaxHealth=11;
statBlocks[2].Agility=11;
statBlocks[2].Precision=11;
statBlocks[2].MaxEnergy=1;
statBlocks[2].Mastery=12;
statBlocks[2].actionsremaining=1;

//Stat Gains Block - Saved as the character's Stat gain block. Also used for level adjustments
statGainBlocks[2].AgilityGain=11;
statGainBlocks[2].MaxActionsGain=1;
statGainBlocks[2].MaxEnergyGain=1;
statGainBlocks[2].MaxHealthGain=1;
statGainBlocks[2].PrecisionGain=1;

//Weapons to Equip, Armour to Equip, Abilities
characterAttachments.push_back({"Null","Bag","null","Dark_Satan","null"});
weaponDropChance.push_back(213);
armorDropChance.push_back(1);

//====================================================

/****************************************************************************************************************************************/
//                                                         WEAPONS                                                                        //
/****************************************************************************************************************************************/
//weapons.push_back(new WeaponComponent(Type, Name));
//weapons[id].spawn(element,amplitude,duration,damage,range,masteryReq,classReq,Description);

weapons.push_back(WeaponComponent(dagger,"nullWeapon",0));
weapons[0].spawn(harmony,0,0,1,1,1,"Villain","The Null_Weapon");

weapons.push_back(WeaponComponent(longsword,"Iron Sword",1));
weapons[1].spawn(fire,0,0,5,1,1,"Fighter","Your common mass produced Iron Sword. There is nothing special about it.");

weapons.push_back(WeaponComponent(halberd,"Rusty Halberd",2));
weapons[2].spawn(ice,0,0,4,2,1,"Tank","An old and rusty halberd.");

weapons.push_back(WeaponComponent(knife,"Bone Scalpel",3));
weapons[3].spawn(poison,1,3,2,1,1,"Doctor","An old Scalpel used for operations on goats.");

weapons.push_back(WeaponComponent(bow,"Wooden Bow",4));
weapons[4].spawn(nature,0,0,3,5,1,"Ranger","A handmade wooden bow of average quality.");

weapons.push_back(WeaponComponent(scepter,"Black Stick",5));
weapons[5].spawn(dark,1,1,1,5,1,"Wizard","A cool looking black stick. Looks more like a burnt twig.");

weapons.push_back(WeaponComponent(staff,"Mash Paddle",6));
weapons[6].spawn(harmony,0,0,2,2,1,"Healer","All-grain brewing requires that the entire grain bill be submerged in the water during the mashing process, as grains that do not get wet won't convert their starches into the sugars, which is essential for the final wort. In order to accomplish this step, you need a Mash Paddle to help you stir the grains in the vessel during the dough-in, or as soon as you add the grains to the water.");

weapons.push_back(WeaponComponent(dagger,"Iron Dagger",7));
weapons[7].spawn(wind,1,3,3,1,1,"Rogue","A common mass produced Iron Dagger.");

/****************************************************************************************************************************************/
//                                                         ARMORS                                                                        //
/****************************************************************************************************************************************/
//Populating Armors DataBase
//Buffs/Debuffs haven't been included yet.
//Item ID: 0 - null
armors.push_back(ArmorComponent("null",0));
bodyParts.push_back({pair<string,bool>("legs",false),pair<string,bool>("rightArm",false),pair<string,bool>("leftArm",false),pair<string,bool>("Head",false)});
resistances.push_back({pair<ElementType,int>(fire,0),pair<ElementType,int>(ice,0),pair<ElementType,int>(poison,0),pair<ElementType,int>(dark,0),pair<ElementType,int>(nature,0),pair<ElementType,int>(wind,0),pair<ElementType,int>(light,0),pair<ElementType,int>(harmony,0)});
armors[0].spawn(resistances[+0], false,"Null Armor Object",bodyParts[0],1,"Villain",1,0);

//Item ID: 1 - Bag
armors.push_back(ArmorComponent("Bag",1));
bodyParts.push_back({pair<string,bool>("legs",false),pair<string,bool>("rightArm",false),pair<string,bool>("leftArm",false),pair<string,bool>("Head",false)});
resistances.push_back({pair<ElementType,int>(fire,11),pair<ElementType,int>(ice,1),pair<ElementType,int>(poison,3),pair<ElementType,int>(dark,1),pair<ElementType,int>(nature,1),pair<ElementType,int>(wind,1),pair<ElementType,int>(light,1),pair<ElementType,int>(harmony,1)});
armors[1].spawn(resistances[+1], false,"",bodyParts[1],1,"Wizard",1,1);

}
