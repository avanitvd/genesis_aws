
// in this code : practice code question

#include<iostream>
#include<cstring>

using namespace std;

class account
{
    //datamembers are declared
    static int accountno;//static data member 
    char *accountname;
    double accountbalance;

    public:

    ~account()//destructor
    {
        cout<<"\n destructor is called";
        delete accountname;
    }

    account()//default constructor
    {
        accountno++;//auto increment for account number
        accountname=new char[10];
        strcpy(accountname,"raju");
        accountbalance=69000;
    }

    account(const char*accname,double accbal)// para constructor
    {
        accountno++;
        accountname=new char[10];
        strcpy(accountname,accname);
        accountbalance=accbal;

    }

    account(const account &acc)//copy constructor
    {
        accountno=acc.accountno;
        accountname=new char[strlen(acc.accountname)+1];
        strcpy(accountname,acc.accountname);
        accountbalance=acc.accountbalance;
        
    }

       // creating a deposit function
    void deposit(double amount)
    {
        accountbalance += amount;
        cout << "\n"
             << amount << " is creadite to the Account!";
    }
 
    // creating a withdrawl function
    void withdraw(double amount)
    {
        accountbalance -= amount;
        cout << "\n"
             << amount << " debited to the account!";
    }


//display function 
    void display()
    {
        cout<<"account number is  "<<accountno;
        cout<<"\naccount name is  "<<accountname;
        cout<<"\naccount balance  is  "<<accountbalance;
    }
    

    //getter and setter generated

    static int getAccountno() { return account::accountno; }
    static void setAccountno(int accountno) { account::accountno = accountno; }

    char *getAccountname() const { return accountname; }
    void setAccountname(char *accountname_) { accountname = accountname_; }

    double getAccountbalance() const { return accountbalance; }
    void setAccountbalance(double accountbalance_) { accountbalance = accountbalance_; }

};

int account :: accountno=5000;// initialization for static data member



int main()
{
    //object for default constructor
    account a1;
    a1.display();
    cout<<"\n";
    

    //object for parameterized constructor
    account a2("krish",20000.00);
    a2.display();
    cout<<"\n";

    //object for copy constructor
    account a3(a2);
    a3.display();
    cout<<"\n";

    
    a2.withdraw(1234);
    a2.display();
    cout<<"\n";
    

    a2.deposit(9076);
    a2.getAccountbalance();
    a2.display();


    return 0;

}