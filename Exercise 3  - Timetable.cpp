
#include <iostream>
using namespace std;
int main()
{
	/* 3. Using the for loop write a program the accepts a number and outputs the time tables for that number.*/
	cout << "Type a number and you gonna see the timetable " << endl;

	int n = 0;
	cin >> n;

	for (int i = 1; i <= 10; i++) {

		cout << i << "x" << n << "=" << i * n << endl;
	}
	system("pause");
	return 0;
}
