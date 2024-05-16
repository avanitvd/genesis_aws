#include "doctor.h"

Doctor::Doctor():docid(901),docname("dr. gupta"),fee(20000)
{
    std::cout<<"\ndefault constructor of doctor "<<std::endl;
    totalCommission();

}

Doctor::Doctor(int d_id, std::string d_name, int d_fee)
:docid(d_id),docname(d_name),fee(d_fee)
{
    std::cout<<"\nparameterized constructor is called "<<std::endl;
    totalCommission();
}

Doctor::~Doctor()
{
    std::cout<<"\ndoctor destructor is called"<<std::endl;
}

void Doctor::show()
{
    std::cout<<"\n doctor id is : "<<docid;
    std::cout<<"\n doctor name  is : "<<docname;
    std::cout<<"\n doctor fee is : "<<fee;

}

int Doctor::calTotalBill()
{
    return fee + bedFee + eqpFee;
}
