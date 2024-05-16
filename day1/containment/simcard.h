#include <iostream>
using namespace std;

class simcard
{
    int number;
    std::string vendor;

    public:
    simcard();

    simcard(int, std::string);

    void display();

    int getNumber() const { return number; }
    void setNumber(int number_) { number = number_; }

    std::string getVendor() const { return vendor; }
    void setVendor(const std::string &vendor_) { vendor = vendor_; }



};