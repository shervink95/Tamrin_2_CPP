#include<iostream>
using namespace std;

int main()
{
	int hour, minute, second, sum;
	hour = minute = second = sum = 0;
	cout << "Enter the hour : ";
	cin >> hour;
	cout << "Enter the minute : ";
	cin >> minute;
	cout << "Enter the second : ";
	cin >> second;
	sum += hour * 3600;
	sum += minute * 60;
	sum += second;
	cout << "sum is " << sum << " seconds";
}