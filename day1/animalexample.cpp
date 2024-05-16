#include<iostream>

using namespace std;

class Animal//base class : abstract class 
{

    public:
    virtual void eat()
    {
        std::cout<<"eating the food ";
    }

};

class Cat : public Animal
{
    public:
    void eat()
    {
        std::cout<<"\ncat is eating the food ";
    }
};

class Dog : public Animal
{
    public:
    void eat()
    {
        std::cout<<"\ndog  is eating the food ";
    }
};



//stand alone function : 
void func1(Animal *ptr)
{
    ptr->eat();

}





int main()
{
    Animal*p;
    Cat cobj;
    Dog dobj;

    p=&cobj;
    func1(p);

    p=&dobj;
    func1(p);



    return 0;
}