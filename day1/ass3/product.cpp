#include"product.h"

product::product()
{
    std::cout<<"\n product called\n";
    productcode=1002;
    price=6789;
    pname="bag";
}

product::product(int pcd, int pr, std::string prodname, int pin,std::string ctname)
:delieveryadd(pin,ctname)//this line is called member initializer list // should be initialized by para constructor not default constructor
{
    productcode=pcd;
    price=pr;
    pname=prodname; 
}

void product::display()
{
    std::cout<<"product code is : "<<productcode;
    std::cout<<"\nproduct price is : "<<price;
    std::cout<<"\nproduct name is : "<<pname;

    delieveryadd.display();//calling the display of address class

}