
//  Created by Sarah Osborn on 9/29/19.
/* Please note: the assignment said mileage/minute, but the time we're passing is apparently in seconds,
 and the other classes don't do any conversion from second to minute,
 so I just implemented under the assumption of mileage/second.
 */

#include "Jet.h"
//srand libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//zero argument constructor
Jet::Jet()
{
    numberOfEngines = 1;
}
//RHS four-parameter constructor
Jet::Jet(string brand, string model, string fuelType, int numberOfEngines)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}
//deconstructor uses PoweredVehicle virtual function
Jet::~Jet() = default;
//mutator
void Jet::setNumberOfEngines(int engines)
{
    numberOfEngines = engines;
}
//accessor
int Jet::getNumberOfEngines()
{
    return numberOfEngines;
}

double Jet::mileageEstimate(double time)
{
    /* srand references:
     https://stackoverflow.com/questions/12657962/how-do-i-generate-a-random-number-between-two-variables-that-i-have-stored/12658029
     http://www.cplusplus.com/reference/cstdlib/srand/
     */
    int randNum = rand()%(100-40 +1) + 40;
    double mileage = randNum * time;
    if (getFuelType() == "Rocket" && getNumberOfEngines() > 2)
    {
        //boost mileage by 5.5% per engine
        mileage += mileage * (0.055 * getNumberOfEngines());
    }
    return mileage;
}

string Jet::toString()
{
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
    std::to_string(getNumberOfEngines());
}
