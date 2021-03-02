#include <iostream>
using namespace std;
int main()
{
	/* 6. Write a program  to generate sucessive powers of two (starting at two) until the current value exceeds 1000. */

        int base = 2, exponent = 2, total = 0;

   
        while (total < 1000) {

           total = pow(base, exponent);
                            
            cout << total << endl;
             exponent += 1;

        }
    }

