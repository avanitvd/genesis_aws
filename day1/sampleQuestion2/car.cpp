#include "car.h"

Car::Car()
{
    carcategory=Carcategory ::SUV;//setting car category 
    std::cout<<"\n car default constructor "<<std::endl;
}

Car::Car(Carcategory carcat, std::string chas_no, std::string veh_brand, double price, int seats, double tax_amount, double ins_amount)
:carcategory(carcat),Vehicle(chas_no,veh_brand,price,seats,tax_amount,ins_amount)

{
    std::cout<<"\n parameterized of car is called"<<std::endl;
}

Car::~Car()
{
}

void Car::dispaly()
{
    Vehicle::display();
    std::cout<<"\n car category";
    switch (carcategory)
    {
    case Carcategory::SUV:
        cout<<"\n SUV";
        break;
    case Carcategory::HATCHBACK:
        cout<<"\n HATCHBACK";
        break;
    case Carcategory::SEDAN:
        cout<<"\n SEDAN";
        break;
    
    default:
        break;
    }
}
