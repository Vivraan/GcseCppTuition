// GcseCppTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctime>
#include <iostream>
#include <random>
#include <string>
#include <unordered_set>
#include <vector>

// REVISE: What is the style of naming I am following throughout this code?
// EXTRA CREDIT: Can you identify which major software foundation writes code like this? Hint: It's not Google.
void play_loony_lips() {
	const std::unordered_set<std::string_view> placeholder_set{"{PLACE}", "{ANIMAL}", "{FOOD}", "{PROFESSIONAL}", "{COLOR}", "{RUNNING_VERB}", "{EATING_VERB}", "{COLOR_ADJECTIVE}", "{FEELING_ADJECTIVE}"};
	const std::vector placeholders(begin(placeholder_set), end(placeholder_set));
	// QUESTION 1: What did I just do?

	const std::vector<std::string_view> stories = {
		"{PROFESSIONAL} went for a {RUNNING_VERB} to the {PLACE} with a {COLOR_ADJECTIVE} {ANIMAL}.",
		"In {PLACE}, a {FEELING_ADJECTIVE} {ANIMAL} saw the {PROFESSIONAL} {EATING_VERB} {FOOD}.",
		"The {PROFESSIONAL} loved to {EATING_VERB} {COLOR} {FOOD} at the {FEELING_ADJECTIVE} {PLACE}.",
		"While {RUNNING_VERB}, the {COLOR_ADJECTIVE} {ANIMAL} dropped the {FOOD} picked up by the {PROFESSIONAL}."};

	std::default_random_engine random_engine{static_cast<uint32_t>(std::time(nullptr))};// NOLINT(cert-msc51-cpp)
	// CONSIDER: Why would I use std::time above?
	std::uniform_int_distribution<size_t> dist{0, stories.size() - 1};

	// ReSharper disable once CppLocalVariableMayBeConst
	std::string story{stories[dist(random_engine)]};

	/*******************************************************
	 * <CODE STARTS HERE>
	 * Put your code below this comment block
	 *******************************************************/

	// TODO! Replace all placeholders in the story with user input
	// Don't worry, this is not a test, I'll help you write this code.

	/*******************************************************
	 * <CODE ENDS HERE>
	 * Put your code above this comment block
	 *******************************************************/

	std::cout << "\nHere's your story: \n"
						<< story << "\n";
}

int main() {
	char choice;
	do {
		play_loony_lips();
		std::cout << "Do you want to play again? (y/n): ";
		std::cin >> choice;
		std::cin.ignore();// REVISE: What's this doing here?
		std::cout << "\n";
	} while (choice == 'y' || choice == 'Y');
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
