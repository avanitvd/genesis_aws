
#include "customer.h"
int main()
{
    cout<<"\nobject for default constructor";
    customer c1;
    c1.display();

    cout<<"\nobject for parameterized constructor";
    customer c2(102,"ramu",45);
    c2.display();

    cout<<"\nobject for para constructor on heap memory";
    customer *ctr=new customer(103,"shyam",32);
    ctr->display();

    cout<<"array of 3 objects and displaying";
    customer carr[3]={{001,"aaa",12},{002,"bbb",13},{003,"ccc",14}};
    for (int i = 0; i < 3; i++)
    {
        carr[i].display();
    }
    delete ctr;


    
}