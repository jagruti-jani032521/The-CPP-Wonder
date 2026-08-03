#include <iostream>
using namespace std;

int main()

{
    int a, b;

    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;

    int A[100], B[100];
    int n = 0;

    for (int i = a; i < b; i++)
    {
        if (i % 4 == 0)
        {
            A[n] = i;
            n++;
        }
    }

    cout << endl
         << "The Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
}