#include <iostream>

using namespace std;

int main()
{
	int t, i;
	float min, max, tt, n, s = 0;
	cout << "lotfan tedad daneshjo ha ro vared konid:\n";
	cin >> t;
	tt = t;
	cout << "lotfen nomre daneshjo shomare 1 ra vared konid:\n";
	cin >> n;
	s = min = max = n;
	for (i = 2; i <= t; i++) {
		cout << "lotfan nomre daneshjo shomare " << i << " ra vared konid:\n";
		cin >> n;
		s += n;
		if (n > max) {
			max = n;
		}
		if (n < min) {
			n = min;
		}
	}
	s /= tt;
	cout << "min : " << min << "    max : " << max << "    avrage : " << s << endl;
	return 0;
}