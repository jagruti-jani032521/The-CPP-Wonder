#include "Student.cpp"

int main()
{
    Student s[5];

    cout << "---Student Record System--- " << endl
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Enter Details of Student" << i + 1 << endl
             << endl;
        s[i].setData();
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].getData();
    }

    return 0;
}