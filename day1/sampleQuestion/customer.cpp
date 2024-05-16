#include "customer.h"
#include<cstring>
using namespace std;

Customer::Customer()//defaullt cust
{
    customername =new char [20];
    strcpy(customername,"avani");

    
}

Customer::Customer(const char* cname)//para cust
{
    customername=new char[20];
    strcpy(customername,cname);

}

Customer::~Customer()//destructor
{
    std::cout<<"\ndestructor of customer is called";
}

Customer::Customer(const Customer &cbj)//copy const
{
    customername=new char[20];
    strcpy(customername,cbj.customername);
    

}

void Customer::accept()//function
{
    std::cout<<"\n enter the customer name : ";
    customername=new char[20];
    std::cin>>customername;

    
}

std::ostream & operator<<(std::ostream &os, Customer &obj)
{
    os <<"\n customer name is : "<< obj.customername << endl;
    return os;
}