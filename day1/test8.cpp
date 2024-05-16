#include<iostream>
#include<cstring>
using namespace std;

class Complex
{
    int real;
    int img;

    public:

    Complex()
    {
        real=0;
        img=0;
    }

    Complex(int r, int i)
    {
        real=r;
        img=i;
    }

    void display()
    {
        cout<<real<<" real image is "<<img<<" \nthis is image ";

    }

    Complex operator+(const Complex &cp)
    {
        Complex cobj;
        cobj.real = this->real + cp.real;
        cobj.img = this->img + cp.img;
        return cobj;

    }
};


int main()
{
    Complex c1(5,6);
    Complex c2(8,9);

    Complex c3=c1+c2;
    c3.display();
    return 0;

}