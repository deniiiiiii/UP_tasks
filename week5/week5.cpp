// week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int a, int b)
{
	return a + b;
}

int myAbs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

double myPow(double base, int exp)
{
	double result = 1;
	for (int i = 0; i < exp; i++)
	{
		result *= base;
	}
	return result;
}

double myMin(double a, double b)
{
	if (a < b)
		return a;
	return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	return b;
}

double min_of_three(double a, double b, double c)
{
	return myMin(a, myMin(b, c));
}

double max_of_three(double a, double b, double c)
{
	return myMax(a, myMax(b, c));
}

bool is_alph(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return true;
	return false;
}

bool is_digit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return true;
	return false;
}

bool is_even(int n)
{
	return n % 2 == 0;
}

bool is_odd(int n)
{
	return n % 2 != 0;
}

int discount_price(int price, int discount)
{
	return price - (price * discount / 100);
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	if (n < 1)
		return 0;
	return n * factorial(n - 1);
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void reverseCharArray(char arr[])
{
	int n = strlen(arr);

	for (int i = 0; i < n / 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
}

int main()
{
	// 1
	int a, b;
	std::cin >> a >> b;
	std::cout << "Calculating!" << std::endl << sum(a, b);

	// 2
	int n;
	std::cin >> n;
	std::cout << myAbs(n);

	double base;
	int exp;
	std::cin >> base >> exp;
	std::cout << myPow(base, exp);

	double a, b;
	std::cin >> a >> b;
	std::cout << "Min: " << myMin(a, b) << std::endl;
	std::cout << "Max: " << myMax(a, b) << std::endl;

	double c;
	std::cin >> c;
	std::cout << "Min of three: " << min_of_three(a, b, c) << std::endl;
	std::cout << "Max of three: " << max_of_three(a, b, c) << std::endl;

	char ch;
	std::cin >> ch;
	std::cout << "Is alphabetic? " << std::boolalpha << is_alph(ch) << std::endl;
	std::cout << "Is digit? " << std::boolalpha << is_digit(ch) << std::endl;

	int number;
	std::cin >> number;
	std::cout << "Is even? " << std::boolalpha << is_even(number) << std::endl;
	std::cout << "Is odd? " << std::boolalpha << is_odd(number) << std::endl;


	// 3
	int price, discount;
	std::cin >> price >> discount;
	std::cout << discount_price(price, discount) << " lv.";

	// 4
	int num;
	std::cin >> num;
	std::cout << factorial(num);

	// 5
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << distance(x1, y1, x2, y2);

	// 6
	char arr[100];
	std::cin >> arr;
	reverseCharArray(arr);
	std::cout << arr;

}



