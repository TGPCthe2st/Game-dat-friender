/*
    * Implementation file for Bauble Behavior (Items.h)
    * Author: BAVG
    * Maintained / Edited: {Name} Team
    * Outline:
    *       - Baubles will have varied rarities that dictate behaviors (rarer baubles will have stronger effects)
    *           - Common
    *               - Basic Name
    *               - 1 stat modifier (additional strength, health, etc)
    *           - Rare
    *               - Slightly cooler Name
    *               - 1 - 2 stat modifiers (additional strength, health, etc)
    *           - Epic
    *               - Decent Name
    *               - 2 stat modifiers (additional strength, health, etc)
    *           - Legendary
    *               - Good Name
    *               - 3 stat modifiers (additional strength, health, etc)
    *           - Mythical
    *               - Uber cool Name (Like Yamato or sm)
    *               - 3 - 4 stat modifiers (additional strength, health, etc)
    *       - Baubles will have the possibility for status effects and things from rare+ (rare would be like burn and legendary could be like amaterasu or sm)
*/
#include "Items.h"
#include "peetsCutil.h"


string Item::getName() {return name;}
string Item::getDType() {return dType;}
string Item::getRarity() {return rarity;}
vector<string> Item::getStats() {return stats;}