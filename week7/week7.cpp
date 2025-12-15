// week7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isEmpty(char s[]) {
	return s[0] == '\0';
}

int main()
{
	// 1
	char str[100];
	std::cout << "String: ";
	std::cin.getline(str, 100);

	int length = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}

	std::cout << "Length: " << length << std::endl;
	
	// 2
	char str[100];
	char ch;
	std::cout << "String: ";
	std::cin.getline(str, 100);
	std::cout << "Character: ";
	std::cin >> ch;
	bool found = false;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch) {
			found = true;
			break;
		}
	}

	if (found) {
		std::cout << "Found! :)" << std::endl;
	}
	else {
		std::cout << "Not found! :(" << std::endl;
	}

	// 3
	std::cout << "String: ";
	char str[100];
	std::cin.getline(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - ('a' - 'A');
		}
	}
	std::cout << "Result: " << str << std::endl;

	// 4
	std::cout << "String: ";
	char s[100];
	std::cin.getline(s, 100);

	int len = 0;
	while (s[len] != '\0') len++;

	std::cout << "Reversed: ";
	for (int i = len - 1; i >= 0; i--) {
		std::cout << s[i];
	}

	// 5
	std::cout << "String: ";
	char s[200];
	std::cin.getline(s, 200);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')
			std::cout << std::endl;
		else
			std::cout << s[i];
	}

	// 6
	char s[100];
	std::cin.getline(s, 100);

	if (isEmpty(s))
		std::cout << "Empty" << std::endl;
	else
		std::cout << "NOT empty" << std::endl;

}
