#include "Inventory.h"
#include "Recipe.h"
#include "../MyAssert.h"

#include <csignal>
#include <iostream>

constexpr char NEGATIVE_DOUBLOON_BUDGET_MSG[] = "Somehow the number of doubloons for the recipe is not positive?!?! Panicking!";

/**
 * \brief Reads data from valid CSV and converts it into an inventory.
 * \param csvText The text loaded from the Inventory CSV file.
 * \return A valid Inventory object.
 */
Inventory ReadInventoryFromCsvText(std::string_view csvText)
{
    Inventory inventory;

    auto currentLineEndIndex = csvText.find('\n');
    auto nextLineStartIndex = currentLineEndIndex + 1; // Skip header!

    while ((currentLineEndIndex = csvText.find('\n', nextLineStartIndex)) != std::string_view::npos)
    {
        InventoryItem item{};

        currentLineEndIndex = csvText.find('\n', nextLineStartIndex);
        nextLineStartIndex = currentLineEndIndex + 1;

        auto line = csvText.substr(nextLineStartIndex, currentLineEndIndex - nextLineStartIndex);
        auto nextCommaIndex = line.find(',');
        line.remove_prefix(nextCommaIndex + 1); // skip row index number!

        nextCommaIndex = line.find(',');
        item.Name = line.substr(0, nextCommaIndex);
        line.remove_prefix(nextCommaIndex + 1);

        nextCommaIndex = line.find(',');
        item.Cost = std::stol(line.substr(0, nextCommaIndex).data());
        line.remove_prefix(nextCommaIndex + 1);

        item.Count = std::stol(line.data());

        inventory.push_back(item);
    }

    return inventory;
}

Recipe AskForRecipe(Inventory& inventory)
{
    Recipe recipeToUse;

    std::cout << "Which recipe would you like to use? (Type quit to exit) ";
    while (true)
    {
    recipeInput:
        std::string recipeName;
        std::getline(std::cin, recipeName);

        if (recipeName == "quit")
        {
            std::cout << "Exiting.\n";
            break;
        }

        if (recipeName == appleCandyRecipe.Dish.Name)
        {
            recipeToUse = appleCandyRecipe;
        }
        else if (recipeName == pancakesRecipe.Dish.Name)
        {
            recipeToUse = pancakesRecipe;
        }
        else
        {
            std::cout << "That doesn't seem right. Maybe you are looking for \"apple candy\" or \"pancakes\"? ";
            continue;
        }

        for (auto& [itemName, cost, count] : inventory)
        {
            for (auto& [ingredientName, quantity] : recipeToUse.Ingredients)
            {
                if (itemName == ingredientName && count < quantity)
                {
                    std::cout << "You don't have enough units of " << ingredientName << " to make " << recipeName << ". Try again! ";
                    goto recipeInput;
                }
            }
        }
    }

    return recipeToUse;
}

long AskForBudget(Inventory& inventory)
{
    long recipeMaxBudget = 500;

    

    assert(((void)NEGATIVE_DOUBLOON_BUDGET_MSG, recipeMaxBudget > 0));

    long inputBudget;

    

    return inputBudget;
}

/**
 * \brief Prompts the user for which recipe they want to use and the cost they can shell out (budget).
 * Players get 500 doubloons to start with, and they can also count the total worth of all
 * their inventory items needed in a recipe in their budget.
 * \param inventory the inventory to modify.
 * \param recipe The recipe to be used
 * \param budget The budget the player can dish out
 */
void CookFoodItems(Inventory& inventory, const Recipe& recipe, const long budget)
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
