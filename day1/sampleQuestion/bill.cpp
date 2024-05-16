#include "bill.h"

Bill::Bill()
{
}

Bill::~Bill()
{
}

void Bill::accept()
{
    std::cout<<"\n enter the bill number : ";
    std::cin>>billnumber;
    std::cout<<"\n enter the bill amount : ";
    std::cin>>billamount;
    std::cout<<"\n enter the cust info : ";
    custometinfo.accept();
    std::cout<<"\n enter the date information : ";
    billdate.accept();


}

std::ostream &operator<<(std::ostream &os, Bill &obj)
{
    os<<"\nbill number is : "<<obj.billnumber;
    os<<"\nbill amount is : "<<obj.billamount;
    os<<"\ncustomer info is : "<<obj.custometinfo;
    os<<"\ndats is : "<<obj.billdate;
    
    return os;

}
