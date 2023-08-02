#include "Inventory.h"
#include "Recipe.h"

#include <iostream>

/**
 * \brief Reads data from valid CSV and converts it into an inventory.
 * \param csvText The text loaded from the Inventory CSV file.
 * \return A valid Inventory object.
 */
Inventory ReadInventoryFromCsvText(std::string_view csvText)
{
    Inventory inventory;

    auto nextPos = csvText.find('\n');
    auto pos = nextPos + 1; // Skip header!

    // TODO: Add your code here.

    return inventory;
}

/**
 * \brief Prompts the user for which recipe they want to use and the cost they can shell out (budget).
 * Players get 500 doubloons to start with, and they can also count the total worth of all
 * their inventory items needed in a recipe in their budget.
 * \param inventory the inventory to modify.
 */
void CookFoodItems(Inventory& inventory)
{
    // TODO: Add your code here.
    // This will be quite challenging so we'll work on this for quite some time!
}

/**
 * \brief Writes the inventory object into a valid CSV string.
 * \param invBegin The beginning of the inventory. This way the inventory isn't modified.
 * \param invEnd The end of the inventory.
 * \return CSV string.
 */
std::string WriteInventoryToCsvText(const Inventory::const_iterator& invBegin, const Inventory::const_iterator& invEnd)
{
    std::string csvText = ",item,cost,count\n";

    // TODO: use this construct.
    auto i = 0;
    for (auto it = invBegin; it != invEnd; ++it)
    {
        const auto& item = *it;

        // TODO: Add your code here.

        i++;
    }

    return csvText;
}
