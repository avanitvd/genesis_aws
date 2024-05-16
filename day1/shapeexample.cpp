#include<iostream>

class Shape  //abstract class : class with pure virtual function
{
    std::string color;
    public:
    Shape():color("white"){}

    Shape(std::string c):color(c){}

    void fillColor()
    {
        std::cout<<"fill color "<<color<<std::endl;

    }

    virtual void calarea()=0; //pure virtual function : similar to abstract function in java 
    
};

class Circle : public Shape
{
    double radius;
    public:
    Circle():radius(5){ }
    Circle(std::string c,double r):Shape(c),radius(r){ }
    void calarea()
    {
        std::cout<<"\n area of circle = "<<3.14*radius*radius<<std::endl;
    }
};

class Square : public Shape
{
    double side;

    public:
    Square():side(4){}
    Square(std::string c,double sd):Shape(c),side(sd){ }

    void calarea()
    {
        std::cout<<"\n area od square = "<<side*side<<std::endl;
    }
};


int main()


    //we can not create object of abstract class
    //we can create pointer or reference of abstract class
{
    Shape *sh=new Circle("red",2);
    sh->fillColor();
    sh->calarea();
   
   Shape *sp=new Square("black",3);
   sp->fillColor();
   sp->calarea();
    
    return 0;

}