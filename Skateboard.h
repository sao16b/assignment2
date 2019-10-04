
//  Created by Sarah Osborn on 10/3/19.

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {
    
 public:
  //set Vehicle member data
  explicit Skateboard(string brand, string model);
  virtual ~Skateboard(); //deconstructor
  virtual double mileageEstimate(double time);
  virtual string toString();
};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H
