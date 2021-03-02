
#include <iostream>
using namespace std;
int main()
{

    /* 2.Using the for loop write a program that accepts ten numbers and outputs the average of their sum. */

    int  start, tenumbers = 10, total{};
    double average;

    cout << "Please enter " << tenumbers << " numbers\n";

    for (int i = 0; i < tenumbers; i++) {

        cin >> start;


        total += start;

    }

    average = total / tenumbers;

    cout << "The  average is  \n " << average; 

    system("pause");
    return 0;
}