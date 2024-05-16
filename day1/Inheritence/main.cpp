#include<iostream>
#include "salesperson.h"
#include "manager.h"
#include <typeinfo>

int main()
{
    // Salesperson s1;
    // s1.display();
    // std::cout<<"\n total salary = "<<s1.calTotalSalary();

    //code to uderstand virtual keyword in emp base class

    // Emp *ep=new Salesperson(104,"shetty",35000,5000,0.04);//object created in heap memory
    // ep->display();
    // std::cout<<"\n total salary = "<<ep->calTotalSalary();
    // delete ep;//this is for calling destructor its is mandate to use this to free memory 

    // Emp *eptr=new Manager(201,"kiran",60000,4,10000);
    // eptr->display();
    // std::cout<<"\n total salary of manager is "<<eptr->calTotalSalary();
    // delete eptr;
    
//typecasting of derived class pointer to base class pointer
//code for salesperson class
    // Emp *ep=new Salesperson(104,"shetty",35000,5000,0.04);
    // Salesperson *sp= dynamic_cast<Salesperson*>(ep);
    // sp->calCommission();
    // delete ep;

//code for manager class
    Emp *eptr=new Manager(201,"kiran",60000,4,10000);
    Manager *mn=dynamic_cast<Manager*>(eptr);
    mn->calIncentive();
    delete eptr;


//code for salesperson and manager pointer typecasting
    // Emp *etr=new Manager(105,"ram",50000,5,5);
    // if (typeid(*etr)==typeid(Salesperson))
    //  {
    //     Salesperson *sptr=dynamic_cast<Salesperson*>(etr); //for safe down casting we use dynamic_cast
    //     /* notes:
    //     dynamic_cast
    //     returns zero if casting is failed
    //     returns address on successful type cast
    //     */
    //    if(sptr==0)
    //     {
    //         std::cout<<"\n type casting failed";
    //     }
    //     else 
    //     {
    //         sptr->calCommission();
    //     }
    // }

    // else{
    //     std::cout<<"\n not a sales person "<<std::endl;
    // }

//code for 
//if casting fails in case of reference then it goes for exception

    // note : this is object in code below of salesperson so it won't fail
    
    // Salesperson sp1(102,"rahul",90000,3000,0.05);
    // Emp &e=sp1;

    // Manager mg1;
    // Emp &e=mg1;

    // try
    // {
    //     Salesperson &spref=dynamic_cast<Salesperson&>(e);
    // spref.calCommission();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout<< e.what() << '\n';
    // }
    
        
}