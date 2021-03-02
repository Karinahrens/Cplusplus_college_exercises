#include <iostream>
using namespace std;
int main()
{
	/* 8. Write a program that lists all the numbers from 1 to 12 except the number 2 and 9. */
     
        for (int i = 1; i < 13; i++) {

          
            if (i == 2 || i == 9) {
                continue;
            }

            // print number
            cout << i << endl;
        }
    }
