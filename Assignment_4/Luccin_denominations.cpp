/************************************************************************************************************************

Name: Normil Luccin                                Z#:Z23635489
Course: Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 02/16/22                     Due Time: 11:59 PM
Total Points: 10
Assignment #: 4 (denominations.cpp)

Description:

This program tells what coins to give for any amount of change from 1 to 99 cents.

*************************************************************************************************************************/


#include <iostream>
using namespace std;

///*************************************************************************************
//Name: compute_Coins

//Precondition: must have the coin value, coin number and the amount left.

//Postcondition: displays the # of coins based on the change that the user inputs.

/*Description: converts the change the user inputs into quarters, dimesand pennies
               and displays the total amount of coins converted.
*/

//*************************************************************************************

void compute_Coins(int coin_value, int& num, int& amount_left);

int main()
{
    int coin_value;
    int num;
    int amount_left;
    char ip;

  //asks the user if they want to keep computing until they want to discontinue.
  do
  {

    cout << "Hello enter the amount of change you want to convert (use whole numbers).\n";
    cin >> coin_value;
    compute_Coins(coin_value, num, amount_left);
    cout << "Would you like to compute again? (type y or n) \n";
    cin >> ip;

  } while (ip == 'y' || ip != 'n');
}

void compute_Coins(int coin_value, int& num, int& amount_left)
{
    int pennies;
    int dimes;
    int quarters;
    int total;

    if (coin_value > 25)
    {
        quarters = coin_value / 25;
        amount_left = coin_value % 25;
        dimes = amount_left / 10;
        amount_left = amount_left % 10;
        pennies = amount_left / 1;
        total = quarters + dimes + pennies;

        cout << "Here is " << quarters << " quarter(s), " << dimes << " dime(s), and " << pennies << " pennies.\n";
        cout << "In total, you have " << total << " coin(s).\n";

    }

    else if (coin_value >= 10 && coin_value < 25)
    {
        dimes = coin_value / 10;
        amount_left = coin_value % 10;
        pennies = amount_left / 1;
        total = dimes + pennies;

        cout << "Here is " << dimes << " dime(s) and " << pennies << " pennies.\n";
        cout << "In total, you have " << total << " coin(s).\n";

    }

    else if (coin_value >= 0 && coin_value <= 9)
    {
        pennies = coin_value / 1;
        total = pennies;

        cout << "Here is " << pennies << " pennies\n";
        cout << "In total, you have " << total << " coin(s).\n";

    }
}
