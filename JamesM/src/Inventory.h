#pragma once

/********************************************* DO NOT MODIFY THIS FILE *********************************************/

#include "InventoryItem.h"
#include "Recipe.h"

#include <vector>

using Inventory = std::vector<InventoryItem>;

Inventory ReadInventoryFromCsvText(std::string_view csvText);
Recipe AskForRecipe(const Inventory& inventory);
float AskForBudget(const Inventory& inventory, const Recipe& recipeToUse);
void CookFoodItems(Inventory& inventory, const Recipe& recipe, const float budget);
std::string WriteInventoryToCsvText(const Inventory& inventory);