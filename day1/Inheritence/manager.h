#include "emp.h"

class Manager : public Emp

{
    int number_subordinates;
    double incentive_persub;

    public:
    Manager();
    Manager(int,std::string,double,int,double);
    ~Manager();
    double calTotalSalary();
    void display();

    //
    void calIncentive();



};