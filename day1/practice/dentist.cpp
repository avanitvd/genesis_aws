#include "dentist.h"

Dentist::Dentist():den_fee(1000),material_fee(500)
{
    std::cout<<"\n dentist default constructor called";
}

Dentist::Dentist(int id, std::string nm, int f, int dentistfee, int matfee)
:Doctor(id,nm,f),den_fee(dentistfee),material_fee(matfee)
{
    std::cout<<"\n dentist para constructor called";
}

Dentist::~Dentist()
{
    std::cout<<"\ndentist destructor called";
}

void Dentist::show()
{
    Doctor::show();
    std::cout<<"\n dentist fee is :  "<<den_fee;
    std::cout<<"\n material fee is :  "<<material_fee;

}

int Dentist::calTotalBill()
{
    return Doctor::calTotalBill()+den_fee+material_fee;
}

void Dentist::rootCanal()
{
    std::cout<<"root canal is performed only by dentist";
}
