#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter array size : ";
    cin >> size;

    int a[size];

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "enter array element : ";
        cin >> a[i];
    }

    cout << endl;
    cout << "even element of an array : ";
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            cout << a[i] << "\t";
    }
}