#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include <cstring>
using namespace std;

class Vehicle
{
    std::string chasis_no;
    std::string vehicle_brand;
    double showroom_price;
    int no_seats;
    double tax;
    double insurnce_amount;

    public:
    Vehicle();
    Vehicle(std::string,std::string,double,int,double,double);
   virtual ~Vehicle();
    virtual void display();
   

};
#endif // VEHICLE_H
