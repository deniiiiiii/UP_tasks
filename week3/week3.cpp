// week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // 0
	int n;	
	std::cin >> n;
	unsigned long factorial = 1;
	for (int i = 1; i <= n; ++i) {
		factorial *= i;
	}
	std::cout << n << "! = " << factorial << std::endl;

	// 1 
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		int ai = i * i + 3 * i;
		std::cout << ai << " ";
	}

	// 2
	int n;
	std::cin >> n;
	int maxNeg = 0;
	for (int i = 0; i < n; ++i) {
		int number;
		std::cin >> number;
		if (number < 0) {
			if (maxNeg == 0 || number > maxNeg) {
				maxNeg = number;
			}
		}
	}
	std::cout << maxNeg << std::endl;
	
	// 4 
	int sum = 0;
	int number;
	std::cin >> number;
	while (number != 0) {
		sum += number;
		std::cin >> number;	
	}
	std::cout << sum << std::endl;

	// 5
	int n;
	std::cin >> n;
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	std::cout << sum << std::endl;

	// 6 
    int a, n;
	std::cin >> a >> n;
	int result = 1;
	for (int i = 0; i < n; ++i) {
		result *= a;
	}
	std::cout << result << std::endl;

	// 8 
	for (char letter = 'A'; letter <= 'Z'; ++letter) {
		if (letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U') {
			std::cout << letter << " ";
		}
	}

	// 9 
	int n;
	std::cin >> n;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (col < row) {
				std::cout << "-";
			}
			else if (col > row) {
				std::cout << "+";
			}
			else {
				std::cout << "0";
			}
		}
		std::cout << std::endl;
	}
}