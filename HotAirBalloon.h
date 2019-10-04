
//  Created by Sarah Osborn on 10/3/19.

#ifndef DRIVINGSIMULATOR_HOTAIRBALLOON_H
#define DRIVINGSIMULATOR_HOTAIRBALLOON_H

#include "PoweredVehicle.h"

class HotAirBalloon : public PoweredVehicle {
    
private:
    int windSpeed;
    
public:
    HotAirBalloon();
    
    explicit HotAirBalloon(string brand, string model, string fuelType, int windSpeed = 0);
    
    virtual ~HotAirBalloon();
    int getWindSpeed();
    void setWindSpeed(int windSpeed);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_HOTAIRBALLOON_H
