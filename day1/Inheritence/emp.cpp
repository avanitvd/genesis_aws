#include "emp.h"

Emp::Emp():empid(101),ename("jay"),esalary(25000)
    {
       std::cout<<"\n Emp default constructor  called";
        calAllownces();

    }

    Emp::Emp(int eid, std::string enm, double esal)
    :empid(eid),ename(enm),esalary(esal)  
    {
        std::cout<<"\n Employe parameterized constructor  called ";
    }

    Emp::~Emp()
    {
        std::cout<<"\n emp destructor called ";

    }
    double Emp::calTotalSalary()
    {
        return esalary - HRA - MA - Ptax -pf;
    }

    void Emp:: display()
    {
        std::cout<<"\n employee id ="<<empid<<"\n employee name = "<<ename<<"\n employee salary = "<<esalary<<std::endl;
    }



