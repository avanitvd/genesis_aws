#include<iostream>
#include<cstring>

using namespace std;

class Bankaccount
{
    
    int accountnumber;
    char *custname;
    static double rateInt;
    double balance;

    public:
    Bankaccount():accountnumber(1001)
    {
        custname=new char[20];
        strcpy(custname,"abhishek");
        balance=20000;

    }

    Bankaccount(int acc_no,const char* c_name,double c_bal):accountnumber(acc_no)
    {
        custname=new char[20];
        strcpy(custname,c_name);
        balance=c_bal;
    }

    ~Bankaccount()//destructor 
    {
        cout<<"\n destructor is called";
    }

    Bankaccount(const Bankaccount &bcc)//copy constructor 
    {
        accountnumber=bcc.accountnumber;
        custname=new char[20];
        strcpy(custname,bcc.custname);
        balance=bcc.balance;
    }

    void display()
    {
        std::cout<<"\n customer name = "<<custname;
        std::cout<<"\n customer account number = "<<accountnumber;
        std::cout<<"\n customer account balance = "<<balance;


    }

    void setBalance(int bal)
    {
        if(bal>=2000)
        balance=bal;
        else
        throw std::runtime_error("\nlow balance exception");
    }

    void withdraw()//(double amount)
    {
        double amount;
        cout<<"\n enter the amount to with draw ";
        cin>>amount;
        balance=balance-amount;
        cout<<"\namount is with drawn ";
    
    }

    // void operator =(const Bankaccount &b3)// assignment operator is overloaded
    // {
    //     accountnumber=b3.accountnumber;
    //     if(custname!=nullptr)
    //     delete custname;
    //     custname=new char[20];
    //     strcpy(custname,b3.custname);
    //     balance=b3.balance;
    // }

    bool operator==(const Bankaccount &bobj)//comparison operator overloading 
    {
        return !strcmp(custname,bobj.custname);
    }

// print the index of a char in the cust name
    char operator[](int index)
        {
            if(index>=0 && index<strlen(custname))
                return custname[index];
            throw std::runtime_error("index out of bounds");
        }


};
double Bankaccount::rateInt=2.0;

int main()
{
    Bankaccount b1;//def const object // exception is handled 
    try
    {
          b1.display();
          b1.setBalance(20000);
          b1.withdraw();
          b1.display();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    Bankaccount b2(b1); //copy constructor object created and that constructor would be called 
    b2.display();

//b3 and b4 are created for comparison and assignment operator
    Bankaccount b3(1002,"ekta",30000);
    Bankaccount b4(1003,"riya",40000);

    b3.display();
    b4.display();
    b4=b3;//operator assignment = is overloaded
    b4.display();

   if(b4==b3)//comparison of b4 with b3
   {
    std::cout<<"\n same names ";
   }
   else 
   {
    std::cout<<"\n diff names ";
   }
 
//this code is to print a char in the custname
  try
    {
          char ch = b4[20];
          std::cout<<"ch = "<<ch;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr <<"\n"<< e.what() << '\n';
    }

    
    return 0;
}