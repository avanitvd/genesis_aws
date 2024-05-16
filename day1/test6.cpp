// this code is for operator overloading + friend function
// concept of pre post increment operator

#include<iostream>
#include<cstring>
using namespace std;


class point
{
    int x,y;
    public:
    point()//def constructor
    {
        x=0;
        y=0;
    }

    point(int x,int y)//para constructor
    {
        this ->x=x;
        this ->y=y;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }

//code for addintion  // this is for p3
    // point operator+(const point &p2)
    // {
    //     point pobj;
    //     pobj.x=this ->x+p2.x;
    //     pobj.y=this ->y+p2.y;
    //     return pobj;

    // }
//code for subtraction   // this is for p4
    //  point operator-(const point &pr)//pr is reference name for p2 var
    //  {
    //     point pobj2;
    //     pobj2.x=this->x-pr.x;
    //     pobj2.y=this->y-pr.y;
    //     return pobj2;
    //  }


//code for multiplication   // this is for p5 
    //  point operator*(const point &p1)
    //  {
    //     point pobj3;
    //     pobj3.x=this->x*p1.x;
    //     pobj3.y=this->y*p1.y;
    //     return pobj3;
    //  }

     //friend point operator*(point &p1,int val);//val is for 2 //this code is declaration for friend function
     //friend does not use  this-> 
     // this is for p6
     
//code for boolean
    // bool operator==(const point &p2)
    // {
    //     return this->x==p2.x && this->y==p2.y;
    // }



//for pre increment
    point& operator++()
    {
        ++x;
        ++y;
        return*this;
    }


 //post increment   
    point operator++(int){
        point tempobj=*this;
        x++;
        y++;
        return tempobj;
    }

    friend ostream &operator<<(ostream &os, const point &pp);//declartion of friend function for output
    friend istream &operator>>(istream &is,point &pp);// declaration of friend for input 


};

// point operator*(point &p1,int val)//p1 is ref for p1 // this was defination for friend function
// {
//     point pobj4;
//     pobj4.x=p1.x*val;
//     pobj4.y=p1.y*val;
//     return pobj4;
// }


ostream &operator<<(ostream &os, const point &pp) // do not use :: //defination of friend function
{
    os << pp.x << " " << pp.y << endl;
    return os;
}

istream &operator>>(istream &is,point &pp)//defining the friend function
{
    cout<<"enter the value of x and y ";
    is>>pp.x>>pp.y;
    return is;
}


int main()
{
//     point p1(3,4);
//     point p2(8,2);

//     //p1+p2
//     point p3=p1+p2;//p1.operator+(p2)
//     p3.display();

// cout<<endl;
//     //p1-p2
//     point p4=p1-p2;
//     p4.display();

// cout<<endl;

//     //p2*p1
//     point p5=p2*p1;//p2.operator*(p1)
//     p5.display();

// cout<<endl;

//     //p1*2
//     point p6 = p1*2;//point obj*datatype
//     p6.display();
    

//code for pre increment
    point p7(4,6);
    point p8= ++p7;
    // p7.display();
    // p8.display();
cout<<"this is pre increment ";
    cout<<p7;//5  7
    cout<<p8;//5  7


//code for post increment
    point p01(6,8);
    point p02=p01++;
    // p01.display();
    // p02.display();
cout<<"this is post increment ";
    cout<<p01;// 7  9
    cout<<p02;//6   8


//code for istream
point p03;
cin>>p03;


 //code for boolean
    // if (p1==p2)
    // {
    //     cout<<"equal points";
    // }

    // else{
    //     cout<<"not equal";
    // }
    //boolean ko print nhi karaya hai abhi 
    
}

