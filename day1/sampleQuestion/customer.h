#include <iostream>
class Customer
{
    char* customername;

    public:
    Customer();
    Customer(const char*);
    ~Customer();
    Customer(const Customer &);
    void accept();
    
    char* getCustomername() const { return customername; }
    void setCustomername(char* customername_) { customername = customername_; }
   
    friend std::ostream & operator<<(std::ostream &os, Customer &obj);


};

