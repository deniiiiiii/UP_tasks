// week8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	// intro
	// 1
	int* ptr = new int;
	*ptr = 42;
	std::cout << *ptr << std::endl;
	delete ptr;

	// 2
	int* arr = new int[5];

	for (int i = 0; i < 5; ++i) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << ' ';
	}

	delete[] arr;

	// 3
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		arr[i] = i;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}

	delete[] arr;

	// 4
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;

	int* arr = new int [n];
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		std::cout << "Enter element " << i << ": ";
		std::cin >> arr[i];
		sum += arr[i];
	}

	std::cout << "Sum: " << sum << std::endl;
	delete[] arr;


	// 5
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;

	int* arr = new int[n];
	int max;

	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter element " << i << ": ";
		std::cin >> arr[i];
		if (i == 0 || arr[i] > max)
		{
			max = arr[i];
		}
	}

	std::cout << "Max: " << max << std::endl;
	delete[] arr;
	

	// dynamic_mem
	// 1
	int a, b;
	std::cout << "Enter two integers: ";
	std::cin >> a >> b;

	swap(a, b);
	std::cout << "Swapped: " << a << ' ' << b;

	// 2
	int n;
	std::cout << "Enter arr lenght, n: ";
	std::cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 2001 - 1000;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}

}

