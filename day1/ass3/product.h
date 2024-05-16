
#include<iostream>
#include "address.h"


class product //container class 
{
    int productcode;
    int price;
    std::string pname;

    address delieveryadd;//containd  object of address class that can call display() of address class
    
    public:

    product();
    void display();
    product(int pcd, int pr, std::string prodname, int pin,std::string ctname);

    int getProductcode() const { return productcode; }
    void setProductcode(int productcode_) { productcode = productcode_; }

    int getPrice() const { return price; }
    void setPrice(int price_) { price = price_; }

    std::string getPname() const { return pname; }
    void setPname(const std::string &pname_) { pname = pname_; }

    address getDelieveryadd() const { return delieveryadd; }
    void setDelieveryadd(const address &delieveryadd_) { delieveryadd = delieveryadd_; }

};