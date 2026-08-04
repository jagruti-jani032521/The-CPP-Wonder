#include <iostream>
#include "Single.cpp"
using namespace std;

int main()
{
    B b1;
    b1.setA();
    b1.setB();

    b1.getB();

    cout << endl
         << "Sum of A and B\t: " << b1.sum() << endl;
}