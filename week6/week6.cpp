// week6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 1
	int n;
	std::cin >> n;
	int a[1000];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		std::cout << a[i] << ", ";
	}

	// 2
	int n;
	std::cin >> n;
	int a[1000];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		int original = a[i];
		int edited;

		if (original % 2 == 0) {
			edited = original - 1;
		}
		else {
			edited = original - 3;
		}


		if (original > 10) {
			edited = edited % 10;
		}
		else {
			edited = edited * 10;
		}

		a[i] = edited;
	}

	for (int i = 0; i < n; i++) {
		std::cout << a[i] << ", ";
	}

	// 3
	int n;
	std::cin >> n;
	int a[1000];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int min1 = a[0], max1 = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min1) {
			min1 = a[i];
		}
		if (a[i] > max1) {
			max1 = a[i];
		}
	}

	int min2 = 1000000000;
	for (int i = 0; i < n; i++) {
		if (a[i] > min1 && a[i] < min2) {
			min2 = a[i];
		}
	}

	int max2 = -1000000000;
	for (int i = 0; i < n; i++) {
		if (a[i] < max1 && a[i] > max2) {
			max2 = a[i];
		}
	}

	std::cout << max2 << " " << min2;

	// 4
	bool entered[10] = {false};
	int num;

	for (int i = 0; i < 5; i++) {
		std::cin >> num;

		if (num >= 0 && num <= 9) {
			entered[num] = true;
		}
	}

	std::cin >> num;
	if (num >= 0 && num <= 9 && entered[num]) {
		std::cout << "Found!";
	}
	else {
		std::cout << "Not found!";
	}

	/* s int masiv
	int a[5];

	for (int i = 0; i < 5; i++) {
		std::cin >> a[i];
	}

	int num;
	std::cin >> num;

	for (int i = 0; i < 5; i++)
	{
		if (num == a[i]) {
			std::cout << "Found!";
			return 0;
		}
	}
	std::cout << "Not Found!";*/

	// 5
	bool even[101] = {false}; // false - cheten, true - necheten br.
	int count[101] = { 0 };     // koi chisla sa vavedeni pone vednazh
	int x;

	std::cin >> x;
	while (x != 0) {
		if (x >= 1 && x <= 100) {
			even[x] = !even[x];
			count[x]++;
		}
		std::cin >> x;
	}

	for (int i = 1; i <= 100; i++) {
		if (!even[i] && count[i] > 0) {
			std::cout << i << ", ";
		}
	}

	/* s int masiv
	int count[101] = {0};
	int num;
	std::cin >> num;

	while (num != 0) {
		if (num >= 1 && num <= 100) {
			count[num]++;
		}
		std::cin >> num;
	}

	for (int i = 1; i <= 100; i++) {
		if (count[i] > 0 && count[i] % 2 == 0) {
			std::cout << i << ", ";
		}
	}*/

	// 6
	int num;
	std::cin >> num;

	bool binary[8];

	for (int i = 7; i >= 0; i--) {
		binary[i] = num % 2;
		num /= 2;
	}

	for (int i = 0; i < 8; i++) {
		std::cout << binary[i] << ", ";
	}

	// 7
	char name[100];

	std::cin >> name;
	std::cout << "Hello, " << name << "!";

	// 8
	const int MAX_SIZE = 1000;
	char text[MAX_SIZE];

	std::cin.getline(text, MAX_SIZE);

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - ('a' - 'A');
		}
	}

	std::cout << text << std::endl;

	// 9
	const int MAX_SIZE = 1000;
	char text[MAX_SIZE];

	std::cin.getline(text, MAX_SIZE); 

	int writeIndex = 0;
	for (int readIndex = 0; text[readIndex] != '\0'; readIndex++) {
		char c = text[readIndex];

		bool isVowel =
			c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';

		if (!isVowel) {
			text[writeIndex] = c;   
			writeIndex++;
		}
	}
	text[writeIndex] = '\0'; // kraj na noviq tekst

	std::cout << text << std::endl;



}

