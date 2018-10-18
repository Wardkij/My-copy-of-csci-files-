///////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// course: csci 140 
// assignment: Lab 8 <agic Shop
// Input: The  user  should  be  given  a  passcode read from a text file outside of program, they need to solve puzzle and input a code back.
// processing: the cpde should read from a text file present a passphrase and calulate if the user entered it in corectly
// output:Once user inputs their responce the interface will either say incorrect and bring up a new pascode or welcome them in
/////////////////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
using namespace std;
ifstream inF; //input file use to read file was asked to use Global variable
string GetPass (); // outputs line from "Ward_Kizanis_PassPhrase" file as passcode" 
void MainMenu (); // outputs text for main menu
bool CheckAnswer (string, int); // output true if answer is valid, false if answer is invalid.

int main()
{
bool valid = true;
int menuChoice = 0; //User can input choice to navigate menu
int password = 0;
inF.open("Ward_Kizanis_PassPhrase.txt");
bool youPass = false; // bool that shows if you may enter magic shop based on your answer
string passcode;
do 
{
    MainMenu();
    cin >> menuChoice;
    if (menuChoice == 1)
    {
        if (!inF.fail())
        {
            passcode = GetPass();
            cout << endl << "Answer: ";
            cin >> password; 
            if (CheckAnswer (passcode, password) == true)
            {
                cout << "Now that we know you are really a wizard," << endl
                    << "we have potions and spells ranging from eternal life " << endl
                    << "to changing your milk from 2% to 3% for you to browse" << endl
                    << "Just dont tell the muggles..." << endl << endl << endl;
                valid = false;
            }
        }
        else 
        {
            cout << "You exceeded your atempts, you must not be magic..." << endl;
            valid = false;
        }
    }
    else if ((menuChoice < 1) || (menuChoice > 2))
        cout << "YOUR TRICKERY DOES NOT WORK HERE MUGGLE," << endl << endl
        << "ahem....... please type a valid responce either 1 to get a passcode or 2 to quit." << endl;
    else if (menuChoice == 2)
        valid = false;
}
while (valid);
cout << "Thanks for visiting Magic Mark's Magic shop!" << endl << endl;
inF.close();
return 0;
}
string GetPass ()
{
    string passcode;
    inF >> passcode;
    cout << "Ok, your passphrase is: " << passcode << endl;
    return passcode;
}

void MainMenu ()
{
    cout << "Welcome to Magic Mark's Magic Shop," << endl
        << "1. Please enter the correct password to the passphrase to enter." << endl
        << "2. Quit" << endl;
}

bool CheckAnswer (string passcode, int password)
{
    if (password == passcode.length())
    {
        cout << "Congratulations, welcome!" << endl << endl;
        return true;
    }
    else 
    {
        cout << "Sorry, that is the incorrect answer." << endl << endl;
        return false;
    }
}








