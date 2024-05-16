#include "vehicle.h"

enum Bikecategory {COMMUTE, SPORTS, OFFROADER};
class Bike: public Vehicle
{
   Bikecategory bikecategory;
   public:
   Bike();
   Bike(Bikecategory bikecat,std::string, std::string, double, int, double, double);
   ~Bike();
   void display();

};