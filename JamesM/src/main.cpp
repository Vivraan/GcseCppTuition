// CppTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// HW:
// 1. float can hold a lot of values but may give up for really large ones. Make the program handle larger numbers.
// 2. Make the program handle additional operations. You can take your pick on what to use.

void calculator_program() {
	std::cout << "Enter inputs like a @ b where a and b are numbers, and @ is any operator among +, -, *, /\n";

	while (true) {
		std::string aStr, bStr;
		char op = 0;

		std::cout << "> ";
		std::cin >> aStr >> op >> bStr;

		float a = std::stof(aStr), b = std::stof(bStr);

		float result = 0.F;
		switch (op) {
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
		}

		std::cout << "= " << result << '\n';
	}
}

int main() {
	//calculator_program();
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
