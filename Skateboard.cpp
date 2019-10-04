
//  Created by Sarah Osborn on 10/3/19.
/* Please note: the assignment said mileage/minute, but the time we're passing is apparently in seconds,
 and the other classes don't do any conversion from second to minute,
 so I just implemented under the assumption of mileage/second.
 */

#include "Skateboard.h"
//srand libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//two-argument constructor
Skateboard::Skateboard(string brand, string model)
{
    setBrand(brand);
    setModel(model);
}

//deconstructor
Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
    /* srand reference
     https://stackoverflow.com/questions/19652657/c-create-a-random-decimal-between-0-1-and-10
     */
    double randMileage = 0;
    double randNum = ((double)rand()) / ((double)RAND_MAX) * 0.5 + 0.1;
    if (time > 25 && time < 250)
        randMileage = ((double)rand()) / ((double)RAND_MAX) * (time / 3) + 1;
    //per hint
    return floor(randNum + randMileage);
}

string Skateboard::toString()
{
    return ("-> Skateboard\n" + Vehicle::toString());
}
