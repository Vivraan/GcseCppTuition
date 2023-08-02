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
    uint32_t Quantity;
};

/**
 * \brief A recipe for a dish. Stores the names of the ingredients required to make the dish.
 */
struct Recipe
{
    std::vector<RecipeItem> Ingredients;
    RecipeItem Dish;
};

inline Recipe appleCandyRecipe{
    {{"apple", 13},
     {"sugar pouch", 3},
     {"water bottle", 1}},
    {"apple candy", 5}};

inline Recipe pancakesRecipe{
    {{"egg", 2}, {"flour pouch", 1}, {"sugar pouch", 1}},
    {"pancakes", 2}};
