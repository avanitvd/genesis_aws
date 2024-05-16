#include <iostream>
using namespace std;

class square
{
    int len;
    int bred;

public:
    square()
    {
        len = 2;
        bred = 2;
    }

    square(int length, int bredth)
    {
        len = length;
        bred = bredth;
    }
    void display()
    {
        std::cout << "length =" << len;
        std::cout << "bredth =" << bred;
    }

    square operator+(const square &s)
    {
        square sq;
        sq.len = this->len + s.len;
        sq.bred = this->bred + s.bred;
        return sq;
    }

    friend istream &operator>>(istream &is, square &s);
    friend ostream &operator<<(ostream &os, square &sout);

    bool operator==(const square &s)
    {
        return (this->len==s.len)&&(this->bred==s.bred);//this->sobj1 ka len==s.sobj2 ka length
    }

};
istream &operator>>(istream &is, square &s)
{
    is >> s.len;
    is >> s.bred;
    return is;
}

ostream &operator<<(ostream &os, square &sout)
{
    os<<sout.len<<endl;
    os<<sout.bred<<endl;
    return os;
}


int main()
{
    // square sobj1;
    // square sobj2;

    // sobj1.display();
    // sobj2.display();

    // // sobj1+sobj2;//gives error so we need op overloading

    // square sobj3 = sobj1 + sobj2; // sobj1.operator+sobj2
    // sobj3.display();

    // square s4;
    // cin >> s4;
    // cout << s4<<endl;

// ---------------
    // square sobj1, sobj2;

    // cin>>sobj1;
    // cin>>sobj2;

    // if(sobj1 == sobj2)//comparison operator
    // {
    //     cout<<"\n objects are same";
    // }
    // else 
    // {
    //     cout<<"\nobjects are different";
    // }
  
    return 0;
}