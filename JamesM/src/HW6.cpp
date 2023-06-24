// HW6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void hw1() {
	std::cout << "Size of bool: " << sizeof(bool) << " (bytes) " << std::endl;
	std::cout << "Size of char: " << sizeof(char) << " (bytes) " << std::endl;
	std::cout << "Size of unsigned short int: " << sizeof(unsigned short int) << " (bytes) " << std::endl;
	std::cout << "Size of short int: " << sizeof(short int) << " (bytes) " << std::endl;
	std::cout << "Size of unsigned long: " << sizeof(unsigned long) << " (bytes) " << std::endl;
	std::cout << "Size of long int: " << sizeof(long int) << " (bytes) " << std::endl;
	std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " (bytes) " << std::endl;
	std::cout << "size of long long: " << sizeof(long long) << " (bytes) " << std::endl;
	std::cout << "size of float: " << sizeof(float) << " (bytes) " << std::endl;
	std::cout << "Size of double: " << sizeof(double) << " (bytes) " << std::endl;
}

void hw2() {
	char c;
	std::cout << "Enter your upper case character: ";
	std::cin >> c;

	int temp = (int)c + 32;

	std::cout << "The lower case character is: " << (char)temp << std::endl;
}

void hw3() {
	std::cout << "size of bool: " << sizeof(bool) << std::endl;
	std::cout << "size of char: " << sizeof(char) << std::endl;
	std::cout << "size of int: " << sizeof(int) << std::endl;
	std::cout << "size of long: " << sizeof(long) << std::endl;
	std::cout << "size of long long: " << sizeof(long long) << std::endl;
	std::cout << "size of float: " << sizeof(float) << std::endl;
	std::cout << "size of double: " << sizeof(double) << std::endl;
}

void hw4() {
	char c;
	std::cout << "Enter your character: ";
	std::cin >> c;

	std::cout << "ASCII value: " << (int)c << std::endl;
}

void hw5() {
	unsigned short value = 65533;

	value = value + 1;
	std::cout << value << std::endl;

	value = value + 1;
	std::cout << value << std::endl;

	value = value + 1;
	std::cout << value << std::endl;

	value = value + 1;
	std::cout << value << std::endl;

	// When the max value is increased by 1
	// It goes to the lowest value possible for the type (0)

	short value2 = 32765;

	value2 = value2 + 1;
	std::cout << value2 << std::endl;

	value2 = value2 + 1;
	std::cout << value2 << std::endl;

	value2 = value2 + 1;
	std::cout << value2 << std::endl;

	value2 = value2 + 1;
	std::cout << value2 << std::endl;

	// When the max value is increased by 1
	// It goes to the lowest value possible for the type (-32768)
}

void hw6() {
	// signed short
	// signed short int
	// signed long
	// signed long long
	// signed char
	// signed int
}

void hw7() {
	// You don't always need negative values.
}

void hw8() {
	// They have different precisions. Higher precision data types require more storage.
}

int main() {
	hw1();
	std::cout << std::endl;
	hw2();
	std::cout << std::endl;
	hw3();
	std::cout << std::endl;
	hw4();
	std::cout << std::endl;
	hw5();
	std::cout << std::endl;
	hw6();
	std::cout << std::endl;
	hw7();
	std::cout << std::endl;
	hw8();
	std::cout << std::endl;

	std::cout << "Some answers are in comments in the file" << std::endl;
}