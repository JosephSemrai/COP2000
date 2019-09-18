// Joseph Semrai
// Description: Outputs the prices for items that are for sale from Gunter's outlet shop.
// September 1st, 2019
// COP2000-20201-1V-M-001

#include <iostream>
using namespace std;

int main()
{
    int climbingBootsPrice = 59;
    int pulloversPrice = 10;
    int gaitersPrice = 12;
    int cleatsPrice = 14;

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
    cout << endl << "Sale Items\t\tSale Price" << endl;
    cout << "Hunter Climbing Boots   $" << climbingBootsPrice << endl;
    cout << "Fleece Pullovers\t$" << pulloversPrice << endl;
    cout << "Snow Gaiters\t\t$" << gaitersPrice << endl;
    cout << "Traction Cleats\t\t$" << cleatsPrice << endl;

    return 0;
}