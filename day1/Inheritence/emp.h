//header gaurd
#ifndef EMP_H//if not define : include it if it is not already included
#define EMP_H

#include <iostream>

class Emp
{
    //private data members
    int empid;
    std::string ename;
    double esalary;
    double HRA,MA,Ptax,pf;

    void calAllownces()// private function : helper functions
    {
        HRA = esalary*02;
        MA = esalary*0.03;
        Ptax = esalary*0.05;
        pf = esalary*0.02;

    }

    public:

    Emp();//default constructors
    Emp(int, std::string,double);//parameterized constructors
   virtual ~Emp();//destructor
    virtual double calTotalSalary();
   virtual void display();

};

#endif // EMP_H
