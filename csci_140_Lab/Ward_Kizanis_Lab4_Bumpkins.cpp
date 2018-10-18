///////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// Class: CSCI 140
// Lab 4 program 1 Bumpkins and doors 
// 	input: bumpkin height and unit, door height and unit
// 	procesing: converts all units to inches and compares data 
// 	output: what action a bumpkin should do at a door based on compared data
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
//Define Variables 
    double heightB = 0; //height of bumpkin before conversions will be in inches 
    double finalB = 0; // Final hieght of bumpkin after conversions 
    double heightD = 0; //height of door before conversion 
    double finalD = 0; //final hieght of door after conversions wil be in inches 
    char unit; // holds unit of measurment
    bool valid; // verifys data quickly
    string travMeth; // travel method
    
    cout << endl << endl <<"Welcome, enter you height, folllowed by a space, followed by a single " <<endl
         << "character for unit oof measurment" << endl
         << "For example: 66i" << endl
         << "For 66 inches" << endl 
         << "The meaasurments are i=inches, f=feet, y=yards, c=centimeters, and m for " << endl 
         << "meters" << endl;
        
         do //this loop converts height to inches, and checks ofr invalid units of measurements or numbers 
         {
            valid = true;
            cin >> heightB >> unit;
            while (heightB < 0)
            {
                cout << "Sorry invalid data entered, try again!" << endl;
                cin >> heightB >> unit;
            }
            switch (unit)
            {
                case 'i':
                case 'I':
                {
                    cout << "Great you are " << setprecision(2) << heightB << " inches!"<< endl;
                    finalB = heightB;
                    break;
                }
                case 'f':
                case 'F':
                {
                    cout << "Great you are " << setprecision(2) << heightB << " feet!"<< endl;
                    finalB = (heightB * 12);
                    break;
                }
                case 'y':
                case 'Y':
                {
                    cout << "Great you are " << setprecision(2) << heightB << " yards!"<< endl;
                    finalB = ((heightB * 3) * 12);
                    break;
                }
                case 'c':
                case 'C':
                {
                    cout << "Great you are "  << setprecision(2) << heightB << " centimeters!"<< endl;
                    finalB = (heightB / 2.54);
                    break;
                }
                case 'm':
                case 'M':
                {
                    cout << "Great you are " << setprecision(2) << heightB << " meters!"<< endl;
                    finalB = ((heightB * 100) / 2.54);
                    break;
                }
                default:
                    cout << "Sorry, invalid data entered, try again!" << endl;
                    valid = false;
                    break;
            }
         }
         while (!valid);
         cout << "Now enter the door hieght folllowed by its unit of measurment." << endl;
         do //This loop converts door height to inches and checks for invalid data 
         {
            valid = true;
            cin >> heightD >> unit;
            while (heightD < 0)
            {
                cout << "Sorry invalid data entered, try again!" << endl;
                cin >> heightD >> unit;
            }
            switch (unit)
            {
                case 'i':
                case 'I':
                {
                    finalD = heightD;
                    break;
                }
                case 'f':
                case 'F':
                {
                    finalD = (heightD * 12);
                    break;
                }
                case 'y':
                case 'Y':
                {
                    finalD = ((heightD * 3) * 12);
                    break;
                }
                case 'c':
                case 'C':
                {
                    finalD = (heightD / 2.54);
                    break;
                }
                case 'm':
                case 'M':
                {
                    finalD = ((heightD * 100) / 2.54);
                    break;
                }
                default:
                    cout << "Sorry, invalid data entered, try again!" << endl;
                    valid = false;
                    break;
            }
         }
         while (!valid);
        if (finalD > (finalB * 1.25)) //if structure decides wich method to use by comparing converted values
            travMeth = "USE STILTS.";
        else if (((finalB * 1.25) >= finalD) && ((finalB * 1.05) < finalD))
            travMeth = "WALK.";
        else if (((finalB * 1.05) >= finalD) && ((finalB * 0.65) < finalD))
            travMeth = "DUCK.";
        else if (((finalB * 0.65) >= finalD) && ((finalB * 0.40) < finalD))
            travMeth = "CRAWL.";
        else if (((finalB * 0.40) >= finalD) && ((finalB * 0.25) < finalD))
            travMeth = "LIMBO.";
        else if ((finalB * 0.25) >= finalD)
            travMeth = "BE BLOCKED.";
        else
            cout << "INVALID TRAVEL METHOD"; // not sure if this can even possibly show up
        //final output 
        cout << "For a door at "; 
        if (unit == 'i' || unit == 'I') //if strucuture simply repeats back what user did in the doors swtich statement
            cout << setprecision(2) << heightD << " inches";
        if (unit == 'f' || unit == 'F')
            cout << setprecision(2) << heightD << " feet";
        if (unit == 'y' || unit == 'Y')
            cout << setprecision(2) << heightD << " yards";
        if (unit == 'c' || unit == 'C')
            cout << setprecision(2) << heightD << " centimeters";
        if (unit == 'm' || unit == 'M')
            cout << setprecision(2) << heightD << " meters";
        cout << " you should " << travMeth << endl;
return 0;
}

