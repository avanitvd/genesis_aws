#include<iostream>
#include<cstring>

using namespace std;

class overloading
{
    int x;
    int y;
    public:
    overloading(){
        x=0;
        y=0;
    }

    overloading(int a,int b)
    {
        this->x=a;
        this->y=b;
    }

    void display()
    {
        cout<<"\n numbers are "<<x<<" "<<y; 
    }

    overloading operator+(const overloading &padd)
    {
        overloading locobj;
        locobj.x=this->x+padd.x;
        locobj.y=this->y+padd.y;
        return locobj;
    }
};

int main()
{
    overloading p1(2,3);//p1(x,y)
    overloading p2(4,5);//p2(x,y)

    overloading padd=p1+p2;
    padd.display();



    return 0;
}