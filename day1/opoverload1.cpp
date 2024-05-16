//this is code for operator overloading to understand == operator 
#include<iostream>
#include<cstring>
using namespace std;// this is not perefered in advance c++ , so we write std :: 


class Student
{
    char sname[20];
    int marks[3];
    
    public:
     Student()//def const
     {
        strcpy(sname,"harry");
        marks[0]=80;
        marks[1]=85;
        marks[2]=90;
     }

     Student(const char * name,int * mk)//para const
     {
        strcpy(sname,name);
        for(int i=0;i<3;i++)
        {
            marks[i]=mk[i];
        }

     }

     float calculateAvg()
     {
        float sum=0;
        float avg;
        for(int i=0;i<3;i++){
            sum=sum+marks[i];
        }
        avg=sum/3.0f;
        return avg;
     }

     bool operator==(Student &ref)
     {
       // return this->calculateAvg() == ref.calculateAvg();

        return strcmp(sname,ref.sname);
     }

    //  char operator[](int index)
    //  {return marks[index];}

     char operator[](int index)
     {return this->sname[index];}
    
};


int main()
{
    int mar1[3]={10,15,20};
    Student s1("yash",mar1);
    //int mk= s1[1];

    int mar2[3]={10,15,30};
    Student s2("ram",mar2);
    //int mk =s2[1];
    

int avg1=s1.calculateAvg();
cout<<avg1<<"\n";
int avg2=s2.calculateAvg();
cout<<avg2<<"\n";

    if(s1==s2)
    {
        cout<<"not equal";
    }
    else{
        cout<<" equal";
    }

}