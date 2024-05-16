#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>

class Doctor
{
    //data members
    int docid;
    std::string docname;
    int fee;

    int eqpFee;
    int bedFee;

//private function : helper function
    void totalCommission()
    {
        eqpFee=fee*0.02;
        bedFee=fee*0.04;
    }



    public:
    Doctor();//default constructor
    Doctor(int,std::string,int);//parameterised constructor
virtual ~Doctor();//destructor
     virtual void show();
     virtual int calTotalBill();




};

#endif // DOCTOR_H
