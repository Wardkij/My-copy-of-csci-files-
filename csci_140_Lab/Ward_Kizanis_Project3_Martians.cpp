/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// Course: Csci 140
// Assignment: Project 3
// input: User inputs a string of "martian" characters i.e. @,Z,E,&,B,W,S
// processing: program determains if the input is valid, ie no invaldid characters or order thereof, if it is valid converst latters to numerals
// Output: outputs the numerals that the martian language equates to
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int Intro(); 
bool CheckValid (string); // Checks if the Martian String was entered in correct formatting.
void Line(); //Seperates statements 
int ConvertToNum (string MartianNumber); //This function prints out the numerical version of your martion number
//////////////////////////////////////////////////////////////////////////////////////////////////////
int main ()
{
string MartianNumber;
do
{
    Intro();
    {
        cout << "Please enter your Martian Number for conversion: ";
        cin >> MartianNumber;
        cout << endl;
        if (CheckValid(MartianNumber))
        {
          cout << "your Martian Number was valid" << endl;
          ConvertToNum(MartianNumber);
          break;
          
        }
        else (!(CheckValid(MartianNumber)));
        cout << "Your Martian Number was Invalid" << endl;
        
            
    }
}
while (!(CheckValid(MartianNumber)));

return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Intro()
{
    cout << endl << endl << "WELCOME TO MARTIAN MADE EASY," << endl
        << "the martian to English numeral conversion program!  " << endl;
    Line();
    cout << "Rules:" << endl
        << setw(107) << "1. The symbols used are @, Z, E, &, B, W, S which equate to 1000, 500, 100, 50, 10, 5, and 1 respectively." << endl
        << setw(180) << " 2. Martian numerals are  written using the symbols above such that the value of these symbols as you read from left to right never increases. For example: EE is translated as 200." << endl;
        Line();
                
    
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckValid (string MartianNumber)
{
    int count = 0; //coutns character in martian number
    int atCount = 0; // keeps track of at symbol
    int zCount = 0; // keeps trak of Z symbol 
    int eCount = 0; // keeps track of E symbol
    int andCount = 0; // keeps track of & symbol
    int bCount = 0;  // keeps track of B symbol
    int wCount = 0; //keeps track of W symbol
    int sCount = 0; //keeps track of S symbol 
    int len = MartianNumber.length(); // stores number of digits in Martian Number 
    bool ruleBreak = false; // This is a variable that allows me to note which rules were broken without immediatley returning false
    for (int counter = 0; counter < len; counter ++) // Sytem of reading through entire usre responce 
    {
           if ((MartianNumber.at(counter) == '@') || (MartianNumber.at(counter) == 'z') || (MartianNumber.at(counter) == 'Z') || (MartianNumber.at(counter) == 'e') || (MartianNumber.at(counter) == 'E') || (MartianNumber.at(counter) == '&') || (MartianNumber.at(counter) == 'b') || (MartianNumber.at(counter) == 'B') || (MartianNumber.at(counter) == 'w') || (MartianNumber.at(counter) == 'W') || (MartianNumber.at(counter) == 's') || (MartianNumber.at(counter) == 'S')) // If on the martian characters list proceed forward, else the program will return invalid.
           {
                if (MartianNumber.at(counter) == '@')
                    atCount = atCount + 1;
                if (MartianNumber.at(counter) == 'z' || MartianNumber.at(counter) == 'Z')
                    zCount = zCount + 1;
                if (MartianNumber.at(counter) == 'e' || MartianNumber.at(counter) == 'E')
                    eCount = eCount + 1;
                if (MartianNumber.at(counter) == '&')
                    andCount = andCount + 1;
                if (MartianNumber.at(counter) == 'b' || MartianNumber.at(counter) == 'B')
                    bCount = bCount + 1;
                if (MartianNumber.at(counter) == 'w' || MartianNumber.at(counter) == 'W')
                    wCount = wCount + 1;
                if (MartianNumber.at(counter) == 's' || MartianNumber.at(counter) == 'S')
                    sCount = sCount + 1;

           }
           else 
           {
               cout << "You entered a character the program doesnt recognize" << endl;
               ruleBreak = true;
           }
    }
    // These are the limitations on how many of each character based on the counts above
                if (atCount > 4)
                {
                    cout << "You entered too many '@' symbols" << endl;
                    ruleBreak = true;
                }
                if (zCount > 1)
                {
                    cout << "You entered too many 'Z' symbols" << endl;
                    ruleBreak = true;
                }
                 if (eCount > 4)
                {
                    cout << "You entered too many 'E' symbols" << endl;
                    ruleBreak = true;
                }
                if (andCount > 1)
                {
                    cout << "You entered too many '&' symbols" << endl;
                    ruleBreak = true;
                }
                 if (bCount > 4)
                {
                    cout << "You entered too many 'B' symbols" << endl;
                    ruleBreak = true;
                }
                if (wCount > 1)
                {
                    cout << "You entered too many 'W' symbols" << endl;
                    ruleBreak = true;
                }
                if (sCount > 4)
                {
                    cout << "You entered too many 'S' symbols" << endl;
                    ruleBreak = true;
                }
    if (ruleBreak)
        return false;
    else
        return true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int ConvertToNum (string MartianNumber)
{
    int count = 0; //coutns character in martian number
    int convertedNum = 0; // the number the martian characters trun into
    int atCount = 0; // keeps track of at symbol
    int zCount = 0; // keeps trak of Z symbol 
    int eCount = 0; // keeps track of E symbol
    int andCount = 0; // keeps track of & symbol
    int bCount = 0;  // keeps track of B symbol
    int wCount = 0; //keeps track of W symbol
    int sCount = 0; //keeps track of S symbol 
    int len = MartianNumber.length(); // stores number of digits in Martian Number 
    for (int counter = 0; counter < len; counter ++) // Sytem of reading through entire usre responce 
    {
                if (MartianNumber.at(counter) == '@')
                    atCount = atCount + 1;
                if (MartianNumber.at(counter) == 'z' || MartianNumber.at(counter) == 'Z')
                    zCount = zCount + 1;
                if (MartianNumber.at(counter) == 'e' || MartianNumber.at(counter) == 'E')
                    eCount = eCount + 1;
                if (MartianNumber.at(counter) == '&')
                    andCount = andCount + 1;
                if (MartianNumber.at(counter) == 'b' || MartianNumber.at(counter) == 'B')
                    bCount = bCount + 1;
                if (MartianNumber.at(counter) == 'w' || MartianNumber.at(counter) == 'W')
                    wCount = wCount + 1;
                if (MartianNumber.at(counter) == 's' || MartianNumber.at(counter) == 'S')
                    sCount = sCount + 1;

    }
    convertedNum = (atCount * 1000) + (zCount * 500) + (eCount * 100) + (andCount * 50) + (bCount * 10) + (wCount * 5) + (sCount);
    Line();
    cout << "Your converted number is: " << convertedNum << endl << "Thanks fo using Martian Made Easy!" << endl;
    Line();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Line ()
{
cout << "________________________________________________________________" << endl;
}
