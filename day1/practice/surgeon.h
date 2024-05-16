#include "doctor.h"

class Surgeon : public Doctor
{
    int surgery_fee;
    int recovery_fee;

    public:
    Surgeon();
    Surgeon(int,std::string,int,int,int);
    ~Surgeon();
    void show();//method overriding
    int calTotalBill();//method overriding

};
