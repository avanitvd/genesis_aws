#include "customer.h"
#include<cstring>
customer::customer()
{
    customerId =101;
    strcpy (cname,"birju");
    cage=23;
}

customer::customer(int cid, const char *name, int csage)
{
    customerId=cid;
   strcpy(cname,name);
    cage=csage;

}

void customer::display()
{
    cout<<"customer Id is "<<customerId;
    cout<<"\ncustomer name is "<<cname;
    cout<<"\ncustomer age is "<<cage;
}


