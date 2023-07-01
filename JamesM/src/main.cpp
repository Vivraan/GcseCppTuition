// GcseCppTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// EXTRA CREDIT - 7 STARS: What does [[noreturn]] do?
// J: It tells the compiler that the function never returns.
[[noreturn]] void calculator_program() {

	// HOMEWORK 1 - 2 STARS:
	// 1. float can hold a lot of values but may give up for really large ones. Make the program handle larger numbers.
	// J: We can use the type "double".

	// 2. Make the program handle additional operations. You can take your pick on what to use.
	// J: Power of ( e.g. 2 ^ 3 = 8 )
	// J: Modulo (converts to integer type)

	std::cout << "Enter inputs like a @ b where a and b are numbers, and @ is any operator among +, -, *, /, ^, %.\n";

	while (true) {
		std::string a_str, b_str;
		char op = 0;

		std::cout << "> ";
		std::cin >> a_str >> op >> b_str;

		// REVISE - 2 STARS: What does this do?
		// Const means the value can't be changed after assignment.
		// "std::stof" means string to float so it converts the string to a float type
		// In conclusion, it converts a_str and b_str to float constants.
		const double a = std::stof(a_str), b = std::stof(b_str);

		// CONSIDER - 5 STARS: The program crashes if you enter a non-number. How can you fix this using exceptions?
		// J: I haven't learnt what an exception is. You can add validation to check if it is a non-number so the program doesn't crash.

		// EXTRA CREDIT - 7 STARS: Solve the above problem without using exceptions (a) as you would in C (b) using C++ features.

		double result;
		switch (op) {
			case '+':
				result = a + b;
				// REVISE - 1 STAR: What does this do?
				// J: It terminates execution of the switch.
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
			case '^':
				result = a;
				for (int i = 0; i < b; i++) {
					result = result * a;
				}
				break;
			case '%':
				result = int(a) % int(b);
				break;
			// QUESTION - 3 STARS: What does the following do?
			// If none of the above cases happen, it will print an error message.
			default:
				std::cerr << '\'' << op << "\': Bad operator.\n";
				continue;
		}

		std::cout << "= " << result << '\n';
	}
}

// HOMEWORK 2 - 3 STARS
// Write a function that prints the number of digits in a number. For example, 123 has 3 digits, 0 has 1 digit, and -123 has 3 digits.

int countDigits(int b) {
	std::string str = std::to_string(b);
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			count++;
		}
	}

	return count;
}

// HOMEWORK 3 - 3 STARS
// Write a function that checks if a number is a power of 2 (i.e. 2, 4, 8, 16, 32, ...). Hint: Use a loop.

void isPowerOf2(unsigned int a)
{
	unsigned int num = a;

	while (true) {
		if (a % 2 == 1) {
			std::cout << num << " is not a power of 2."
								<< "\n";
			break;
		}
		a = a / 2;
		if (a == 1) {
			std::cout << num << " is a power of 2."
								<< "\n";
			break;
		}
	}
}

// EXTRA CREDIT - 7 STARS: Solve the above problem without using a loop.
// J: I don't know how

int main() {
	std::cout << countDigits(10) << "\n";
	std::cout << countDigits(-123) << "\n";
	isPowerOf2(64);
	isPowerOf2(86);
	calculator_program();
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
