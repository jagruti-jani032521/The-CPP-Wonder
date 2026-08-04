#include <iostream>
using namespace std;

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

protected:
    void getA()
    {
        cout << "Value of A\t: " << this->a;
    }
};

class B : public A
{
protected:
    int b;

public:
    void setB()
    {
        cout << "Enter a value for b : ";
        cin >> this->b;
    }

protected:
    void getB()
    {
        cout << endl;
        cout << "Value of B\t: " << this->b << endl;
    }
};

class C : public B
{
public:
    int Output()
    {
        cout << endl
             << "--OUTPUT--" << endl
             << endl;
        getA();
        getB();
    }
};