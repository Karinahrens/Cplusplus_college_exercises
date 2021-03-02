#include <iostream>
using namespace std;
int main()
{
	/* 4. Using while loop write a program that accepts a number of integers, the last of which is a zero and outputs the sum of those numbers. */

	int num, total;
	total = 1;
	num = 1;
	while (num != 0)
	{
		cout << " Enter a number \n";
		cin >> num;
		total = total + num;
	}
	cout << " The total = " << total << "\n\n";

	system("pause");
	return 0;
}