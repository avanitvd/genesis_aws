#include "simcard.h"
#include <cstring>

simcard::simcard()
{
    cout<<"simcard";
    number=1234;
    vendor="vodaphone";
}

simcard::simcard(int num, std::string ven)
{
    cout<<"para simcard";
    number=num;
    vendor=ven;
}

void simcard::display()
{
    std::cout<<"number = "<<number<<"vendor = "<<vendor<<std::endl;

}
