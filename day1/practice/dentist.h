#include "doctor.h"

class Dentist : public Doctor
{
    int den_fee;
    int material_fee;

    public:
    Dentist();
    Dentist(int,std::string,int,int,int);
    ~Dentist();
    void show();
    int calTotalBill();
    void rootCanal();//child special class

};