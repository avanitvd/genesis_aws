
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     cout<<"hello world";
// //     return 0;
// // }

// // #include <iostream>  
// // using namespace std;  
// // int main()  
// // {  
// // int number=30;    
// // int *p;      
// // p=&number;//stores the address of number variable    
// // cout<<"Address of number variable is:"<<&number<<endl;    
// // cout<<"Address of p variable is:"<<p<<endl;    
// // cout<<"Value of p variable is:"<<*p<<endl;    
// //    return 0;  
// // }  


// // #include <iostream>  
// // using namespace std;  
// // int main()  
// // {  
// //     int *ptr;  // integer pointer declaration  
// //     int marks[5]={12,24,36,48,60}; // marks array declaration  
// //     // std::cout << "Enter the elements of an array :" << std::endl;  
// //     // for(int i=0;i<4;i++)  
// //     // {  
// //     //     cin>>marks[i];  
// //     // }  
// //     ptr=marks; // both marks and ptr pointing to the same element..  
// //     std::cout << "The value of *ptr is :" <<*ptr<< std::endl;  
// //     std::cout << "The value of *marks is :" <<*marks<<std::endl;  
// // } 


// // #include<stdio.h>
// // #include<string.h>
// // int main()
// // {
// //     char str1[20]="welcome world";
// //     int len =strlen(str1);
// //     printf("length=%d \n",len);
// //     printf("size=%d \n",sizeof(str1));
// //     char str2[20]="this";
// //     int length =strlen(str2);
// //     strcpy(str1,str2);//destination ,source=str1,str2
// //       printf("length=%d \n",length);
// //       printf("size=%d \n",sizeof(str2));
// // }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n1,n2;
// //     cout<<"\n enter two nos ";
// //     cin>>n1>>n2;
// //     if(n1>n2){cout<<n1<<" is max";}
// //     else {cout<<n2<<" is max";}
// //     return 0;
// // }


// // this is not completed ------------------------
// // void print(const int &);
// // int main(){
// //     int a=10;
// //     print(a);

// // }

// #include<iostream>
// using namespace std;
// class Product{
//     int productcode;
//     int price;

//     public:
//     //member function of product class and can access data member of this class
   
//     Product()//default constructor
//     {
//         productcode=234;
//         price=7000;
//     }
//     void display()
//         {
//             cout<<productcode<<" "<<price;
        
//         }
    

// };
// int main()
// {
//     Product p1;
//     p1.display();
// }


//-------------------------------------------

#include<iostream>
using namespace std;

int sum(int a , int b){
    int c= a+b;
    return c;
}
void_t swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=4,b=5;
    //cout<<"sum = "<<sum(a,b);
    cout<<"value of a"<<a<<"value of b is : "<<b<<endl;
    return 0;
}



