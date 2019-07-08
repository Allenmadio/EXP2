#include <iostream>
#include <conio.h>

using namespace std;

void fibonacci(int n)
{
	int f1 = 1, f2 = 1, i;

	if (n < 1)
		return;
	for (i = 1; i <= n; i++)
	{
		cout << f2 << ", ";
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}
int main()
{
	fibonacci(20);
	getch();
	return 0;
}