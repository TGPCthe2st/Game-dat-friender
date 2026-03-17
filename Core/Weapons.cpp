/*
    * Cpp Implentation file for Weapon Behavior (Weapons.h)
    * Author: BAVG
    * Maintained / Edited: {Name} Team
    * Outline:
    *       - Weapons scale off of
    *           - Damage Type (Influenced by Character stats)
    *           - Base Damage (Default damage value for the weapon)
    *           - Attack Speed (interval in which the weapon is inactive)
*/
#include "Weapons.h"
#include "peetsCUtil.h"

string Weapon::getName() {return name;}
int* Weapon::getStats() {return stats;}
string Weapon::getDesc() {return desc;}
string Weapon::getWeaponType() {return weaponType;}