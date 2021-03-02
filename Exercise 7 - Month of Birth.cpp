#include <iostream>
using namespace std;
int main()
{

	/* 7. Write a number that lists the numbers from 1 to 12 and writes a special  message beside the number representing your month of birth. */
	int Birth;
	string pointer = "Nice month";
		cout << "Write the number of your month \n";
	cin >> Birth;
	for(int i =1; i <13; i++){
	if (i != Birth) {

		cout << i << endl;

}
 else { 

      cout << i << pointer << endl;
  }
 }
}
