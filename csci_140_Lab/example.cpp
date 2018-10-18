///////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justin Ward-Kizanis
// Class: CSCI 140
// Lab 2 program 2 (Formating)
// 	input:none
// 	procesing: none
// 	output: Table of data for A1 Lawn Service
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);

	cout << endl << endl;// Made extra space to format nicley
// heading formating
	cout << "Company:" << setw(32) << "A1 Lawn Service" << endl;
	cout << "Month:" << setw(34) << "March 2018" << endl;
	cout << endl;
//table formating
	cout << "***************************************" << endl;
	cout << setw(38) << "Total" << endl;
	cout << setw(3) << " Service" << setw(15) << "Number" << setw(15) << "Revenue" << endl;
	cout << setw(3) <<"---------------------------------------" << endl;
	cout << setw(3) << " Mow Lawn" << setw(14) << "200" << setw(15) << setprecision(2) << 4000.00 << endl;
	cout << setw(3) << " Fertilize" << setw(13) << 39 << setw(15) << setprecision(2) << 885.59 << endl;
	cout << setw(3) << " Trim Bushes" << setw(11) << 52 << setw(15) << setprecision(2) << 917.65 << endl;
	cout << setw(3) << " Remove Tree" << setw(11) << 2 << setw(15) << setprecision(2) << 199.50 << endl;
	cout << "***************************************" << endl << endl; // Made extra space to format nicley
	

return 0;
}

