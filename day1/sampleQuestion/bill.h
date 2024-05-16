#include <iostream>
#include "customer.h"
#include "date.h"


class Bill
{
    int billnumber;
    Customer custometinfo;
    Date billdate;
    int billamount;

    public:

    Bill();
    ~Bill();
    void accept();

    int getBillnumber() const { return billnumber; }
    void setBillnumber(int billnumber_) { billnumber = billnumber_; }

    Customer getCustometinfo() const { return custometinfo; }
    void setCustometinfo(const Customer &custometinfo_) { custometinfo = custometinfo_; }

    Date getBilldate() const { return billdate; }
    void setBilldate(const Date &billdate_) { billdate = billdate_; }

    int getBillamount() const { return billamount; }
    void setBillamount(int billamount_) { billamount = billamount_; }

     friend std::ostream & operator<<(std::ostream &os, Bill &obj);

};
