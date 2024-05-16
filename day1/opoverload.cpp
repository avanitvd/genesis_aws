// this cod is for concept of operator overloading where string's index is printed and exception is taken care of 
#include<iostream>
#include<cstring>
using namespace std;

class student
{
    char sname[20];
    public:

    student(){strcpy(sname,"shreya");}

    student(const char * name)
    {strcpy(sname,name);}

    void show()
    {cout<<"name = "<<sname;}

    char operator[](int index)
    {
        if(! (index>=0 && index< strlen(sname)))
            throw "index out of bound";//throwing exception 
           

        return sname[index];
    }


};

int main()
{
    student s1("hello");
    try
    {
        char ch =s1[2];
        cout<<"ch = "<<ch;
    }
    catch(const char * msg)
    {
        cout<<msg;
    }
    
    // char ch=s1[0];
    // cout<<"ch = "<<ch;
    return 0;

}

