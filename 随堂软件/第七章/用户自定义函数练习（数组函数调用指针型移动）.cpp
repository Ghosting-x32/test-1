﻿#include<iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
using namespace std;
int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	cout << cookies << " = array address, ";
	cout << sizeof(cookies) << " = sizeof cookies\n";
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << "\n";
	sum = sum_arr(cookies, 3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, 4);
	cout << "Last four eaters ate " << sum << " cookies.\n";

	system("pause");
	return 0;
}


int sum_arr(int arr[], int n)
{
	cout << arr << " = arr, ";
	cout << sizeof(arr) << " = sizeof arr\n";
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}