// Joseph Semrai
// Description: Outputs the prices, calculated price for an inputed quantity of given items, and the order total for Gunter's Mountain Shop
// September 17th, 2019
// COP2000-20201-1V-M-001

// **********************************************
// **********        PSEUDOCODE        **********
// **********************************************
/*
A.	Define variables CLIMBING_BOOTS_PRICE, PULLOVERS_PRICE, GAITERS_PRICE, and CLEATS_PRICE as doubles and assign values 59.99, 10.50, 12.25, 14.99 respectively.
B.	Define variables bootsQuantity, pulloversQuantity, gaitersQuantity, and cleatsQuantity as integerswithout assigning values.
C.	Define variables for total
D.	Output logo
E.	Output welcome text
F.	Output border
G.	Request and store the quantity of each category as shown in line 14 of the softcopy.
    1.	Display prompt for category Hunter Climbing Boots
    2.	Read keyboard entry and store it in bootsQuantity
    3.	Display prompt for category Fleece Pullovers
    4.	Read keyboard entry and store it in pulloversQuantity
    5.	Display prompt for category Snow Gaiters
    6.	Read keyboard entry and store it in gaitersQuantity
    7.	Display prompt for category Traction Cleats
    8.	Read keyboard entry and store it in cleatsQuantity
H.	Calculate and store preliminary and final results.
    1.	Assign bootsTotal as the result of CLIMBING_BOOTS_PRICE * bootsQuantity
    2.	Assign pulloversTotal as the result of PULLOVERS_PRICE * pulloversQuantity
    3.	Assign gaitersTotal as the result of GAITERS_PRICE * gaitersQuantity
    4.	Assign cleatsTotal as the result of CLEATS_PRICE * cleatsQuantity
    5.	Assign transactionTotal with the value of the sum of bootsTotal, pulloversTotal, gaitersTotal, and cleatsTotal (calculate the overall sales total)
I.	Display the results to the screen as shown in line 18 of the softcopy.
    1.	Output border
    2.	Output blank line
    3.	Output “Sale Items              Sale Price”
    4.	Output the results including the category name, price, and total for the particular sale item for each item category rounded to two decimal places.
    5.	Output border
    6.	Output the total transaction cost. 
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double CLIMBING_BOOTS_PRICE = 59.99;
    const double PULLOVERS_PRICE = 10.50;
    const double GAITERS_PRICE = 12.25;
    const double CLEATS_PRICE = 14.99;

    int bootsQuantity, pulloversQuantity, gaitersQuantity, cleatsQuantity;
    double bootsTotal, pulloversTotal, gaitersTotal, cleatsTotal, transactionTotal;

    cout << "*****************************************" << endl;
    cout << "**        //\\                          **" << endl;
    cout << "**       //  \\  //\\                    **" << endl;
    cout << "**      //    \\//  \\      //\\          **" << endl;
    cout << "**     //           \\    //  \\         **" << endl;
    cout << "**    //             \\  //    \\        **" << endl;
    cout << "**   //               \\//      \\       **" << endl;
    cout << "**  //                          \\      **" << endl;
    cout << "*****************************************" << endl;
    cout << "** Welcome to Gunter's Mountain Shop   **" << endl;
    cout << "*****************************************" << endl;

    cout << "\nHow many Hunter Climbing Boots would you like to purchase? >> ";
    cin >> bootsQuantity;
    cout << "How many Fleece Pullovers would you like to purchase? >> ";
    cin >> pulloversQuantity;
    cout << "How many Snow Gaiters would you like to purchase? >> ";
    cin >> gaitersQuantity;
    cout << "How many Traction Cleats would you like to purchase? >> ";
    cin >> cleatsQuantity;

    bootsTotal = CLIMBING_BOOTS_PRICE * bootsQuantity;
    pulloversTotal = PULLOVERS_PRICE * pulloversQuantity;
    gaitersTotal = GAITERS_PRICE * gaitersQuantity;
    cleatsTotal = CLEATS_PRICE * cleatsQuantity;
    transactionTotal = bootsTotal + pulloversTotal + gaitersTotal + cleatsTotal;

    cout << setprecision(2) << fixed; // Sets precision to two decimal places in preparation for price display
    cout << "*********************************************************" << endl;
    cout << endl << "Sale Items              Sale Price" << endl;
    cout << "Hunter Climbing Boots   $" << CLIMBING_BOOTS_PRICE << "         Total = $" << bootsTotal << endl;
    cout << "Fleece Pullovers        $" << PULLOVERS_PRICE << "         Total = $" << pulloversTotal << endl;
    cout << "Snow Gaiters            $" << GAITERS_PRICE << "         Total = $" << gaitersTotal << endl;
    cout << "Traction Cleats         $" << CLEATS_PRICE << "         Total = $" << cleatsTotal << endl;
    cout << "*********************************************************" << endl;
    cout << endl << "                                       Total:  $" << transactionTotal;

    return 0;
}