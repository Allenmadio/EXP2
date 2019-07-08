#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	string p; // p = package
	float t;
	float price;
	cout << "Enter type of subscription package" << endl;
	cout << "A = Package A: P995/mo with 10hrs of access" << endl;
	cout << "B = Package B: P1495/mo with 20 hrs of access" << endl;
	cout << "C = Package C: P1995/mo with unlimited access" << endl;
	cin >> p;

	if (p == "c"); {
		price = 1995;
		cout << "Price : P" << price;
	}
	if (p == "a") {
		cout << "Additional hours are P20/hr" << endl;
		cout << "Enter number of hours: ";
		cin >> t; // t = time
		if (t <= 10) {
			price = 995;
			cout << "Price: P" << price;
		}
		if (t > 10) {
			price = 995 + (t - 10) * 20;
			cout << "Price: P" << price << endl;
			cout << "Additional hours:" << t - 10 << endl;
			cout << "Amount = " << price - 995;
		}

	}

	if (p == "b") {
		cout << "Additional hours are P10/hr" << endl;
		cout << "Enter number of hours: ";
		cin >> t;
		if (t <= 20) {
			price = 1495;
			cout << "Price : P" << price;
		}
		if (t > 20) {
			price = 1495 + (t - 20) * 10;
			cout << "Price: P" << price << endl;
			cout << "Additional hours: " << t - 20 << endl;
			cout << "Amount = " << price - 1495;

		}
	}


	_getch();
	return 0;

}