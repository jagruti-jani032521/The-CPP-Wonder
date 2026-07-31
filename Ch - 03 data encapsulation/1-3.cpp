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
        cin >> hotel_location;
        cout << endl
             << endl;
    }

    // setter
    void setData()
    {
        cout << "Enter Hotel ID : ";
        cin >> hotel_id;
        fflush(stdin);
        cout << "Enter Hotel Name : ";
        cin >> hotel_name;
        cout << "Enter Hotel Type : ";
        cin >> hotel_type;
        cout << "Enter Hotel Rating : ";
        cin >> hotel_rating;
        cout << "Enter Establish Year : ";
        cin >> hotel_establish_year;
        cout << "Enter Staff Quantity : ";
        cin >> hotel_staff_quantity;
        cout << "Enter Room Quantity : ";
        cin >> hotel_room_quantity;
    }

    // getter
    void getData()
    {
        cout << "Hotel ID : " << hotel_id << endl;
        cout << "Hotel Name : " << hotel_name << endl;
        cout << "Hotel Type : " << hotel_type << endl;
        cout << "Hotel Rating : " << hotel_rating << "Star" << endl;
        cout << "Hotel Location : " << hotel_location << endl;
        cout << "Establish Year : " << hotel_establish_year << endl;
        cout << "Staff Quantity : " << hotel_staff_quantity << endl;
        cout << "Room Quantity : " << hotel_room_quantity << endl;
    }
};

// static data member
string Hotel::hotel_location;

int main()
{
    int n;

    cout << "Enter Number of Hotels : ";
    cin >> n;

    // enter location only once
    Hotel::setLocation();

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter Details of Hotel" << i + 1 << endl;
        h[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        h[i].getData();
    }

    return 0;
}