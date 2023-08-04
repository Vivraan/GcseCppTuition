#include "Inventory.h"
#include "Recipe.h"

#include <cassert>
#include <charconv>
#include <sstream>

constexpr char NEGATIVE_DOUBLOON_BUDGET_MSG[] = "Somehow the number of doubloons for the recipe is not positive?!?! Panicking!";

/**
 * \brief Reads data from valid CSV and converts it into an inventory.
 * \param csvText The text loaded from the Inventory CSV file.
 * \return A valid Inventory object.
 */
Inventory ReadInventoryFromCsvText(std::string_view csvText)
{
    // TODO(dad): Ask James to read these comments and see if he remembers the whiteboard diagrams.
    // TODO(james): Read the comments!

    // At first, we work with something looking like this:
    // ,item,cost,count👇0,someting,50,300👇1,anoderting,25,100👇...
    // Here, 👇 is the new line character, which you have seen as '\n' in C++ when we need to print it.

    // To us, this looks like
    // ,item,cost,count <--(the header)
    // 0,someting,50,300
    // 1,anoderting,25,100
    // ...

    Inventory inventory;

    for (
        // We skip the header by asking the program to give us the position of m which comes after the first new line character.
        size_t n = csvText.find('\n', 0), m = n + 1;
        // We keep checking if n becomes the special value, npos.
        (n = csvText.find('\n', m)) != std::string_view::npos;
        // After each loop, make m the next index after n, which is n + 1.
        m = n + 1)
    {
        // After the header is skipped, we have:
        // ,item,cost,count(👇)
        //                   ^~~~ current position of the next new line char (call it n)
        // (0),someting,50,300👇
        //  ^~~~~~~~~~~~~~~~~~~~~ the starting index of the next line (say m)
        // 1️,anoderting,25,100👇
        // ...

        // To the computer, it looks like
        // ,item,cost,count(👇)(0),someting,50,300👇1,anoderting,25,100👇...
        //                   ^  ^
        //                   n  m

        // n and m are indices, which are whole numbers for our purposes.

        InventoryItem item{};

        auto line = csvText.substr(m, n - m);
        // line is now a view of "0,someting,50,300"
        auto c = line.find(',');
        // "0,someting,50,300"
        //   ^
        //   c
        line.remove_prefix(c + 1); // skip row index number!
        // line now looks like "someting,50,300"

        c = line.find(',');
        // "someting,50,300"
        //          ^
        //          c
        item.Name = line.substr(0, c);
        // item.Name now looks like "someting"
        //                           ~~~~~~~~
        //                           01234567 <-- (c = 8 characters long!)
        //                           ^
        //                           |-->(_Off: the name of the first parameter if you are using Microsoft's compiler!)
        line.remove_prefix(c + 1);
        // line now looks like "50,300"

        c = line.find(',');
        item.Cost = std::stof(line.substr(0, c).data());
        // item.Cost is the float-ified version of "50".
        line.remove_prefix(c + 1);
        // line is now just "300"

        item.Count = std::stoi(line.data());
        // item.Count is the int-ified version of "300".

        inventory.push_back(item); // Add the item to the inventory, basically.
    }

    return inventory;
}

/**
 * \brief Ask the player to provide a name for the recipe to be used.
 * \param inventory The inventory being queried.
 * \return The recipe to use.
 */
Recipe AskForRecipe(const Inventory& inventory)
{
    Recipe recipeToUse;

    // TODO(james): ask the player for a recipe name. If they type "quit", don't ask them again.
    // TODO(james): The only accepted inputs are "apple candy" and "pancakes".
    // TODO(james): Also check if the player has enough ingredients to make the recipe.

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER START

    // std::cout << "Which recipe would you like to use? (Type quit to exit) ";
    // while (true)
    //{
    // recipeInput:
    //     std::string inputText;
    //     std::getline(std::cin, inputText);

    //    if (inputText == "quit")
    //    {
    //        std::cout << "Exiting.\n";
    //        break;
    //    }

    //    if (inputText == APPLE_CANDY_RECIPE.Dish.Name)
    //    {
    //        recipeToUse = APPLE_CANDY_RECIPE;
    //    }
    //    else if (inputText == PANCAKES_RECIPE.Dish.Name)
    //    {
    //        recipeToUse = PANCAKES_RECIPE;
    //    }
    //    else
    //    {
    //        std::cout << "That doesn't seem right. Maybe you are looking for \"apple candy\" or \"pancakes\"? ";
    //        continue;
    //    }

    //    // ReSharper disable CppUseStructuredBinding
    //    for (auto& item : inventory)
    //    {
    //        for (auto& ingredient : recipeToUse.Ingredients)
    //        // ReSharper restore CppUseStructuredBinding
    //        {
    //            if (item.Name == ingredient.Name && item.Count < ingredient.Quantity)
    //            {
    //                std::cout << "You don't have enough units of " << ingredient.Name << " to make " << recipeToUse.Dish.Name << ". Try again! ";
    //                goto recipeInput;
    //            }
    //        }
    //    }
    //}

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER END

    return recipeToUse;
}

