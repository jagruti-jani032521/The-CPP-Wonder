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
        cin >> this->a;
        cout << "Enter a value for b : ";
        cin >> this->b;
        cout << "Enter a value for c : ";
        cin >> this->c;
    }

    void getData()
    {
        cout << endl
             << "--OUTPUT--" << endl
             << endl;
        cout << "Sum of cubes : " << (a * a * a) + (b * b * b) + (c * c * c) << endl;
    }
};