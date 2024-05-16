#include "surgeon.h"

Surgeon::Surgeon():surgery_fee(1250),recovery_fee(1000)
{
    std::cout<<"\nsurgeon default constructor is called"<<std::endl;
}

Surgeon::Surgeon(int doc_id,std::string doc_name,int doc_f,int sur_fee, int rec_fee)
:Doctor(doc_id,doc_name,doc_f),surgery_fee(sur_fee),recovery_fee(rec_fee)
{
    std::cout<<"\nsurgeon parameterized constructor is called"<<std::endl;
}

Surgeon::~Surgeon()
{
    std::cout<<"\nsurgeon destructor is called"<<std::endl;
}

void Surgeon::show()
{
    Doctor::show();
    std::cout<<"\n surgeon fee is : "<<surgery_fee;
    std::cout<<"\n recovery fee is : "<<recovery_fee;

}

int Surgeon::calTotalBill()
{
    return Doctor::calTotalBill()+surgery_fee+recovery_fee;
}
