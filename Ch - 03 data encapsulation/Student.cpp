#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    // setter
    void setData()
    {
        cout << "enter student ID : ";
        cin >> stu_id;
        fflush(stdin);
        cout << "enter student Name : ";
        cin >> stu_name;
        cout << "enter studet Age : ";
        cin >> stu_age;
        fflush(stdin);
        cout << "enter student Course : ";
        cin >> stu_course;
        cout << "enter student City : ";
        cin >> stu_city;
        cout << "enter student email : ";
        cin >> stu_email;
        cout << "enter student college : ";
        cin >> stu_college;
    }

    // getter
    void getData()
    {
        cout << endl
             << endl;
        cout << "Student ID : " << stu_id << endl;
        cout << "Student Name : " << stu_name << endl;
        cout << "Student Age : " << stu_age << endl;
        cout << "Student Course : " << stu_college << endl;
        cout << "Student City : " << stu_city << endl;
        cout << "Student Email : " << stu_email << endl;
        cout << "Student College : " << stu_college;
    }
};
