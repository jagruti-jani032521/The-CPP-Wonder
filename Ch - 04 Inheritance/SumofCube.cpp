#include <iostream>
using namespace std;

// parent class
class X
{
protected:
    int a, b, c;
};

// child class

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter a value for a : ";
        cin >> a;
        cout << "Enter a value for b : ";
        cin >> b;
        cout << "Enter a value for c : ";
        cin >> c;
    }

    void getData()
    {
        cout << endl
             << "--OUTPUT--" << endl
             << endl;
        cout << "Sum of cubes : " << (a * a * a) + (b * b * b) + (c * c * c) << endl;
    }
};