#include "Interest.cpp"

int main()
{
    SBI s1;
    BOB b1;
    ICICI i1;

    cout << "Enter SBI Details :" << endl;
    s1.getROI();
    s1.SBIdata();

    cout << endl;
    cout << "Enter BOB Details :" << endl;
    b1.getROI();
    b1.BOBdata();

    cout << endl;
    cout << "Enter ICICI Details :" << endl;
    i1.getROI();
    i1.ICICIdata();
}