/**
 * \brief A helper function to convert numbers.
 * TODO(james): You can ignore this. Just use the function like this:
 *  //    if (const auto [isOkay, convertedValue] = ToFloat(budgetStr); isOkay)
    //    {
    //        DO_STUFF()
    //    }
 * \param str The string value to be converted
 * \return If conversion was successful, and the float
 */
std::tuple<bool, float> ToFloat(const std::string_view str)
{
    float value = 0;
    const auto [ptr, error] = std::from_chars(str.data(), str.data() + str.size(), value);

    constexpr auto ok = std::errc{};
    return {error == ok, value};
}

float AskForBudget(const Inventory& inventory, const Recipe& recipeToUse)
{
    float recipeMaxBudget = 500;

    // TODO(james): Find out the recipeMaxBudget based on the recipe being used.
    // Hint: it is the sum of costs of each ingredient of a recipe multiplied by each ingredient's quantity.

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER START

    //// ReSharper disable CppUseStructuredBinding
    // for (const auto& item : inventory)
    //{
    //     for (const auto& ingredient : recipeToUse.Ingredients)
    //     // ReSharper restore CppUseStructuredBinding
    //     {
    //         if (item.Name == ingredient.Name)
    //         {
    //             recipeMaxBudget += item.Cost * static_cast<float>(item.Count);
    //         }
    //     }
    // }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER END

    assert(((void)NEGATIVE_DOUBLOON_BUDGET_MSG, recipeMaxBudget > 0));

    float inputBudget;

    // TODO(james): Take input from the player and store it in inputBudget. If they type 0, don't ask them again.
    // TODO(james): Make sure it's valid!

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER START

    // std::cout << "How many doubloons can you spend? (Type 0 to exit) ";
    // while (true)
    //{
    //     std::string budgetStr;
    //     std::getline(std::cin, budgetStr);

    //    if (const auto [isOkay, convertedValue] = ToFloat(budgetStr); isOkay)
    //    {
    //        inputBudget = convertedValue;
    //        assert(((void)NEGATIVE_DOUBLOON_BUDGET_MSG, inputBudget < 0));
    //    }
    //    else
    //    {
    //        std::cout << "That doesn't seem right. I'm looking for a *number* of doubloons. Try again!";
    //        continue;
    //    }

    //    if (inputBudget == 0) // NOLINT(clang-diagnostic-float-equal)
    //    {
    //        std::cout << "Exiting.\n";
    //        break;
    //    }

    //    if (inputBudget > recipeMaxBudget)
    //    {
    //        std::cout << "You don't have enough doubloons to make that recipe. Try again!";
    //        continue;
    //    }

    //    break;
    //}

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER END

    return inputBudget;
}

/**
 * \brief Prompts the player for which recipe they want to use and the cost they can shell out (budget).
 * Players get 500 doubloons to start with, and they can also count the total worth of all
 * their inventory items needed in a recipe in their budget.
 * \param inventory the inventory to modify.
 * \param recipe The recipe to be used
 * \param budget The budget the player can dish out
 */
void CookFoodItems(Inventory& inventory, const Recipe& recipe, const float budget)
{
    // TODO(james): Add your code here.
    // TODO(vivraan): Code the answer key in the future.
    // This may be a hard problem because it looks like a greedy algorithm implementation.
    // TODO(dad): Suggest simplification.
}

// TODO(dad): There are two approaches to writing the data back which are exposed to James.

std::string WriteInventoryToCsvText_String(const Inventory& inventory)
{
    std::string csvText = ",item,cost,count\n";

    for (size_t itemKey = 0; itemKey < inventory.size(); itemKey++)
    {
        // TODO(james): Add your code here.

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER START

        //    // ReSharper disable once CppUseStructuredBinding
        //    const auto& item = inventory[itemKey];
        //    csvText += std::to_string(itemKey) + ',' + item.Name + ',' + std::to_string(item.Cost) + ',' + std::to_string(item.Count) + '\n';

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER END
    }

    return csvText;
}

// One can also use a std::stringstream, which is easier to read.

std::string WriteInventoryToCsv_StringStream(const Inventory& inventory)
{
    std::stringstream csvText{",item,cost,count\n"};

    for (std::size_t itemKey = 0; itemKey < inventory.size(); itemKey++)
    {
        // TODO(james): Add your code here.

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER START

        //    // ReSharper disable once CppUseStructuredBinding
        //    const auto& item = inventory[itemKey];
        //    csvText << itemKey << ',' << item.Name << ',' << item.Cost << ',' << item.Count << '\n';

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////// ANSWER END
    }

    return csvText.str();
}

/**
 * \brief Writes the inventory object into a valid CSV string.
 * \return CSV string.
 */
std::string WriteInventoryToCsvText(const Inventory& inventory)
{
    return WriteInventoryToCsvText_String(inventory);
}
