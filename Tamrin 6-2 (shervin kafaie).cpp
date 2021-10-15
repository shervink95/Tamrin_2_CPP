#include <iostream>

using namespace std;

int main()
{
	int a, b, c, t;
	a = b = 1;
	cout << "lotfan tedad jomalat donbale fibonatchi ra moshakhas konid:\n";
	cin >> t;
	if (t == 1) {
		cout << "1";
	}
	else if (t >= 2) {
		cout << "1 , 1";
	}
	for (int i = 3; i <= t; i++) {
		c = a + b;
		cout << " , " << c;
		a = b;
		b = c;
	}
	cout << endl;
	return 0;
}