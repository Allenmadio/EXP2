#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int counter;
	cout << "Counting..." << endl;
	counter = 1;
	do {
		cout << counter << ", ";
		counter++;
	} while (counter < 10);
	counter = 10;
	do {
		cout << counter << ", ";
		(counter += 2);
	} while (counter <= 30);

	getch();
	return 0;
}
