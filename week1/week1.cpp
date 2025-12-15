// week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 0
	std::cout << "Program for coffee!" << std::endl;

	// 1
	int number;
	std::cout << "Enter your number: ";
	std::cin >> number;

	int digit1 = number / 100;
	int digit2 = (number / 10) % 10;
	int digit3 = number % 10;
	int sum = digit1 + digit2 + digit3;

	std::cout << "first digit: " << digit1 << "\nsecound digit: " << digit2 << "\nthird digit:  " << digit3 << "\nsum: " << sum;

	// 2
	int a, b, c;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	c = a;
	a = b;
	b = c;

	std::cout << "a = " << a << "\nb = " << b;

	// 3
	int num1, num2;
	std::cin >> num1 >> num2;

	bool itIsDevisor = (num2 / num1 == 0);

	std::cout << itIsDevisor;

	// 4
	int a, b;
	std::cin >> a >> b;

	int multi = a * b;
	int lastDigit = multi % 10;
	bool itIsEven = (lastDigit / 2 == 0);

	std::cout << multi << ", " << lastDigit << " - " << itIsEven;

	// 5
	int a, b, c;
	std::cin >> a >> b >> c;

	bool canTheyTriangle = ((a + b > c) && (a + c > b) && (b + c > a));
	std::cout << std::boolalpha << canTheyTriangle;

	// 6
	int a, b, c;
	std::cin >> a >> b >> c;
	int max = a;
	int min = a;

	max = (b > max) * b + (b <= max) * max;
	min = (b < min) * b + (b >= min) * min;

	max = (c > max) * c + (c <= max) * max;
	min = (c < min) * c + (c >= min) * min;

	std::cout << max << ", " << min;

	// 7
	int x, a, b;
	std::cin >> x >> a >> b;

	bool isItBetween = ((a <= x) && (b >= x));
	std::cout << std::boolalpha << isItBetween;

	// 8 kak bez if help
	int a, b;
	std::cin >> a >> b;

	if (a == b) {
		std::cout << "Equal";
	}
	else {
		std::cout << "Not equal";
	}

	// 9
	int num;
	std::cin >> num;

	int powNum = num * num;
	std::cout << powNum;
	
}
