#include <iostream>
using namespace std;
int main()
{
    /*5. Use the while loop to write a program that accepts a number of integers until a number is input that is less than 10, then outputs the biggest number entered. */


    int big{}, number = 10;

    cout << " Write numbers (after 10) to see the biggest,  to stop, write a number less then 10 \n";
    while (number >= 10) {
        cin >> number;



        if (number > big){

            big = number;
        }
    }

    cout << " This is the bigger number \n " << big;
}
