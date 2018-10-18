#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
//Defining variables some are self explained 
double DOUBLE_COST = 650;
double SUITE_COST = 800;
double SINGLE_COST = 500;
double SPA_COST = 62.50;
int daysStay = 0; //How many days guest is staying
int numbSpa = 0; // # of spas customer wants
bool coupon = 0;
bool wantSpa; //Variable determains Y (0) or N(any other #) if user would even like a spa
double roomCharge = 0;
double spaCharge = 0;
double totalCharge = 0;
char roomChoice; // user picks rooms with this variable
string roomType; //holds room choice in more simple manner
string yesNoCoupon; //holds wheather they have coupon or not in more simple manner 
 
//This section simply introduces user to programs function
cout << "***************************************" << endl << endl
    << setw(41) << "Welcome To Carrie's Country Inn and Spa!" << endl << endl
    << setw(76) << "We charge 500 per night for a Single room, 650 per night for a double room," << endl
    << setw(78) << "and 800 per night for a suite which includes a kitchenette but only one room." << endl
    << setw(78) << "We also offer a Spa Day for 62.50 per person for each day you have a Spa Day." << endl << endl
    << "***************************************" << endl << endl;
//User can enter room type, will check for invalid data 
cout << "Which room type would you like? (Enter S for suite, D for double or I for single)" << endl;
do
{
    cin >> roomChoice;
    switch (roomChoice)
    {
        case 'S':
        case 's':
            cout << "So you want a Suite Room, ";
            roomCharge = SUITE_COST;
            roomType = "Suite";
            break;
        case 'D':
        case 'd':
            cout << "So you want a Double Room, ";
            roomCharge = DOUBLE_COST;
            roomType = "Double";
            break;
        case 'I':
        case 'i':
            cout << "So you want a Single Room, ";
            roomCharge = SINGLE_COST;
            roomType = "Single";
            break;
        default:
            cout << "INVAID ROOM TYPE, please enter in room type again (Enter S for suite, D for double or I for single)" << endl
                << "We charge 500 per night for a Single room, 650 per night for a double room," << endl
                << "and 800 per night for a suite which includes a kitchenette but only one room." << endl;
 
    }
}
while ( !( (roomChoice == 'S') || (roomChoice == 's') || (roomChoice == 'D') || (roomChoice == 'd') || (roomChoice == 'I') || (roomChoice == 'i') ) );
//inputs # of days staying and calculates room charge 
cout << "how many days will you be stayin' with us?" << endl;
cin >> daysStay;
while (daysStay <= 0) //checks valid # of days, while loop let me skip "invalid" if correct data entered 
{
    cout << "INVALID NUMBER OF DAYS, please re-enter how many days you would like to stay with us." << endl;
    cin >> daysStay;
}
roomCharge = roomCharge * daysStay; //cost of room per day * days staying
//checks if user wants spa if they do calculates spa charge
cout << "We have wonderful and relaxing Spa Days, would you like to purchase any? (type 0 for yes any other number for no)" << endl;
cin >> wantSpa;
if ( wantSpa == 0)
{
    cout << "How Many spa Days would you like?" << endl; 
    if ( (roomChoice == 'D') || (roomChoice == 'd') ) //Limits people with room type double to two spas per room/person per day
    {
 
        do 
        {
            cin >> numbSpa;
            if (numbSpa < 0)
            cout << "INVALID NUMBER OF SPA DAYS, please re-enter how many Spa Days you would like" << endl;
            else if (numbSpa > (daysStay *2 ) )
            cout << "I am sorry, we limit Spa days to one per persont daysStay = 0; //Hown per day," << endl
                << "in your case you can have a maximum of " << (daysStay *2) << " Spa Day(s)." << endl
                <<"please re-enter in how many Spa Days you would like" << endl;
        }
        while ( (numbSpa > (daysStay * 2 )) || (numbSpa < 0) );
    }
    else  //Limits people with room type double to one spa per room/person per day
    {
 
        do 
        {
        cin >> numbSpa;
            if (numbSpa < 0)
                cout << "INVALID NUMBER OF SPA DAYS, please re-enter how many Spa Days you would like" << endl;
            else if (numbSpa > daysStay)
                cout << "I am sorry, we limit Spa days to one per person per day," << endl
                << "in your case you can have a maximum of " << daysStay << " Spa Day(s)." << endl
                <<"please re-enter in how many Spa Days you would like" << endl;
        }
        while ( (numbSpa > daysStay) || (numbSpa < 0) );
    }
    //verifys that customer has coupon
    cout << "Do you have a coupon from the Newspaper? (type 0 for yes any other number for no)";
    cin >> coupon;
    if (coupon == 0)
    {
        spaCharge =  ( (numbSpa - 1) * SPA_COST);
        if (numbSpa <= 1) //In case user inputs want 0 spas in confusion, this prevents spa charge from being negitive 
            spaCharge = 0;
        yesNoCoupon = "Yes";
    }
    else
    {
        spaCharge = (numbSpa * SPA_COST);
        yesNoCoupon = "No";
    }
}
else
yesNoCoupon = "N/A";
totalCharge = (roomCharge + spaCharge);
cout << "****************************************" << endl;
cout << setw(30) << "Carrie's Country Inn and Spa" << endl;
cout << setw(33) << "Thank you for ston; //holds wheather they have coupon or not in more simple manner 
 
//This section simply introduces user to programs function
cout << "***************************************" << endl << endl
    << setw(41) << "Welcome To Carrie's Country Inn and Spa!" << endl << endl
    << setw(76) << "We charge 500 per night for a Single room, 650 per night for a double room," << endl
    << setw(78) << "and 800 per night for a suite which includes a kitchenette but only one room." << endl
    << setw(78) << "We also offer a Spa Day for 62.50 per person for each day you have a Spa Day." << endl << endl
    << "***************************************" << endl << endl;
//User can enter room type, will check for invalid data 
cout << "Which room type would you like? (Enter S for suite, D for double or I for single)" << endl;
do
{
    cin >> roomChoice;
    switch (roomChoice)
    {
        case 'S':
        case 's':
            cout << "So you want a Suite Room, ";
            roomCharge = SUITE_COST;
            roomType = "Suite";
            break;
        case 'D':
        case 'd':
            cout << "So you want a Double Room, ";
            roomCharge = DOUBLE_COST;
            roomType = "Double";
            break;
        case 'I':
        case 'i':
            cout << "So you want a Single Room, ";
            roomCharge = SINGLE_COST;
            roomType = "Single";
            break;
        default:
            cout << "INVAID ROOM TYPE, please enter in room type again (Enter S for suite, D for double or I for single)" << endl
                << aying with us!!" << endl << endl;
cout << setw(18) << "Number of Days: " << daysStay << endl;
cout << setw(13) << "Room type: " << roomType << endl;
cout << setw(17)<< "Room Charge: $ " << setprecision(2) << roomCharge << endl;
cout << setw(8)<< "Spas: " << numbSpa << endl;
cout << setw(14) << "Spa Coupon: " << yesNoCoupon << endl ;
cout << setw(16) << "Spa Charge: $ " << setprecision(2) << spaCharge << endl << endl;
cout << "****************************************" << endl;
cout << setw(16) << "Total Charge: " << totalCharge << endl << endl;
 
 
return 0;
}
