
//  Created by Sarah Osborn on 9/29/19.

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
    
private:
    int numberOfEngines;
    
public:
    Jet(); //zero argument constructor
    explicit Jet(string brand, string model, string fuelType, int numberOfEngines = 1); //set PoweredVehicle, Vehical member data
    
    virtual ~Jet(); //deconstructor
    
    int getNumberOfEngines(); //accessor
    void setNumberOfEngines(int numberOfEngines); //mutator
    virtual double mileageEstimate(double time);
    
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H
