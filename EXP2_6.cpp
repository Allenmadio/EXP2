#include <iostream>
#include  <conio.h>
using namespace std;

int main()
{
	int a, b, c;
	c = 0;
	cout << "Enter a number: " << endl;
	cin >> a;

	while (a > 0) {

		for (b = 0; b <= a; b++)
		{
			c = b + c;
		}
		cout << "The sum of all whole number from 1 to " << a << " is " << c << endl;
		cin >> a;
		c = 0;

		if (a <= 0)
			cout << "Thank you!";
	}

	_getch();
	return 0;

}