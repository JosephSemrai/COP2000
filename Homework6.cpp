// Joseph Semrai
// Description: Multiplication tables program that allows the user to practice their multiplication tables
// November 19th, 2019
// COP2000-20201-1V-M-001

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

    // Function Prototypes
    void displayMenu();
    void gradeMe(int testTable[10][3], int ansTable[10][3]);
    bool testMe(int testTable[10][3]);
    void createTables(int testTable[10][3], int ansTable[10][3], int usersChoice);
    void displayTable(int table[10][3]);

    // Variable Declarations
    int timesTableChoice;
    int menuChoice;
    int testTable[10][3];
    int ansTable[10][3];

    // Ask the user and gather the times table to review
    cout << "What times table would you like to Review?" << endl;
    cout << "Please enter a value from 1 to 12 > ";
    cin >> timesTableChoice;

    // Preforms input validation on the times table choice
    if (timesTableChoice < 1 || timesTableChoice > 12) {
        do {
            cout << "Invalid times table choice, please select a value between 1 and 12" << endl;
            cout << "Please enter a value from 1 to 12 > ";
            cin >> timesTableChoice;
        } while (timesTableChoice < 1 || timesTableChoice > 12);
    }

    // Generate tables
    createTables(testTable, ansTable, timesTableChoice);

    // Switch statement for specific behaviors
    do {
        // Input validation where the menu will be displayed until a valid option is chosen
        do {
            displayMenu();
            cin >> menuChoice;
        } while (menuChoice < 1 || menuChoice > 4);

        cout << endl;

        switch (menuChoice) {
        case 1:
            displayTable(ansTable);
            break;
        case 2:
            if (testMe(testTable)) {
                gradeMe(testTable, ansTable);
            }
            break;
        case 3:
            do {
            cout << "Please enter a new times table value from 1 to 12 > ";
            cin >> timesTableChoice;
            } while (timesTableChoice < 1 || timesTableChoice > 12);
            createTables(testTable, ansTable, timesTableChoice);
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            cout << "Invalid menu choice. Please enter a valid menu choice. (You should not see this message as there should be validation prior to this point)." << endl;
        }
        
    } while (menuChoice != 4);
    
}

void displayMenu() {
    cout << "****************************************************************" << endl;
    cout << "                   Multiplication Tables" << endl;
    cout << "           Program Developed by: Joseph Semrai" << endl;
    cout << "\n   1. Review My Table" << endl;
    cout << "   2. Test Me" << endl;
    cout << "   3. Enter a New Multiplication Table (1-12)" << endl;
    cout << "   4. Quit" << endl;
    cout << "   Enter a Menu Item" << endl;
}

void displayTable(int table[10][3]) {
    for (int row = 0; row < 10; row++) {
        cout << table[row][0] << " X " << table[row][1] << " = " << table[row][2] << endl;
    }
}

void createTables(int testTable[10][3], int ansTable[10][3], int usersChoice) {
    // Create test table
    for (int row = 0; row < 10; row++) { 
        testTable[row][0] = row + 1;
        testTable[row][1] = usersChoice;
        testTable[row][2] = 0; // Uses 0 as the implicit type conversion of NULL to int
    }

    // Create answer table
    for (int row = 0; row < 10; row++) { 
        ansTable[row][0] = row + 1;
        ansTable[row][1] = usersChoice;
        ansTable[row][2] = (row + 1) * usersChoice;
    }
}

bool testMe(int testTable[10][3]) {
    for (int row = 0; row < 10; row++) {
        cout << "What is " << testTable[row][0] << " X " << testTable[row][1] << " = ";
        cin >> testTable[row][2];
    }

    return true;
}

void gradeMe(int testTable[10][3], int ansTable[10][3]) {
    int numCorrect = 0;

    for (int row = 0; row < 10; row++) {
        if (testTable[row][2] == ansTable[row][2]) {
            numCorrect++;
        }
    }

    if (numCorrect == 10) {
        cout << "You did an excellent job!! PERFECT SCORE!!" << endl;
    } else if (numCorrect >= 7) {
        cout << "Congratulations, you have passed!" << endl;
        cout << "You have scored: " << numCorrect * 10 << "%" << endl;
    } else {
        cout << "Unfortunately, you have failed the exam." << endl;
        cout << "You have scored: " << numCorrect * 10 << "%" << endl;
    }

    // Resets testing table
    for (int row = 0; row < 10; row++) {
        testTable[row][2] = 0;
    }
}