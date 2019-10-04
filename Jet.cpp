//  Created by Sarah Osborn on 9/29/19.

#include "Jet.h"
//zero argument constructor
Jet::Jet()
{
  numberOfEngines = 1;
}
//RHS four-parameter constructor
Jet::Jet(string brand, string model, string fuelType, int numberOfEngines)
{
}
//deconstructor uses PoweredVehicle virtual function
Jet::~Jet() = default;
//mutator
void Jet::setNumberOfEngines(int engines)
{
}
//accessor
int Jet::getNumberOfEngines()
{
  return 0;
}

double Jet::mileageEstimate(double time)
{
  return 0;
}

string Jet::toString()
{
  return "";
}
