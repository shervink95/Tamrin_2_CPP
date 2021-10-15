#include<iostream>
using namespace std;

int main()
{
	int hour, minute, second;
	hour = minute = second = 0;
	cout << " Enter the second: ";
	cin >> second;
	hour += second / 3600;
	second = second % 3600;
	if (second>=60)
	{
		minute += second / 60;
		second = second % 60;
	}
	if (second < 60)
	{
		second = second;
	}
	cout << hour << ":" << minute << ":" << second;
}