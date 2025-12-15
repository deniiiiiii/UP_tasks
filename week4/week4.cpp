// week4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 0
	int n;
	std::cin >> n;

	bool hasOne = false;
	if (n == 0) {
		hasOne = false;
	}

	while (n > 0) {
		if (n % 10 == 1) {
			hasOne = true;
			break;
		}
		n /= 10;
	}

	if (hasOne)
		std::cout << "YES";
	else
		std::cout << "NO";

	// 1
	int t1, t2;
	std::cin >> t1 >> t2;

	int hour1 = t1 / 100;
	int hour2 = t2 / 100;
	int minutes1 = t1 % 100;
	int minutes2 = t2 % 100;

	if (hour1 < 0 || hour1 > 23 || minutes1 < 0 || minutes1 > 59 ||
		hour2 < 0 || hour2 > 23 || minutes2 < 0 || minutes2 > 59) {
		std::cout << "Invalid";
		return 0;
	}

	int time1 = hour1 * 60 + minutes1;
	int time2 = hour2 * 60 + minutes2;

	int difference;
	if (time2 >= time1)
		difference = time2 - time1;
	else
		difference = 24 * 60 - time1 + time2;

	int diffHours = difference / 60;
	int diffMinutes = difference % 60;

	if (diffHours < 10) std::cout << 0;
	std::cout << diffHours;
	if (diffMinutes < 10) std::cout << 0;
	std::cout << diffMinutes;

	// 2
	int num1, num2;
	std::cin >> num1 >> num2;

	bool hasDivisor = false;

	for (int divisor = 1; divisor <= num1; divisor++) {
		if (num1 % divisor == 0) {
			if (num2 % (divisor * divisor) == 0) {
				hasDivisor = true;
				break;
			}
		}
	}

	if (hasDivisor)
		std::cout << "Yes";
	else
		std::cout << "No";

	// 3
	bool isOld, hasAC;
	int power, km, price;

	std::cin >> isOld >> hasAC >> power >> km >> price;

	bool buy = false;

	if (isOld) {
		if (hasAC) {
			buy = (power >= 70 && km < 115000 && price <= 6000);
		}
		else {
			buy = (power >= 60 && km < 180000 && price <= 2000);
		}
	}
	else {
		buy = (power >= 70 && power <= 90 && price <= 25000);
	}

	std::cout << buy;

	// 4
	int people;
	double price;
	std::cin >> people >> price;

	double discount = 0;

	if (people >= 5 && people <= 10)
		discount = 0.05;
	else if (people <= 20)
		discount = 0.10;
	else if (people >= 21)
		discount = 0.15;

	double total = people * price * (1 - discount);
	std::cout << total;

	// 5
	int N;
	std::cin >> N;

	int count = 0;
	int num = 1;

	while (count < N) {
		for (int i = 0; i < num && count < N; i++) {
			std::cout << num << " ";
			count++;
		}
		num++;
	}


}
