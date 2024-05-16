#include "date.h"


Date::Date()
{
}

Date::Date(int, int, int)
{
}

Date::~Date()
{
    std::cout<<"\ndate is destructor is called";
}

void Date::accept()
{
    std::cout<<"\n enter the day : ";
    std::cin>>day;
    std::cout<<"\n enter the month : ";
    std::cin>>month;
    std::cout<<"\n enter the year : ";
    std::cin>>year;

    if(!(month>=1 && month<=12))
    {
        std::cout<<"\ninvalid month opted";
        accept();
    }

    if(month==2)
    {
        if(!(day>=1 && day<=28))
        {
            std::cout<<"\ninvalid date for feb opted";
            accept();
        }
    }

    if (month==4 || month == 6 || month==9 || month == 11 )
    {
        if(!(day>=1 && day<=30))
        {
            std::cout<<"\ninvalid date for months that have 30 days";
            accept();
        }
    }

}

std::ostream &operator<<(std::ostream &os, Date &obj)
{
    os<<obj.day<<" "<<obj.month<<" "<<obj.year<<std::endl;
    // os<<obj.month<<std::endl;
    // os<<obj.year<<std::endl;
    return os;
}
