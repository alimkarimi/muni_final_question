#include <iostream>
#include "Muni.h"
using namespace std;

/*
Create a main(), which demonstrates creating a CableCar object, 
simulating paying two fares, and printing out the resulting 
totalFares for this CableCarobject. Paste a link to you answer. *
*/

int main()
{
	CableCar cable;
	cout << "Starting fare is " << cable.getTotalFares() << endl; //starting fare

	cout << "Paying one fare:" << endl;
	cable.paidFares();

	cout << "The total fare is :" << cable.getTotalFares() << endl;

	cout << "Paying another fare:" << endl;
	cable.paidFares();

	cout << "The total fare is :" << cable.getTotalFares() << endl;

}