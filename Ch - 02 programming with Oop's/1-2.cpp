#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    int car_id;
    string car_companyName;
    string car_color;
    string car_model;
    int car_release_year;

public:
    void getData()
    {
        cout << "enter car id : ";
        cin >> car_id;
        fflush(stdin);
        cout << "enter car company name : ";
        cin >> car_companyName;
        cout << "enter car color : ";
        cin >> car_color;
        cout << "enter car model : ";
        cin >> car_model;
        fflush(stdin);
        cout << "enter car release year : ";
        cin >> car_release_year;
    }

    void setData()
    {
        cout << "car ID : " << car_id;
        cout << "car company name : " << car_companyName;
        cout << "car color : " << car_color;
        cout << "car model : " << car_model;
        cout << "car release year : " << car_release_year;
    }
};

int main()
{
    car car[4];

    cout << "---car record system---";

    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << endl;
        cout << "enter detail of car...." << i + 1 << endl
             << endl;
        car[i].getData();
    }
    for (int i = 0; i < 4; i++)
    {
        car[i].setData();
    }
    return 0;
}