#include "Customer.cpp"

int main()
{
    Customer c[5];

    cout << "---Customer Record System--- " << endl
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Enter Details of Customer" << i + 1 << endl
             << endl;
        c[i].setData();
    }

    for (int i = 0; i < 5; i++)
    {
        c[i].getData();
    }

    return 0;
}