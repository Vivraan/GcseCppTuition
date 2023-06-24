// HW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void hw1() {
	std::string name;
	std::string last_name;
	int age;

	std::cout << "Enter your first name: ";
	std::cin >> name;

	std::cout << std::endl
						<< "Enter your last name: ";
	std::cin >> last_name;

	std::cout << std::endl
						<< "Enter your age: ";
	std::cin >> age;

	std::cout << name + " " + last_name + " is " << name << " years old now.";
}

void hw2() {
	int width;
	int length;

	std::cout << "Enter the width of the rectangle (cm): ";
	std::cin >> width;

	std::cout << "Enter the length of the rectangle (cm): ";
	std::cin >> length;

	int area = width * length;
	int perimeter = 2 * (width + length);

	std::cout << "Area of the rectangle is (cm2): " << area << std::endl;
	std::cout << "Perimeter of the rectanlg is (cm): " << perimeter << std::endl;
}

void hw3() {
	int a;
	int b;

	std::cout << "Enter value A: ";
	std::cin >> a;

	std::cout << "Enter value b: ";
	std::cin >> b;

	std::cout << "Value A: " << a << std::endl;
	std::cout << "Value B: " << b << std::endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	std::cout << "After the values are swapped:" << std::endl;
	std::cout << "Value A: " << a << std::endl;
	std::cout << "Value B: " << b << std::endl;
}

void hw4() {
	int a, b, c, d, e;

	std::cout << "Enter value 1: ";
	std::cin >> a;

	std::cout << "Enter value 2: ";
	std::cin >> b;

	std::cout << "Enter value 3: ";
	std::cin >> c;

	std::cout << "Enter value 4: ";
	std::cin >> d;

	std::cout << "Enter value 5: ";
	std::cin >> e;

	int average = (a + b + c + d + e) / 5;
	std::cout << "The average of your numbers is: " << average << std::endl;
}

void hw5() {
	float pricePerKilo;
	float kilosToBuy;
	float tax;

	std::cout << "Enter the price per kilogram without tax: ";
	std::cin >> pricePerKilo;

	std::cout << "Enter the amount of kilograms you want to buy: ";
	std::cin >> kilosToBuy;

	std::cout << "Enter the tax rate (e.g. 20 = 20% tax): ";
	std::cin >> tax;

	float total = pricePerKilo * kilosToBuy * (100.0 + tax) / 100.0;

	std::cout << "The price for " << kilosToBuy << "kgs of tomatoes is " << total << std::endl;
}

int main() {
	hw1();
	hw2();
	hw3();
	hw4();
	hw5();
	return 0;
}