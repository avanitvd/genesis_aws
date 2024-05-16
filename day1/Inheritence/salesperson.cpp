#include "salesperson.h"

Salesperson::Salesperson():salesamount(50000),commissionrate(0.05)
{
    std::cout<<"\n salespaerson default constructor called";

}

Salesperson::Salesperson(int eid,std::string ename,double esal,double saleamt, double commrate)
:Emp(eid,ename,esal),salesamount(saleamt),commissionrate(commrate)
{
    std::cout<<"\n salesperson constructor called ";
}

Salesperson::~Salesperson()
{
    std::cout<<"\n salesperson destructor called";
}

void Salesperson::display()
{
    Emp::display();
    std::cout<<"\nsales amount is :  "<<salesamount<<"\ncommision rate is : "<<commissionrate<<std::endl;
}

double Salesperson::calTotalSalary()
{
    return Emp::calTotalSalary()+salesamount+commissionrate;
}

//child special function
void Salesperson::calCommission()
{
    std::cout<<"\ncommission amount is : "<<commissionrate*salesamount<<std::endl;
}
