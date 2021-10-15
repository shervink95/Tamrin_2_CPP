#include <iostream>
#include <string>

using namespace std;

int main()
{
	int s = 0, x;
	string k;
	while (k != "exit") {
		cout << "add mored nazar ra vared konid:  ";
		cin >> x;
		s += x;
		cout << "agar mikhahid kharej shavid exit ra taye konid:  ";
		cin >> k;
	}
	cout << s << endl;
	return 0;
}