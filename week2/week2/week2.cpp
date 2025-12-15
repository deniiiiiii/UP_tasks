// week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 0
	double num1, num2;
	char operation;

	std::cout << "num1 = ";
	std::cin >> num1;
	std::cout << "(+, -, *, /): ";
	std::cin >> operation;
	std::cout << "mun2 = ";
	std::cin >> num2;

	switch (operation) {
	case '+':
		std::cout << "num1 + num2 = " << num1 + num2;
		break;
	case '-':
		std::cout << "num1 - num2 =  " << num1 - num2;
		break;
	case '*':
		std::cout << "num1 * num2 = " << num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			std::cout << "num1 / num2 = " << num1 / num2;
		else
			std::cout << "Error: Dividing by 0!";
		break;
	default:
		std::cout << "Error: Invalid operation!";
		break;
	}

	// 1
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;

	bool isItLeap = (year % 4 == 0 && year % 100 != 0);
	bool itIs00Leap = (year % 400 == 0);

	if (itIs00Leap || isItLeap)
		std::cout << year << " is a leap year.";
	else
		std::cout << year << " is not a leap year.";

	// 2
	char letter;
	std::cout << "Enter a character: ";
	std::cin >> letter;

	bool isItUpperLetter = (letter == toupper(letter) && (letter >= 'A' && letter <= 'Z'));
	bool isItLowerLetter = (letter == tolower(letter) && (letter >= 'a' && letter <= 'z'));

	if (isItUpperLetter) {
		std::cout << "The lower case character corresponding to " << letter << " is " << (char)tolower(letter);
	}
	else if (isItLowerLetter) {
		std::cout << "The upper case character corresponding to " << letter << " is " << (char)toupper(letter);
	}
	else {
		std::cout << letter << " is not a letter";
	}

	// 3
	int month;
	std::cout << "Month number = ";
	std::cin >> month;

	switch (month) {
	case 12:
	case 1:
	case 2:
		std::cout << "The season is winter!";
		break;
	case 3:
	case 4:
	case 5:
		std::cout << "The season is spring!";
		break;
	case 6:
	case 7:
	case 8:
		std::cout << "The season is summer!";
		break;
	case 9:
	case 10:
	case 11:
		std::cout << "The season is autumn!";
		break;
	default:
		std::cout << "Error: Invalid month number!";
		break;
	}

	// 4
	int month, year;
	std::cin >> month >> year;

	bool isItLeap = (year % 4 == 0 && year % 100 != 0);
	bool itIs00Leap = (year % 400 == 0);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << "31";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		std::cout << "30";
		break;
	case 2:
		if (isItLeap || itIs00Leap)
			std::cout << "29";
		else
			std::cout << "28";
	default:
		std::cout << "Error: Invalid month number!";
		break;
	}

	// 5
	double price;
	int usb_ports, ram;
	bool hasSSD;

	std::cout << "laptop price: ";
	std::cin >> price;
	std::cout << "USB ports: ";
	std::cin >> usb_ports;
	std::cout << "RAM (GB): ";
	std::cin >> ram;
	std::cout << "SSD (1 - yes, 0 - no): ";
	std::cin >> hasSSD;

	bool getsLaptop = ((price >= 1000 && price <= 1500 && usb_ports >= 3 && ram >= 8 && hasSSD) || ((ram < 8 || !hasSSD) && price <= 800));
	std::cout << (getsLaptop ? "Tishko gets the laptop" : "Tishko doesn't get the laptop");

	// 6
	int number;
	std::cout << "Enter a 4-digit number: ";
	std::cin >> number;

	if (number < 1000 || number > 9999) {
		std::cout << "Error: The number is not 4-digit!";
		return 1;
	}

	int digit1 = number / 1000;
	int digit2 = (number / 100) % 10;
	int digit3 = (number / 10) % 10;
	int digit4 = number % 10;
	bool isDigit1Odd = (digit1 % 2 != 0);
	bool isDigit1Greatest = ((digit1 > digit2) && (digit1 > digit3) && (digit1 > digit4));

	if (isDigit1Odd && isDigit1Greatest) {
		std::cout << "The first digit is odd and the greatest among all digits.";
	}
	else {
		std::cout << "The first digit is not odd or not the greatest among all digits.";
	}

	// bonus 0 
	int tomatoes, pepers, carrots, olives, potatoes, flavourEnchancer;
	bool hasAFriend;

	std::cout << "tomatoes: ";
	std::cin >> tomatoes;
	std::cout << "pepers: ";
	std::cin >> pepers;
	std::cout << "carrots: ";
	std::cin >> carrots;
	std::cout << "olives: ";
	std::cin >> olives;
	std::cout << "potatoes: ";
	std::cin >> potatoes;
	std::cout << "flavour enchancers in ml ";
	std::cin >> flavourEnchancer;
	std::cout << "Has a friend with him (1 - yes, 0 - no): ";
	std::cin >> hasAFriend;

	bool willTrai4oEatYummy =
		((tomatoes >= 1) && (pepers >= 2) && (carrots >= 4) && (olives >= 3) && (potatoes >= 3) && (flavourEnchancer >= 150))
		||
		((tomatoes >= 2) && (pepers >= 3) && (carrots >= 5) && (olives >= 6) && (potatoes >= 10) && (flavourEnchancer >= 200) && hasAFriend)
		||
		((tomatoes >= 5) && (pepers >= 6) && (carrots >= 12) && (olives >= 7) && (potatoes >= 12) && (flavourEnchancer >= 300) && hasAFriend);

	std::cout << (willTrai4oEatYummy ? "Traicho eats well <3" : "Traicho stays hungry :(");

}