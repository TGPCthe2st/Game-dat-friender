/*
    * Header file in which Character behavior will be defined
    * Author: BAVG
    * Maintained / Edited: {Name} Team
    * Outline:
    *    - Variety of characters with different stats and "effects"? (Effects = char strengths)
    *      - Stats: Health, Speed (Character specific), Defense, Strength (Physical), Dexterity (Range + Crit), Smart
    *      - Perk Stuff (Additional stat and effect stuff)
    *          - Lizard Boy has to go through and do whatever bc he was being confusing
    *      - Weapons: Base stats that multiply based on char stats
    *          - Made Weapons have 3 basic stats (Damage Type (for scaling), base damage, attack speed)
    *          - Planned to have Weapon presets elsewhere (like a loot table class) that define the actual stats and descriptions and what not
*/
#pragma once

#include "peetsCUtil.h"
#include "Items.h"
#include "Weapons.h"
class Character
{
    string className;
    int stats [6]; // Health, Speed, Defense, Strength, Dexterity, Smart
    Item baubles [5];
    Weapon weapon;
    public:
        Character(string className, int stats[6], Item baubles[5], Weapon weapon)
        {
            this -> className = className;
            for (int i = 0; i < 6; i++)
            {
                this -> stats[i] = stats[i];
            }
            for (int i = 0; i < 5; i++)
            {
                this -> baubles[i] = baubles[i];
            }
            this -> weapon = weapon;
        }
        string getClassName();
        int* getStats();
        Item* getBaubles();
        Weapon getWeapon();
};