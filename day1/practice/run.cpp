#include<iostream>
#include "surgeon.h"
#include "dentist.h"
int main()
{
    // Surgeon sr;
    // sr.show();

    // Doctor*docptr=new Surgeon;
    //Surgeon*docptr=new Surgeon;//why do we do not do this 

    // docptr->show();//surgeon show is called
    // std::cout<<"\n total bill amount of surgeon is  "<<docptr->calTotalBill();//caltotalbill of surgeon is called
    // delete docptr;

   Doctor*dptr=new Dentist;
   //code for 
    // dptr->show();
    // std::cout<<"\n total bill amount of dentist is "<<dptr->calTotalBill();//calTotalBill of dentist is called
    // delete dptr;

    //typecasting 
    Dentist *dp=dynamic_cast<Dentist*>(dptr);
            dp->rootCanal();            


    return 0;
}