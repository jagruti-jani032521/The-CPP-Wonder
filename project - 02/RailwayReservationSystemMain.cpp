#include "RailwayReservationSystem.cpp"

int main()
{
    RailwaySystem railway;

    int choice;
    int number;

    // using switch case for choice
    do
    {
        cout << "Railway Reservation System Menu:" << endl;
        cout << "1. Add Train" << endl;
        cout << "2. Display All Trains" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            railway.addTrain();
            break;
        case 2:
            railway.displayAllTrains();
            break;
        case 3:
            cout << "Enter Train Number to Search: ";
            cin >> number;
            railway.searchTrainByNumber(number);
            break;
        case 4:
            cout << "Thank you for using the Railway Reservation System." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}