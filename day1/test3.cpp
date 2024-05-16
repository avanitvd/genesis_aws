//static function , datamember char is array[] , auto increment is here 

#include<iostream>
#include<cstring>
using namespace std;

//static function concepts 
class Product{
    //datamembers 

    int productcode;
    static int x;
    static int count;

    int price;
    char pname[20];


    public:


    static void showx(){
        cout<<x;
    }
    static void showCount(){
        cout<<count;
    }
    //member function of product class and can access data member of this class
       Product()//default constructor
       {
        productcode=x;
        x++;
        price=600;
        strcpy(pname,"mobile");
        count++;
    }

    Product(int pcode, int pr, const char *name)
    {
        productcode= x;//pcode;
        x++;
        price=pr;
       strcpy(pname,name);
       count++;
    }
    
    void display()
        {
            cout<<" \nproduct code = "<<productcode<<" \nprice= "<<price;
            cout<<"\nproduct name="<<pname;
        
        }
//getter setter are commented out here

    // int getProductcode() const { return productcode; }
    // void setProductcode(int productcode_) { productcode = productcode_; }

    // char getPname() const { return pname; }
    // void setPname(char pname_) { pname = pname_; }
    

    // int getPrice() const { return price; }
    // void setPrice(int price_) { price = price_; }
};

int Product::x=1001;//static variable initialization
int Product::count=0;
int main()
{

    Product p1;
    p1.display();
    
    Product p2(345685,65000,"prada\n");
    p2.display();
    
    Product p3;
    p3.display();
    // pr.display();

    Product::showx();// callstatic member function
    cout<<"\n";
    Product::showCount();// calling static showCount function
    
}