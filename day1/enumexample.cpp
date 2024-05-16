#include <iostream>
#include<cstring>

using namespace std;

enum EmployeeRole{IT, HR , MANAGER, FLM, TIMS};

class Employee
{
    int empid;
    enum EmployeeRole empRole;

    public:

    Employee():empid(100),empRole(EmployeeRole::IT)
    {}
    Employee(int eid,EmployeeRole erole)
    :empid(eid),empRole(erole)
    {}

    friend ostream& operator<<(ostream& os,const Employee& emp)
    {
        os<<"emp id = "<<emp.empid<<"emp role "<<emp.empRole;
        switch (emp.empRole)
        {
            case EmployeeRole::IT:
            cout<<"\n emp role is IT"<<endl;
            break;
            case EmployeeRole::HR:
            cout<<"\n emp role is HR"<<endl;
            break;
            case EmployeeRole::MANAGER:
            cout<<"\n emp role is MANAGER"<<endl;
            break;
            case EmployeeRole::FLM:
            cout<<"\n emp role is FLM"<<endl;
            break;
            case EmployeeRole::TIMS:
            cout<<"\n emp role is TIMS"<<endl;
            break;
        }
        return os;
    }


};

int main()
{
    Employee e(101,EmployeeRole::FLM);

    cout<<e<<endl;

    return 0;
}