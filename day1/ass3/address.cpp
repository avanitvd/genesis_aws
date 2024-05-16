#include "address.h"

address::address()
{
    pincode=010;
    city="pune";
    std::cout<<"\n address default constructor called";

}

address::address(int pcode, std::string cityname)
{
    pincode=pcode;
    city=cityname;
    std::cout<<"\n para constructor is called";

}

void address::display()
{
    std::cout<<" pincode : "<<pincode<<"\ncity : "<<city;

}
