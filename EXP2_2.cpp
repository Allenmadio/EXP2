#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
	int b; //used gallons
	float a, c; // a=bill from last month c=total cost
	const float d = 35, e = 1.10; //d=water charge e=amount per gallon

	cout << "Enter the unpaid amount from last month: " << endl;
	cin >> a; //past month

	if (a < 0 || b < 0) {
		cout << "invalid amount please enter positive number" << endl;
		return 0;
	}

	cout << "Enter gallons consumed from the last reading: " << endl;
	cin >> b; //gallons consumed

	if (a > 0) {	//with late charge
		c = d + (e * b) + a + 20;
		cout << "Amount to be paid: P" << c;
	}
	else {
		c = d + (e * b);
		cout << "Amount to be paid: P" << c;
	}

	getch();
	return 0;
}