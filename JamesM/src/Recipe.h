#pragma once

/******************************************* DO NOT MODIFY THIS FILE *********************************************/

#include <string>
#include <vector>

/**
 * \brief A single item used or gained from a recipe.
 */
struct RecipeItem
{
    std::string Name;
    int Quantity{};
};

/**
 * \brief A recipe for a dish. Stores the names of the ingredients required to make the dish.
 */
struct Recipe
{
    std::vector<RecipeItem> Ingredients{};
    RecipeItem Dish;
};

inline const Recipe APPLE_CANDY_RECIPE{
    {{"apple", 13},
     {"sugar pouch", 3},
     {"water bottle", 1}},
    {"apple candy", 5}};

inline const Recipe PANCAKES_RECIPE{
    {{"egg", 2}, {"flour pouch", 1}, {"sugar pouch", 1}},
    {"pancakes", 2}};
