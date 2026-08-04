#include <iostream>
using namespace std;

// parent class
class P
{
protected:
    float temperature;
};

// child class Q
class Q : public P
{
public:
    void toFahrenheit()
    {
        cout << "Enter temperature in Celcius : ";
        cin >> temperature;

        float fahrenheit;

        cout << endl;
        cout << "Temprature in Fahreinheit : " << (temperature * 9 / 5) + 32 << endl;
    }
};

// child class R
class R : public Q
{
public:
    void toKelvin()
    {
        float fahreinheit = (temperature * 9 / 5) + 32;
        float kelvin;

        cout << endl;
        cout << "Temperature in Kelvin : " << (fahreinheit - 32) * 5 / 9 + 273.15 << endl;
    }
};