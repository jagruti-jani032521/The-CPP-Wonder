#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long long cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    // setter
    void setData()
    {
        cout << "Enter Customer ID : ";
        cin >> cust_id;
        fflush(stdin);
        cout << "Enter Customer Name : ";
        cin >> cust_name;
        cout << "Enter Customer Age : ";
        cin >> cust_age;
        fflush(stdin);
        cout << "Enter Customer City : ";
        cin >> cust_city;
        cout << "Enter Customer Mobile Number : ";
        cin >> cust_mobile_number;
        cout << "Enter SIM Card Validity (Years): ";
        cin >> cust_simcard_validity;
        cout << "Enter Telecome Brand Name : ";
        cin >> cust_telecom_brand_name;
    }

    // getter
    void getData()
    {
        cout << endl
             << endl;
        cout << "Customer ID : " << cust_id << endl;
        cout << "Customer Name : " << cust_name << endl;
        cout << "Customer Age : " << cust_age << endl;
        cout << "Customer City : " << cust_city << endl;
        cout << "Mobile Number : " << cust_mobile_number << endl;
        cout << "SIM Card Validity : " << cust_simcard_validity << "years" << endl;
        cout << "Telecome Brand Name : " << cust_telecom_brand_name << endl;
    }
};
