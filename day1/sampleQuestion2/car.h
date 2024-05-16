#include "vehicle.h"
#include<iostream>

enum Carcategory{SUV,HATCHBACK,SEDAN};//enum of car 
class Car : public Vehicle
{
    Carcategory carcategory;
    public:

    Car();
    Car(Carcategory,std::string, std::string, double, int, double, double);
    ~Car();
    void dispaly();


};