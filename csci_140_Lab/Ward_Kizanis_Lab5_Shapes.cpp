#include <iostream>
using namespace std;

int main ()
{
int shapeChoice = 0;
int charChoice = 0;
// Introducing user each do while is a menu
do
{
    cout << endl << endl << "Welc0me to the shape creator! choose from the menus below." << endl ;
    cout << "1. Triangle" << endl 
         << "2. Square" << endl 
         << "3. Quit" << endl << endl
         << "Enter your choice: ";
    cin >> shapeChoice;
    if (shapeChoice == 1)
    {
        do
        {
            cout << endl << "Thank you, now choose which character to use for your triangle." << endl
            << "4. *" << endl << "5. #" << endl << "6. @" << endl << "7. return to previous menu" << endl;
 
            cin >> charChoice;
            if (charChoice < 4 || charChoice > 7)
                cout << "INVALID, please choose again";
        }
        while (charChoice !=7);
    }
} 
while (shapeChoice !=3);
cout << endl<< endl << "you Quit";
return 0;
}