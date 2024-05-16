#include<iostream>
using namespace std;

class product 
{
    int prodcode;
    int price;
    char pname[20];
    public:
    product();
    product(int,int,const char *);
    void display();
    
};

