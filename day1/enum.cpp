#include<iostream>

enum Cartype{SEDAN, HATCHBACK, SUV};

int main()
{
   int ctype;
   Cartype c;
   std::cin>>ctype;
   c = (Cartype)ctype;
   std::cout<< c<<std::endl;




    return 0;
}