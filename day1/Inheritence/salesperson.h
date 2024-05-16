#include "emp.h"

class Salesperson : public Emp // : is for inheritence and use public mode of inheritence

{
    double salesamount, commissionrate;



    public:
    Salesperson();
    Salesperson(int,std::string,double,double,double);
    ~Salesperson();
    void display();
    double calTotalSalary();
//this fuction is only in salesperson class : child special function
    void calCommission();      
};