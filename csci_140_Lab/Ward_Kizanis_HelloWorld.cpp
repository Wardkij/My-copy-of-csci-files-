//////////////////////////////////////////////////////////////////////////////
//Author:Justin Ward-Kizanis
//Class: CSCS 140
//Assignment: Week 1 Lab 1
//Program description: (fill in at end)
// input: name and age
// processing: will save data values as either your name or age
// output: will confirm your name and age by outputing them
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main ()
{
// When messing with code in step h) omiting part of iostream resulted in an error with cout not being declared, likewise messing with cout itself causes the same issue, messing with return not being declared and thus woudnt compile. Finally removing the t from int main resulted in 2 errors of int not being defined and cout not being defined 

//-----------------------------------------------------------------------------------------------------------------------------
// Description: This part will prompt for your name, then the user enters in the name, then the computer will output your name 
//-----------------------------------------------------------------------------------------------------------------------------
	cout << "Hello World, What is your name?" << endl;
	string myName;
	cin >> myName;
	cout << "Your name is " << myName << endl;
//-------------------------------------------------------------------------------------------------------------------------
// Description: this section will prompt for an age and then the user can enter it and then confirm that age with the user
//------------------------------------------------------------------------------------------------------------------------
	int age;
	cout << "Now, hold on, how old are you?" << endl;
	cin >> age;
	cout << "So you are " << age << "?" << endl;
	return 0;
}
