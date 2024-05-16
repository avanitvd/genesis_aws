#include "manager.h"

Manager::Manager():number_subordinates(8),incentive_persub(7500)
{
    std::cout<<"\n manager default constructor called";
}

Manager::Manager(int eid,std::string ename,double esal,int numb_subo,double inc_persub)
:Emp(eid,ename,esal),number_subordinates(numb_subo),incentive_persub(inc_persub)
{
     std::cout<<"\n manager constructor called ";
}



Manager::~Manager()
{
    std::cout<<"\n manager destructor called";
}

void Manager::display()
{
    Emp::display();
    std::cout<<"\n number of subrdinates is : "<<number_subordinates<<"\n incentive amount per ordinate is : "<<incentive_persub<<std::endl;
    
}

void Manager::calIncentive()
{
    std::cout<<"\nincentive amount is : "<<number_subordinates*incentive_persub<<std::endl;
}

double Manager::calTotalSalary()
{
    return Emp::calTotalSalary()+(number_subordinates*incentive_persub);
}

