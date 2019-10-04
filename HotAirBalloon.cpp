
//  Created by Sarah Osborn on 10/3/19.
/* Please note: the assignment said mileage/minute, but the time we're passing is apparently in seconds,
 and the other classes don't do any conversion from second to minute,
 so I just implemented under the assumption of mileage/second.
 */

#include "HotAirBalloon.h"
//srand libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

HotAirBalloon::HotAirBalloon()
{
    windSpeed = 0;
}

HotAirBalloon::HotAirBalloon(string brand, string model, string fuelType, int windSpeed)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setWindSpeed(windSpeed);
}

HotAirBalloon::~HotAirBalloon() = default;

int HotAirBalloon::getWindSpeed()
{
    return windSpeed;
}

void HotAirBalloon::setWindSpeed(int ws)
{
    if (ws < 0) windSpeed = 0;
    else windSpeed = ws;
}

double HotAirBalloon::mileageEstimate(double time)
{
    double mileage = 0.5 * time;
    if (getWindSpeed() != 0)
    {
        //mileage increases by fraction of windSpeed
        mileage += mileage * (0.0625 * getWindSpeed());
    }
    //oh no! sporadic gusts of wind!
    mileage += rand()%5;
    return mileage;
}

string HotAirBalloon::toString()
{
    return "-> Hot Air Balloon\n" + PoweredVehicle::toString() + "\n\tWind Speed: " +
    std::to_string(getWindSpeed());
}
