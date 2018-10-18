///////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// course: csci 140 
// assignment: Lab 7 weather 
// Input: The  user  should  be  given  a  menu  of  months  1.  January,  2.  February,  etc.  13.  Quit.  The  user should  be  allowed  to  continue  picking  months  until  they  decide  to  quit
// Processing: random number generator creates a randomized temp for every day of year program finds a months days and picks the highest value of that month only
// output:Once  a  month  is  selected,  you  should  display  the  most  snowfall  and  the  day  it  occurred  on  for  that  month  then  display  the  menu  again





#include <iostream> 
#include <cstdlib>
using namespace std;
int snowfallOfEachDay (); // creates 365 random numbers representin snowfall for each snowfallOfEachDay
int OddMonths(int, int[]); // uses 31 day brackets and examines only odd months snowfall
int EvenMonths(int, int[]); // uses 30 day brackets examines eve months (except feb) snowfallOfEachDay
int SpecialFlowerFeb(int, int[]); // examines Febuary snowfall assumed to be 29 das to make full 365 day year
int main()
{
cout << "which month would you liek to view the highest snofall for?" << endl;
cout << " 1. January" << endl << "2. Febuary" << endl << "3. March" << endl;
snowfallOfEachDay();

return 0;
}

int snowfallOfEachDay ()
{
    cout << "snowfallOfEachDay is running" ;
    int day[365];
    int month;
    int maxForMonth = 0;
    srand(time(0));
    for (int i = 0; i < 365; i++)
    {
      day[i] = (rand() % 100) + 1;
    cout << day[i] << endl; 
    if (day[i] == 303)
        cout << "the following is the days from nov to dec" << endl;
    }
    cout << "which month would you like to see the snowfall for?" << endl;
 cin >> month;
 if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 9) || (month == 11))
 {
     maxForMonth = OddMonths (month, day);
     cout << "the most snowfall was on the " << (maxForMonth + 1) << "th day of " << month << "th month" << endl;
 }
else if ((month == 4) || (month == 6) || (month == 8) || (month == 10) || (month == 12))
    EvenMonths(month, day);
 else if (month == 2)
     SpecialFlowerFeb(month, day);
 
}
int OddMonths (int month, int day[365]) //since so many months have 31 days the code repeats the counting of 31 days
{        
    int oddMonth [31]; // amount of days is the same for any month that gets to this function
    int oddMax = 0; // maximum snowfall for an odd month's day
    for (int i = 0; i < 31; i++)
    {
        switch (month)
       {
// when the 31 days start it is offset to reflect the correct days and their values
        case 1: // Jan
            oddMonth[i] = day[i];
            if (oddMonth[i] > oddMonth[oddMax])
            {
                oddMax = i;
            }
            break;
        case 3: // Mar
            oddMonth[i] = day[i + 60];
            break;
        case 5: // May
            oddMonth[i] = day[i + 121];
            break;
        case 7: // July
            oddMonth[i] = day[i + 182];
            break;
        case 9: // Sept
           oddMonth[i] = day[i + 243];
           break;
        case 11: // Nov
            oddMonth[i] = day[i + 304];
            break;
        default:
            cout << "something went wrong";
            break;
       }
       cout << oddMonth[i] << endl;
       cout << "the MAX IS :";
       cout << oddMax << endl;
    }
return oddMax;
}

int EvenMonths (int month, int day[365]) //since so many months have 30 days the code repeats the counting of 30 days NOTE even months does not include Febuary
{        
    int evenmonth [30]; // amount of days is the same for any month that gets to this function
    for (int i = 0; i < 30; i++)
    {
        switch (month)
       {
// when  30 days start it is offset to reflect the correct days and their values
        case 4: // Apr
            evenmonth[i] = day[i + 91];
            break;
        case 6: // Jun
            evenmonth[i] = day[i + 152];
            break;
        case 8: // Aug
            evenmonth[i] = day[i + 213];
            break;
        case 10: // Oct
            evenmonth[i] = day[i + 274];
            break;
        case 12: // Dec
           evenmonth[i] = day[i + 335];
           break;
        default:
            cout << "something went wrong";
            break;
       }
       cout << evenmonth[i] << endl;
    }
return 0;
}

int SpecialFlowerFeb (int month, int day[365]) //this SpecialFlower cant fit into either of the other functions hence it gets its own.
{
    int Feb [29]; //feb assumed to have 29 days to make this a full 365 day year
    for (int i = 0; i < 29; i++)
    {
        Feb[i] = day[i + 31];
        cout << Feb[i] << endl;
    }
return 0;
}