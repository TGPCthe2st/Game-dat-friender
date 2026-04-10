/*
    * Header file in which Weapon behavior will be defined
    * Author: BAVG
    * Maintained / Edited: {Name} Team
    * Outline:
    *       - Weapons scale off of
    *           - Damage Type (Influenced by Character stats)
    *           - Base Damage (Default damage value for the weapon)
    *           - Attack Speed (interval in which the weapon is inactive)
*/
#pragma once
#include "Items.h"
#include "peetsCUtil.h"

class Weapon : public Item
{
    string name;
    int stats [3]; // dType, baseDamage, attackSpeed
    string desc;
    string weaponType; // Greatsword, Dagger, Bow, etc.
    public:
        Weapon(string name, int stats[3], string desc, string weaponType)
        {
            this -> name = name;
            for (int i = 0; i < 3; i++)
            {
                this -> stats[i] = stats[i];
            }
            this -> desc = desc;
            this -> weaponType = weaponType;
        }
        Weapon()
        {
            this -> name = "Placeholder";
            for (int i = 0; i< 3; i++)
            {
                this -> stats[i] = 0;
            }
            this -> desc = "Useless stick";
            this -> weaponType = "Stick";
        }
        string getName();
        int* getStats();
        string getDesc();
        string getWeaponType();
};
