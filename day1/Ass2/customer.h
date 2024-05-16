#include<iostream>
using namespace std;

class customer
{
    int customerId;
    char cname[20];
    int cage;

    public :
    customer();//default constructor
    customer(int, const char *,int );//parameterized cunstructor 
    void display();//function
};