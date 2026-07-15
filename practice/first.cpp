#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World!" << endl;

    // cout << "This is a C++ program." << endl
    //      << endl;

    // // int age = 25;
    // // cout << "Age: " << age << endl;

    // int age;

    // cout << "Enter your age : ";
    // cin >> age;

    // cout << "I am " << age << " years old." << endl
    //      << endl;

    // int a, b;
    // cout << "Enter first number : ";
    // cin >> a;
    // cout << "Enter second number : ";
    // cin >> b;
    // cout << a << " + " << b << " = " << a + b << endl;
    // cout << a << " - " << b << " = " << a - b << endl;
    // cout << a << " * " << b << " = " << a * b << endl;
    // cout << a << " / " << b << " = " << a / b << endl;
    // cout << a << " % " << b << " = " << a % b << endl
    //      << endl;

    // int num;

    // cout << "Enter any number : ";
    // cin >> num;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << num << " * " << i << " = " << num * i << endl
    //          << endl;
    // }

    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
    {
        cout << "Table of " << i << endl;

        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}