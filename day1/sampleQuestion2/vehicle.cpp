#include "vehicle.h"

Vehicle::Vehicle()
{
    chasis_no = "A101";
    vehicle_brand = "tata";
    showroom_price = 24000.0;
    no_seats = 1;
    tax = 100;
    insurnce_amount = 200;
}

Vehicle::Vehicle(std::string chas_no, std::string veh_brand, double price, int seats, double tax_amount, double ins_amount)
    : chasis_no(chas_no), vehicle_brand(veh_brand), showroom_price(price), no_seats(seats), tax(tax_amount), insurnce_amount(ins_amount)
{
    cout << "\nparameterized constructor called";
}

Vehicle::~Vehicle()
{
    cout << "\n vehicle destructor is called";
}

void Vehicle::display()
{
    std::cout << "\n chasis no is : " << chasis_no << std::endl;
    std::cout << "\n vehicle brand is : " << vehicle_brand << std::endl;
    std::cout << "\n showroom price is : " << showroom_price << std::endl;
    std::cout << "\n no of seats is : " << no_seats << std::endl;
    std::cout << "\n tax is : " << tax << std::endl;
    std::cout << "\n insurance is : " << insurnce_amount << std::endl;
}
