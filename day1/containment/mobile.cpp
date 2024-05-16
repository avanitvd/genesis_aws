#include "mobile.h"
#include<cstring>

mobile::mobile()
{
    std::cout<<"mobile ()\n";
    price=60000;
    model="samsung";
    color="black";

}

mobile::mobile(int pr, std::string mod, std::string col, int no, std::string vd)
:sim(no,vd)
{
    cout<<"mobile .....\n";
    price=pr;
    model=mod;
    color=col;


}

void mobile::display()
{
    cout<<"price \n"<<price<<"model \n"<<model<<" color \n"<<color<<" ";
    sim.display();

}
