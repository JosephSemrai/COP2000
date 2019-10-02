// Joseph Semrai
// Description: Outputs the prices for items that are for sale from Gunter's outlet shop.
// September 1st, 2019
// COP2000-20201-1V-M-001

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int input; // Initialize the input variable to match against a case to choose a logical branch
    cout << fixed << setprecision(2); // Sets the precision of the output
    //Prints options for the types of calculations that this application can preform
    cout << "Architect Area Calculator: " << endl; 
    cout << "*****************************************" << endl;
    cout << "1.  Rectangle" << endl;
    cout << "2.  Triangle" << endl;
    cout << "3.  Circle" << endl;
    cout << "4.  Quit" << endl;
    cout << "\nPlease enter a menu item (1-4) > ";
    cin >> input;
    cout << endl;
    
    if (input == 1) { // Rectangle Branch

        double length, width, area;
        cout << "\nRectangle" << endl;
        cout << "Please enter the length > ";
        cin >> length;
        cout << "Please enter the width > ";
        cin >> width;

        // Input validation
        if (width < 0 || length < 0) {
            cout << "Invalid dimensions entered.\n";
            return 0;
        }

        // Calculate area and output the results
        area = length * width;
        cout << "\n Area = " << area << " sq/ft\n";

    } else if (input == 2) {  // Triangle Branch

        double height, base, area;
        cout << "\nTriangle" << endl;
        cout << "Please enter the height > ";
        cin >> height;
        cout << "Please enter the base > ";
        cin >> base;

        // Input validation
        if (height < 0 || base < 0) {
            cout << "Invalid dimensions entered.\n";
            return 0;
        }

        // Calculate area and output the results
        area = (height * base) / 2.0;
        cout << "\n Area = " << area << " sq/ft\n";

    } else if (input == 3) { // Circle Branch

        double radius, area;
        cout << "\nCircle" << endl;
        cout << "Please enter the radius > ";
        cin >> radius;

        // Input validation
        if (radius < 0) {
            cout << "Invalid dimensions entered.\n";
            return 0;
        }

        // Calculate area and output the results
        area = (radius * radius) * 3.14159265358979323846; // Hardcoded Pi as the cmath library is not permittted
        cout << "\n Area = " << area << " sq/ft\n";

    } else if (input == 4) { // Quit
        cout << "Thank you for using Architect Area Calculator..." << endl;
    } else {
        cout << "\n Invalid Option Choice.";
        return 1;
    }   

    return 0;
}