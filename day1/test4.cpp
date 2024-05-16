//function over loading is explained here 
//concepts of double and truncating is done 


#include<iostream>
#include<cstring>
using namespace std;



//this code is commented
void add(int a, int b)//fuction to add int 2 para
{
cout<<"\n int +int = "<<a+b;
}

void add(int p,int q,int r)//function to add int 3 para
{
cout<<"\n int + int + int = "<<p+q+r;
}

void add (float a, float b)// func to add float datatype para
{
    cout<<"\n float + float = "<<a+b;
}

void add(double a,double b)//function to add double datatype para
{
    cout<<"\n double + double = "<<a+b<<endl;
}

void display(int x,int y=0, int z=0)
{
    cout<<x<<" "<<y<<" "<<z;
}


int main()
{
   add(3,4);
   add(11,12,13);
   add(1.5,4.1);

   add(2.3f,1.2f);
    cout<<"\n";

   display(23);
   cout<<"\n";

   display(10,20);
    cout<<"\n";

   display(10,3,5);
    cout<<"\n";

   return 0;
}
//float being assign to double is better
