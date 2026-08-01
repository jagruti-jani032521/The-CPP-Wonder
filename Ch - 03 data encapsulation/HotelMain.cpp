#include "Hotel.cpp"

int main()
{
    int n;

    cout << "Enter Number of Hotels : ";
    cin >> n;

    // enter location only once
    Hotel::setLocation();

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter Details of Hotel" << i + 1 << endl
             << endl;
        h[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        h[i].getData();
    }

    return 0;
}