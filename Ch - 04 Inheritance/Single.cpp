#include <iostream>
using namespace std;

// parent class
class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter a value for a : ";
        cin >> this->a;
    }
    void getA()
    {
        cout << "Value of A\t: " << this->a << endl;
    }
};

// child class
class B : public A
{
private:
    int b;

public:
    // a;
    //  setA();
    //  getA();
    void setB()
    {
        cout << "Enter a value for b : ";
        cin >> this->b;
    }
    void getB()
    {
        cout << endl;
        getA();
        cout << "Value of B\t: " << this->b << endl;
    }

    int sum()
    {
        return a + this->b;
    }
};
