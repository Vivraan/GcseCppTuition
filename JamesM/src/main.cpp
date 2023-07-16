// GcseCppTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <cstdint>
#include <iostream>
#include <string>

// EXTRA CREDIT: What does constexpr mean? Why is it useful?
constexpr char not_implemented[] = "Not implemented";

// HOMEWORK 1: Write a function that takes a string and returns the number of vowels and consonants in it.
void count_vowels_and_consonants(const char input[], uint16_t& vowels, uint16_t& consonants) {
	throw std::exception(not_implemented);
	vowels = 0;
	consonants = 0;
}
// CONSIDER: What happens if you use pointers (int* a) instead of references (int& a)?
// EXTRA CREDIT: How will you return multiple values without using '&' or '*'?

// HOMEWORK 2: Let's get funky! Write a function that takes a string and returns a string with the vowels removed.
// Hint: you may want to use std::string for this.
std::string remove_vowels(const std::string& input) {
	throw std::exception(not_implemented);
	return "";
}
// CONSIDER: Use std::string::erase() to remove characters from a string.
// EXTRA CREDIT: Do this using a C-style string (char*) by allocating only 10% extra space at a time.

// CONSIDER HOMEWORK 3: Write a function which only returns characters at indices which are part of the Fibonacci sequence.
// Hint: The Fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21, ... (each number is the sum of the previous two).
// Example: "Hello World" -> "Heell r"; "Dinosaurs" -> "Diinas"; "Fortnite" -> "Foorti"; "James" -> "Jaame"
std::string fibonacci_characters(const std::string& input) {
	throw std::exception(not_implemented);
	return "";
}

// EXTRA CREDIT: Write HOMEWORK 1, 2, and 3 without using std::string OR char[] OR std::vector OR std::array OR pointers (directly).

int main() {
	const auto str = "Hello World";
	// QUESTION: What's the type of "Hello World"?

	const std::string no_vowels = remove_vowels(str);
	assert(no_vowels == "Hll Wrld");
	// QUESTION: What is assert() doing here?

	uint16_t vowels, consonants;
	// REVISE: Change the type of these variables so that the meaning of the program remains exactly the same.
	count_vowels_and_consonants(no_vowels.c_str(), vowels, consonants);
	// QUESTION: Why does this work?

	assert(vowels == 0 && consonants == no_vowels.size() - 1);

	try {
		// Finale...
		const std::string fib_chars = fibonacci_characters(no_vowels);
		const std::remove_reference_t<decltype(fib_chars[0])> answer[] = {72, 108, 108, 108, 32, 114, 0};
		// EXTRA CREDIT: What is the type of answer? Hint: it's a trick question! Notice anything peculiar about the array?
		assert(fib_chars == answer);
		std::cout << "Result: \"" << fib_chars << "\"\nAll tests passed!\n";
	} catch (const std::exception& e) {
		if (e.what() == std::string{not_implemented}) {
			std::cout << "All tests passed!\n";
		} else {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}

	// REVISE: Give me an example of an escape character that does not get printed on the console but does something unique.
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
