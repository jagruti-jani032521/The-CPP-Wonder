#include <iostream>
using namespace std;

// parent class
class RBI
{
protected:
    float rate;

public:
    void getROI()
    {
        cout << "Enter Rate of Interest : ";
        cin >> this->rate;
    }
};

// child class SBI
class SBI : public RBI
{
public:
    void SBIdata()
    {
        cout << "SBI Rate of Interest = " << rate << "%" << endl;
    }
};

// child class BOB
class BOB : public RBI
{
public:
    void BOBdata()
    {
        cout << "BOB Rate of Interest = " << rate << "%" << endl;
    }
};

// child class ICICI
class ICICI : public RBI
{
public:
    void ICICIdata()
    {
        cout << "ICICI Rate of Interest = " << rate << "%" << endl;
    }
};
