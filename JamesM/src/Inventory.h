#pragma once

/********************************************* DO NOT MODIFY THIS FILE *********************************************/

#include "InventoryItem_MODIFY.h"

#include <vector>

using Inventory = std::vector<InventoryItem>;

Inventory ReadInventoryFromCsvText(std::string_view csvText);
void ModifyInventory(Inventory& inventory);
std::string WriteInventoryToCsvText(const Inventory::const_iterator& invBegin, const Inventory::const_iterator& invEnd);