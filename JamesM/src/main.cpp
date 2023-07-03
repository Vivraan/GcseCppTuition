// GcseCppTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

// HOMEWORK 0: Write a function that prints the numbers from 1 to 100, but for multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz".
void fizzbuzz() {
	// TODO
}

// HOMEWORK 1: Write a function that finds the average or mean of an array of numbers.
float mean(uint32_t n, float arr[]) {
	 // TODO
	return 0.F;
}

// CONSIDER: Do HOMEWORK 1 using std::vector instead of a C-style array. What are the advantages of using std::vector?
float mean(const std::vector<float>& vec) {
	// TODO
	return 0.F;
}

// EXTRA CREDIT: Do HOMEWORK 1 using std::array instead of a C-style array, without specifying the size of the std::array.
// What are the advantages of using std::array?
// Hint: research "std::span" and "iterators"

// Here's a program that I made for you.
[[noreturn]] void student_names_database_program() {
	const std::vector student_names{"Flinn", "Sam", "Cody", "JFK"};

	while (true) {
		std::string to_find;
		std::cout << "Please enter the name of a student: ";
		std::cin >> to_find;

		// QUESTION: What's going on here?
		for (const auto& name : student_names) {// QUESTION: What is "auto" doing here?
			if (to_find == name) {
				std::cout << "Found!\n";
				goto end;
			}
		}

		std::cout << "Not found :(\n";

	end:;// QUESTION: What's this?

		// QUESTION: I used "goto", but it's almost never a good keyword to use. What could I use instead?
		// CONSIDER: Is my use of "goto" justified here? Answer in your own words.
	}
}

// HOMEWORK 2, HOMEWORK 3: Write two functions, one for finding the median of a list of numbers, and the other the mode.
// CONSIDER using std::vector. EXTRA CREDIT for using std::array.

// HOMEWORK 4: Write a function that prints the position of pieces on a chessboard.
// Use capital letters for black pieces and lowercase letters for white pieces.
// Use the following characters for the pieces: K/k = King, Q/q = Queen, R/r = Rook, B/b = Bishop, N/n = Knight, P/p = Pawn
// Write outputs like this:
// B2 B
// C2 P
// D2 n
// Here indices are written as a letter followed by a number, with the letter indicating the column (file) and the number indicating the row (rank).
// Ranks are numbered from 1 to 8, with 1 being the bottom rank and 8 being the top rank.
// Files are lettered from A to H, with A being the leftmost file and H being the rightmost file.
void print_piece_positions(char board[8][8]) {
	// TODO
}

// EXTRA CREDIT: In HOMEWORK 3, also check if the arrangement of pieces is a valid chess position.

int main() {
	float arr[] = {1, 1, 1, 1, 0.5F};
	std::cout << mean(5, arr) << '\n';
	std::cout << mean(std::vector(std::begin(arr), std::end(arr))) << '\n';

	char chessboard[8][8] = {
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', '.', 'P', 'P', 'P'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', 'p', '.', '.', '.', '.'},
		{'.', '.', '.', '.', 'P', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'p', 'p', 'p', '.', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
	print_piece_positions(chessboard);

	student_names_database_program();
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
