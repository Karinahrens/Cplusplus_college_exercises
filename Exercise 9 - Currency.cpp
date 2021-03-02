
#include <iostream>
using namespace std;
int main()
{
	/* 9. Currency Exercise */

   
        int amount = 0;
        char choice1, choice2, choice3 = 'y';
        while (choice3 == 'y')
        {
            cout << " Currency Exchange\n";
            cout << "Select the currencies that you want to exchange\n";
            cout << " - Enter 1 To Covert  Euro \n";
            cout << " - Enter 2 To Covert Dollar \n";
            cout << " - Enter 3 To Convert Japanese Yen \n";
            cout << " - Enter 4 To Convert Pound \n";
            cout << " - Enter 5 To Convert Swiss Franc \n";
            cout << " - Enter 6 To Convert Brazilian Real \n";
            cout << " - Enter 7 To Convert Kuwaiti Dinar \n" << endl;
            cout << "Please select the currency that you want to convert" << endl;
            cin >> choice1;
            cout << "Please enter the currency that you want to convert into" << endl;
            cin >> choice2;
            cout << "Enter Amount: ";
            cin >> amount;

            if (choice1 == '1' && choice2 == '2')
            {
                
                cout << amount << " Euro = " << amount * 1.12 << " Dollar" << endl;
            }

            if (choice1 == '1' && choice2 == '3')
            {
                 
                cout << amount << " Euro = " << amount * 120.32 << " Japanese Yen" << endl;
            }

            if (choice1 == '1' && choice2 == '4')
            {

                cout << amount << " Euro = " << amount / 0.85 << " Pound" << endl;
            }

            if (choice1 == '1' && choice2 == '5')
            {

                cout << amount << " Euro = " << amount / 1.08 << " Swiss Franc" << endl;
            }

            if (choice1 == '1' && choice2 == '6')
            {

                cout << amount << " Euro = " << amount * 4.53 << " Brazilian Real" << endl;
            }

            if (choice1 == '1' && choice2 == '7')
            {

                cout << amount << " Euro = " << amount / 0.34 << " Kuwaiti Dinar" << endl;
            }







            if (choice1 == '2' && choice2 == '1')
            {
                
                cout << amount << " Dollar = " << amount / 0.89 << " Euro" << endl;
            }

            if (choice1 == '2' && choice2 == '3')
            {
               
                cout << amount << " Dollar " << amount * 108.53 << " Japanese Yen" << endl;
            }

            if (choice1 == '2' && choice2 == '4')
            {

                cout << amount << " Dollar = " << amount / 0.76 << " Pound" << endl;

            } 
            
            if (choice1 == '2' && choice2 == '5')
            {

                cout << amount << " Dollar = " << amount / 0.97 << " Swiss Franc" << endl;

            }
            
            if (choice1 == '2' && choice2 == '6')
            {

                cout << amount << " Dollar = " << amount * 4.06 << " Brazilian Real" << endl;

            } 
            
            if (choice1 == '2' && choice2 == '7')
            {

                cout << amount << " Dollar = " << amount / 0.30 << " Kuwaiti Dinar" << endl;
            }










            if (choice1 == '3' && choice2 == '2')
            {
                
                cout << amount << " Japanese Yen " << amount / 0.0092  << " Dollar" << endl;
            }

            if (choice1 == '3' && choice2 == '1')
            {
                 
                cout << amount << " Japanese Yen = " << amount / 0.0083  << " Euro" << endl;
            }
            if (choice1 == '3' && choice2 == '4')
            {

                cout << amount << " Japanese Yen = " << amount / 0.0070 << " Pound" << endl;
            }
            if (choice1 == '3' && choice2 == '5')
            {

                cout << amount << " Japanese Yen = " << amount / 0.0089 << " Swiss Franc" << endl;
            }
            if (choice1 == '3' && choice2 == '6')
            {

                cout << amount << " Japanese Yen = " << amount / 0.037 << " Brazilian Real" << endl;
            }
            if (choice1 == '3' && choice2 == '7')
            {

                cout << amount << " Japanese Yen = " << amount / 0.0028 << " Kuwaiti Dinar" << endl;
            }




            if (choice1 == '4' && choice2 == '1')
            {

                cout << amount << " Pound = " << amount * 1.18 << " Euro " << endl;
            }

            if (choice1 == '4' && choice2 == '2')
            {

                cout << amount << " Pound = " << amount * 1.31 << " Dollar" << endl;
            }

            if (choice1 == '4' && choice2 == '3')
            {

                cout << amount << " Pound = " << amount * 142.45 << " Japanese Yen" << endl;
            }

            if (choice1 == '4' && choice2 == '5')
            {

                cout << amount << " Pound = " << amount * 1.27 << " Swiss Franc" << endl;
            }

            if (choice1 == '4' && choice2 == '6')
            {

                cout << amount << " Pound = " << amount * 5.33 << " Brazilian Real" << endl;
            }

            if (choice1 == '4' && choice2 == '7')
            {

                cout << amount << " Pound = " << amount / 0.40 << " Kuwaiti Dinar" << endl;
            }




            if (choice1 == '5' && choice2 == '1')
            {

                cout << amount << " Swiss Franc = " << amount / 0.92 << " Euro " << endl;
            }

            if (choice1 == '5' && choice2 == '2')
            {

                cout << amount << " Swiss Franc = " << amount * 1.03 << " Dollar" << endl;
            }

            if (choice1 == '5' && choice2 == '3')
            {

                cout << amount << " Swiss Franc = " << amount * 111.76 << " Japanese Yen" << endl;
            }

            if (choice1 == '5' && choice2 == '4')
            {

                cout << amount << " Swiss Franc = " << amount / 0.78 << " Pound" << endl;
            }

            if (choice1 == '5' && choice2 == '6')
            {

                cout << amount << " Swiss Franc = " << amount * 4.18 << " Brazilian Real" << endl;
            }

            if (choice1 == '5' && choice2 == '7')
            {

                cout << amount << " Swiss Franc = " << amount / 0.31 << " Kuwaiti Dinar" << endl;
            }




            if (choice1 == '6' && choice2 == '1')
            {

                cout << amount << " Brazilian Real = " << amount / 0.22 << " Euro " << endl;
            }

            if (choice1 == '6' && choice2 == '2')
            {

                cout << amount << " Brazilian Real = " << amount / 0.25 << " Dollar" << endl;
            }

            if (choice1 == '6' && choice2 == '3')
            {

                cout << amount << " Brazilian Real = " << amount  *26.54 << " Japanese Yen" << endl;
            }

            if (choice1 == '6' && choice2 == '4')
            {

                cout << amount << " Brazilian Real = " << amount / 0.19 << " Pound" << endl;
            }

            if (choice1 == '6' && choice2 == '5')
            {

                cout << amount << " Brazilian Real = " << amount / 0.24 << " Swiss Franc" << endl;
            }

            if (choice1 == '6' && choice2 == '7')
            {

                cout << amount << " Brazilian Real = " << amount / 0.075 << " Kuwaiti Dinar" << endl;
            }



            if (choice1 == '7' && choice2 == '1')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 2.96 << " Euro " << endl;
            }

            if (choice1 == '7' && choice2 == '2')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 3.30 << " Dollar" << endl;
            }

            if (choice1 == '7' && choice2 == '3')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 357.97 << " Japanese Yen" << endl;
            }

            if (choice1 == '7' && choice2 == '4')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 2.51 << " Pound" << endl;
            }

            if (choice1 == '7' && choice2 == '5')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 3.20 << " Swiss Franc" << endl;
            }

            if (choice1 == '7' && choice2 == '6')
            {

                cout << amount << " Kuwaiti Dinar = " << amount * 13.40 << " Brazilian Real" << endl;
            }




            cout << "Do you want to make another conversion? ( Y/N ) :";
            cin >> choice3;
        }
        cout << "Exiting " << endl;
    }
