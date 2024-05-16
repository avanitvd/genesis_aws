#include "bike.h"

Bike::Bike()
{
    bikecategory=Bikecategory ::COMMUTE;//setting bike category 
    std::cout<<"\n bike  default constructor "<<std::endl;
}

Bike::Bike(Bikecategory bikecat, std::string chas_no, std::string veh_brand, double price, int seats, double tax_amount, double ins_amount)
:bikecategory(bikecat),Vehicle(chas_no,veh_brand,price,seats,tax_amount,ins_amount)
{
    std::cout<<"\n parameterized of bike is called"<<std::endl;
}

Bike::~Bike()
{
}

void Bike::display()
{
    Vehicle::display();

    std::cout<<"\n bike category";
    switch (bikecategory)
    {
    case Bikecategory::COMMUTE:
        cout<<"\n COMMUTE";
        break;
    case Bikecategory::SPORTS:
        cout<<"\n SPORTS";
        break;
    case Bikecategory::OFFROADER:
        cout<<"\n OFFROADER";
        break;
    
    default:
        break;
    }
}
