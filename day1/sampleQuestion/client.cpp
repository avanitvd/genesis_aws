#include "bill.h"
#include <cstring>
int main()
{
    double totalBill=0;

    Bill b1[3];
    for (int i = 0; i < 3; i++)
    {
        b1[i].accept();
        std::cout << b1[i];
        totalBill = totalBill + b1[i].getBillamount();
    }
    std::cout << "\n total bill amount is " << totalBill;

    char *customer_name;
    std::cout << "\nenter customer name " << std::endl;
    std::cin >> customer_name;
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(b1[i].getCustometinfo().getCustomername(), customer_name)==0)
        {
            std::cout << b1[i];
            break;
        }
        else 
        {
            std::cout<<"\n customer not found";
        }
    }

    return 0;
}