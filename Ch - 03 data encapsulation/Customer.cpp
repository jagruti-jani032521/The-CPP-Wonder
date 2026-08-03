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
        cin >> this->cust_id;
        fflush(stdin);
        cout << "Enter Customer Name : ";
        cin >> this->cust_name;
        cout << "Enter Customer Age : ";
        cin >> this->cust_age;
        fflush(stdin);
        cout << "Enter Customer City : ";
        cin >> this->cust_city;
        cout << "Enter Customer Mobile Number : ";
        cin >> this->cust_mobile_number;
        cout << "Enter SIM Card Validity (Years): ";
        cin >> this->cust_simcard_validity;
        cout << "Enter Telecome Brand Name : ";
        cin >> this->cust_telecom_brand_name;
    }

    // getter
    void getData()
    {
        cout << endl
             << endl;
        cout << "Customer ID : " << this->cust_id << endl;
        cout << "Customer Name : " << this->cust_name << endl;
        cout << "Customer Age : " << this->cust_age << endl;
        cout << "Customer City : " << this->cust_city << endl;
        cout << "Mobile Number : " << this->cust_mobile_number << endl;
        cout << "SIM Card Validity : " << this->cust_simcard_validity << "years" << endl;
        cout << "Telecome Brand Name : " << this->cust_telecom_brand_name << endl;
    }
};
