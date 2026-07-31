#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experiance;
    string emp_companyName;

public:
    void getData()
    {
        cout << "enter employee id : ";
        cin >> emp_id;
        fflush(stdin);
        cout << "enter employee name : ";
        cin >> emp_name;
        cout << "enter employee age : ";
        cin >> emp_age;
        fflush(stdin);
        cout << "enter employee role : ";
        cin >> emp_role;
        cout << "enter employee salary : ";
        cin >> emp_salary;
        fflush(stdin);
        cout << "enter employee city : ";
        cin >> emp_city;
        cout << "enter employee experiance : ";
        cin >> emp_experiance;
        fflush(stdin);
        cout << "enter employee companyName : ";
        cin >> emp_companyName;
    }

    void setData()
    {
        cout << endl;
        cout << "employee ID : " << emp_id;
        cout << "employee name : " << emp_name;
        cout << "employee age : " << emp_age;
        cout << "employee role : " << emp_role;
        cout << "employee salary : " << emp_salary;
        cout << "employee city : " << emp_city;
        cout << "employee experiance : " << emp_experiance;
        cout << "employee company name : " << emp_companyName;
    }
};

int main()
{
    employee emp[5];

    cout << "---employee record system---";

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << endl;
        cout << "enter detail of employee...." << i + 1 << endl
             << endl;
        emp[i].getData();
    }
    for (int i = 0; i < 5; i++)
    {
        emp[i].setData();
    }

    return 0;
}