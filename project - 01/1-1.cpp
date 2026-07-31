#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int totalSecond;
    int hours, minutes, seconds;

public:
    // setter for total seconds
    void setTotalSecond()
    {
        cout << "enter total second : ";
        cin >> totalSecond;
    }

    // getter for HH:MM:SS
    void getTime()
    {
        hours = totalSecond / 3600;
        minutes = (totalSecond % 3600) / 60;
        seconds = totalSecond % 60;

        cout << "HH:MM:SS = " << hours << ":" << minutes << ":" << seconds << endl
             << endl;
    }

    // setter for HH:MM:SS
    void setTime()
    {
        cout << "enter hours : ";
        cin >> hours;
        cout << "enter minutes : ";
        cin >> minutes;
        cout << "enter seconds : ";
        cin >> seconds;
    }

    // getter for total seconds
    void getTotalSecond()
    {
        totalSecond = (hours * 3600) + (minutes * 60) + seconds;
        cout << "total seconds = " << totalSecond << endl;
    }
};

int main()
{
    TimeConverter t;

    // seconds to HH:MM:SS
    t.setTotalSecond();
    t.getTime();

    //  HH:MM:SS to seconds
    t.setTime();
    t.getTotalSecond();

    return 0;
}