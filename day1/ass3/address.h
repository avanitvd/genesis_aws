#include<iostream>

class address
{
    int pincode;
    std::string city;//for storing string value we are using string class and for that we are using std ::

    public:

    address();//default constr
    

    address(int , std::string);//para constructor
    

    void display();//function

    //generating getter and setter

    int getPincode() const { return pincode; }
    void setPincode(int pincode_) { pincode = pincode_; }

    std::string getCity() const { return city; }
    void setCity(const std::string &city_) { city = city_; }

};