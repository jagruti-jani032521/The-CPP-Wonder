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
        cin >> this->stu_id;
        fflush(stdin);
        cout << "enter student Name : ";
        cin >> this->stu_name;
        cout << "enter studet Age : ";
        cin >> this->stu_age;
        fflush(stdin);
        cout << "enter student Course : ";
        cin >> this->stu_course;
        cout << "enter student City : ";
        cin >> this->stu_city;
        cout << "enter student email : ";
        cin >> this->stu_email;
        cout << "enter student college : ";
        cin >> this->stu_college;
    }

    // getter
    void getData()
    {
        cout << endl
             << endl;
        cout << "Student ID : " << this->stu_id << endl;
        cout << "Student Name : " << this->stu_name << endl;
        cout << "Student Age : " << this->stu_age << endl;
        cout << "Student Course : " << this->stu_college << endl;
        cout << "Student City : " << this->stu_city << endl;
        cout << "Student Email : " << this->stu_email << endl;
        cout << "Student College : " << this->stu_college;
    }
};
