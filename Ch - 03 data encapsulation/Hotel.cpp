#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    static string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    // static setter
    static void setLocation()
    {
        cout << "Enter Hotel Location : ";
        cin >> this->hotel_location;
        cout << endl
             << endl;
    }

    // setter
    void setData()
    {
        cout << "Enter Hotel ID : ";
        cin >> this->hotel_id;
        fflush(stdin);
        cout << "Enter Hotel Name : ";
        cin >> this->hotel_name;
        cout << "Enter Hotel Type : ";
        cin >> this->hotel_type;
        cout << "Enter Hotel Rating : ";
        cin >> this->hotel_rating;
        cout << "Enter Establish Year : ";
        cin >> this->hotel_establish_year;
        cout << "Enter Staff Quantity : ";
        cin >> this->hotel_staff_quantity;
        cout << "Enter Room Quantity : ";
        cin >> this->hotel_room_quantity;
    }

    // getter
    void getData()
    {
        cout << endl
             << endl;
        cout << "Hotel ID : " << this->hotel_id << endl;
        cout << "Hotel Name : " << this->hotel_name << endl;
        cout << "Hotel Type : " << this->hotel_type << endl;
        cout << "Hotel Rating : " << this->hotel_rating << "Star" << endl;
        cout << "Hotel Location : " << this->hotel_location << endl;
        cout << "Establish Year : " << this->hotel_establish_year << endl;
        cout << "Staff Quantity : " << this->hotel_staff_quantity << endl;
        cout << "Room Quantity : " << this->hotel_room_quantity << endl;
    }
};

// static data member

string Hotel::hotel_location;
