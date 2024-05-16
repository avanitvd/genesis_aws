// in this code : destructor + copy constructor + datamember as pointer rather than arr[]

#include<iostream>
#include<cstring>
using namespace std;





 class customer
 {
     char *cname;//pointer that holds only address not the value since cname is a pointer and in pointer values are not stored the adress is stored if we use char cname[20] then in this array values are stored 
     int *ipointer;//example pointer to demonstrate that it needs destructor if this is initialized in the constructor

     public:
     ~customer()//destructor :for the reason to avoid memory leakage, if you are using new keyword in constructor then create this destructor also
     {
        cout<<"\ndestructor is called";
        delete cname;//to avoid memory leakage : this deletes memeory pointed by the cname pointer
        delete ipointer;//here the example pointer's destructor is created
        
     }

     customer ()//default constructor
     {
        cname=new char[10];//this memory is allocated in heap to store customer name 
        strcpy(cname,"harry");
        ipointer=new int[10];//example pointer's initialization in the constructor memory is allocated
     }

     customer(const char*nm)//parameterized constructor
     {
        cname=new char[strlen(nm)+1];//this much amount of memory would allocated in the heap
        strcpy(cname,nm);
     }

     void dispalay(){
        cout<<"name = "<<cname;
     }

     customer (const customer  &cc2)//copy constructor , we use pass by reference , cc2 is a reference to c2
     {
        cout<<"\n";
        //this block of code is to avoid dangling pointer problem 
        cname = new char[strlen(cc2.cname)+1];
        strcpy(cname,cc2.cname);
     }
 };

 int main()
 {
    customer c1;
    c1.dispalay();
cout<<"\n";
    customer c2("rahul");
    c2.dispalay();

    customer c3(c2);//create one object as copy of constructor, here memory adress of c2 is copied in c3
    c3.dispalay();

    customer *cptr=new customer;
    delete cptr;//request to call destructor

    return 0;
 }