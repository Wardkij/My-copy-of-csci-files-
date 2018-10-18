///////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// Class: CSCI 140
// Lab 2 program 3
// 	input: # of stamps, zip code
// 	procesing: will calculate price per ounce and or book of stamps
// 	output: zip code and total price
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main ()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
//defining  and Variables
    const string company = " Mail Time! (a Contracted USPS Station)"; // Name of company
    const char zipLimit = '5'; // Limits zip code to 5 characters
    const int numberOfStamps = 20; // Defines # of forever stamps in a book
    const float costFirstOunce = 0.95; 
    const float costAddOunce = 0.22; // Defines additional ounce cost 
    const float costBook = 9.80; // Cost of 20 forever stamps
    string zipCode;
    int numberOfOunces = 0;
    int numberOfBooks = 0;
    float postCharge =0;
    float stampCharge = 0;
    float totalBill = 0; //total bill excludes tax
    int choice = 0;
    

//This section is to introduce user to program
        cout << endl << endl;
	cout << "Welcome to " << company << endl;
        cout << "************************************************************************" << endl << endl;
        cout << "We mail first class large flat envelopes aswell as offer forever stamps" << endl;
        cout << "The first ounce will cost you $0.95" << endl << "Additional ounces cost $0.22 for each ounce" << endl;
        cout << "A book of 20 forever stamps costs $9.80" << endl << endl;
        
    do
    {
//This section sets up cost 
        cout << "Please enter in how many ounces your large flat envelope is:";
        cin >> numberOfOunces;
        postCharge = costFirstOunce + ((numberOfOunces-1) * costAddOunce);
        cout << endl << numberOfOunces << " ounces will cost: $" << postCharge << endl;
        cout << endl << "Please enter in How many forever stamp books you would like:";
        cin >> numberOfBooks;
        stampCharge = numberOfBooks * costBook;
        cout << endl << numberOfBooks << " Will cost: $" << stampCharge << endl;
        totalBill = stampCharge + postCharge;
        cout << "The total before tax is $" << totalBill << endl;
        cout << "Is this total okay? (type any number but 0 if yes)" << endl;
        cin >> choice;
    }
    while (choice == 0);
        
    cout << "Thank you so much for your puchase with " << company << endl << endl<< " What Zip code are we mailing this too?";
 cout << " you can only have " << zipLimit << "characters in the zip code, enter it in" << endl;
 cin >> zipCode;
        
        cout << "We are sending your package to the zip code: " << zipCode;
       

            

return 0;
}
