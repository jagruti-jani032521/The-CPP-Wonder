#include "Cafe.cpp"

int main()
{
    int n;

    cout << "Enter Number of Fast Food Cafes : ";
    cin >> n;

    FastFoodCafe cafe[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter Details of Cafe" << i + 1 << endl
             << endl;
        cafe[i].setData();
    }

    cout << endl
         << endl;
    cout << "n---Fast Food Cafe Details--- " << endl;

    for (int i = 0; i < n; i++)
    {
        cafe[i].getData();
    }

    return 0;
}