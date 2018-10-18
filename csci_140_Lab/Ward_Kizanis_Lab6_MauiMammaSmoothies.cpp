///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justin WArd-Kizanis
// Class: csci 140
// Lab 6: Maui Mama's smoothie stand
// 	input: menu options, the flavor and size you would like, how many smoothies you would like
// 	procesing: moves between menus, calculates cost based on flavor, size and number of smoothies
// 	output: order and its cost
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void MainMenu (); //welcom screen and shows branch to flovors and size prices
void FlavorMenu (int); //flavors availble
void SizeMenu (int); // size and cost
double PlaceOrder (int); // function that actually asks for users choices and outputs order total from the calc function 
double CalcOrderTotal (char, int); //does the math size * numb of smoothies 
void start();// initiates program 

int main()
{
    start();
    return 0;
}

void start ()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
char again = 'A'; // asks user if they would like ot order more
do
{
    MainMenu ();
        cout << "Would you like to order another 'y' or 'n'?";
        do
        {
        cin >> again;
        if (((again != 'Y') && (again != 'N')) && ((again != 'n') && (again != 'y')))
                cout << "INVALID, type 'y' or 'n'" << endl;

        }
        while (((again != 'Y') && (again != 'N')) && ((again != 'n') && (again != 'y'))); 
}
while (again == 'Y' || again == 'y');
cout << "Thanks for your business!" << endl << endl;
}


void MainMenu ()
{
    
int menuChoice = 0;    
// Main menu 
do
{
    cout << endl << endl << "Welcome to Maui Mama's Smoothie Stand," << endl
        << "please Choose from the menu below: " << endl;
    cout << setw(24) << "1. See flavors offered" << endl;
    cout << setw(22) << "2. See sizes offered" << endl;
    cout << setw(19) << "3. Place an order" << endl;
    cout << "Menu Choice: ";
    cin >> menuChoice;
    cout << endl << endl;
// Shows user flavor and Size menu then brings them back to Main menu unless they choose 3 (are ready to order)
    if (menuChoice == 1)
        FlavorMenu (menuChoice);
    else if (menuChoice == 2)
        SizeMenu (menuChoice);
    else if (menuChoice == 3) 
        break; //makes it so choosing 3 doesnt output invalid
    else 
        cout << "INVALID, please choose 1,2, or 3" << endl;
}
while (menuChoice != 3); //controlls what user will pick 1 and 2 will do something 3 will move on to order anything else will say invalid
PlaceOrder (menuChoice);

}

void FlavorMenu (int menuChoice) // Just meant to show menu no return value

{ 
    cout <<"We offer the following flavor options:" << endl;
    cout << setw(11) << "1. Cherry" << endl;
    cout << setw(10) << "2. Mango" << endl;
    cout << setw(15) << "3. Blueberry " << endl;
    cout << setw(15) << "4. Pineapple " << endl;
    cout << setw(15) << "5. Strawberry" << endl << endl;
    
}

void SizeMenu (int menuChoice) // Just meant to show menu no return value

{ 
    cout <<"We offer the following size options:" << endl;
    cout << setw(41) << "1. Childs (6 oz in plastic cup) - $5.00" << endl;
    cout << setw(25) << "2. Small (4 oz) - $3.50" << endl;
    cout << setw(26) << "3. Medium (6 oz) - $5.25" << endl;
    cout << setw(25) << "4. Large (8 oz) - $6.50" << endl << endl;
    
}

double PlaceOrder (int menuChoice)

{ 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
   char flavorChoice;
   char size;
   int numbOf = 0; // number of smoothies 
   double total = 0; // cost of your order
   
    cout <<"Please enter your flavor followed by size:" << endl
         << "Please enter the first letter of the flavor you would like to order, for example: 'c' for Cherry" << endl
         <<"Enter your favor choice: ";
    do
    {
        cin >> flavorChoice;
        flavorChoice = toupper(flavorChoice); // Less typing in next if statment
        if ( !((flavorChoice == 'C') || (flavorChoice == 'M') || (flavorChoice == 'B') || (flavorChoice == 'P') || (flavorChoice == 'S')))
            cout << "INVALID, please re-enter flavor choice" << endl;
    }
    while (!((flavorChoice == 'C') || (flavorChoice == 'M') || (flavorChoice == 'B') || (flavorChoice == 'P') || (flavorChoice == 'S')));
    cout << "Great! Now what size? Again, enter the first letter of "<< endl
         << "The size you wish to order, for example: 's' for small" << endl;
    do
    {
        cout << "Enter yout size choice: ";
        cin >> size;
        size = toupper(size);
        if ( !((size == 'C') || (size == 'S') || (size == 'M') || (size == 'L')))
            cout << "INVALID, please re-enter size" << endl;
        
    }
    while ( !((size == 'C') || (size == 'S') || (size == 'M') || (size == 'L')));
    cout << endl << "Great! Now how many would you like? ";
    cin >> numbOf;
    total = CalcOrderTotal (size, numbOf);
    cout << "Thanks! that'll be $" << setprecision(2) << total << endl << endl;
}

double CalcOrderTotal (char size, int numbOf)  //does the math size * numb of smoothies 
{
    double smoothCost = 0; //cost of 1 of your smoothies 
    double totalCost = 0; //cost of all your smoothies 

    switch (size)
    {    
        case 'C':
            smoothCost = 5;
            break;
        case 'S':
            smoothCost = 3.50;
            break;
        case 'M':
            smoothCost = 5.25;
            break;
        case 'L':
            smoothCost = 6.50;
            break;
        default:
            break;
    }        
    totalCost = smoothCost * numbOf;
    return totalCost;
}