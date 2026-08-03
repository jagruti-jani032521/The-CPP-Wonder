#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // default constructor

    FastFoodCafe()
    {
        this->cafe_id = 0;
        this->cafe_name = "Not Available";
        this->cafe_type = "Normal";
        this->cafe_rating = 0;
        this->cafe_location = "Not Available";
        this->cafe_establish_year = 0;
        this->cafe_staff_quantity = 0;
    }

    // setter

    void setData()
    {
        cout << "Enter Cafe ID : ";
        cin >> this->cafe_id;
        fflush(stdin);
        cout << "Enter Cafe Name : ";
        cin >> this->cafe_name;
        cout << "Enter Cafe Type (Rooftop/Normal) : ";
        cin >> this->cafe_type;
        cout << "Enter Cafe Rating (1-5) : ";
        cin >> this->cafe_rating;
        fflush(stdin);
        cout << "Enter Cafe Location : ";
        cin >> this->cafe_location;
        cout << "Enter Establish Year : ";
        cin >> this->cafe_establish_year;
        cout << "Enter Staff Quantity : ";
        cin >> this->cafe_staff_quantity;
    }

    // getter

    void getData()
    {
        cout << endl
             << endl;
        cout << "Cafe ID : " << this->cafe_id << endl;
        cout << "Cafe Name : " << this->cafe_name << endl;
        cout << "Cafe Type : " << this->cafe_type << endl;
        cout << "Cafe Rating : " << this->cafe_rating << "Star" << endl;
        cout << "Cafe Location : " << this->cafe_location << endl;
        cout << "Establish Year : " << this->cafe_establish_year << endl;
        cout << "Staff Quantity : " << this->cafe_staff_quantity;
    }
};

