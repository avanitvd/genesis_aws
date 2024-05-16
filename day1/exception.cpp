#include<iostream>
using namespace std;

void func()
{
    int n;
    cout<<"\n enter the number";
    cin>>n;
    if(n<10)
    {
        throw "\n number must be greater than 10 ";
    }
    cout<<n<<endl;

}

int main()
{
    try
    {
        func();
    }
    catch(const char* e)
    {
        std::cerr << e <<"exception is cathed";
    }
    return 0;
    
}