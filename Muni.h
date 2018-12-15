#include <iostream>
using namespace std;

class MuniVehicle
{
private:
  protected: int totalFares;
  
public:
  MuniVehicle()
  { totalFares = 0; }
  int getTotalFares()
  { return totalFares; }

  virtual void paidFare()
  { totalFares += 2; }

};  

class CableCar : public MuniVehicle
{
	public:
		void paidFares()
		{ totalFares += 7; }
};

/*
Derive a class CableCar from MuniVehicle. It should override paidFare()so that each fare increases totalFares 
by 7 instead of 2. You will need to make a change to class MuniVehicle. Paste a link showing this change. *
*/
