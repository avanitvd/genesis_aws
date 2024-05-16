#include "product.h"
#include<cstring>

product::product()
{
        prodcode=1123;
        price=600;
        strcpy(pname,"mobile");
}

product::product(int pcode  , int pr, const char *name)
{
     prodcode=pcode;
        price=pr;
       strcpy(pname,name);
}

void product::display()
{
      cout<<" product code = "<<prodcode<<" price= "<<price;
            cout<<"\nproduct name="<<pname;
}
