#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int x;
	x = (rand() % 6) + 1;
	cout << x << endl;
	while (x == 6) {
		x = (rand() % 6) + 1;
		cout << x << endl;
	}
	return 0;
}