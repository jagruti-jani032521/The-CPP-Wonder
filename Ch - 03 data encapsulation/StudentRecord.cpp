#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    float GPA;

public:
    // default constructor
    Student()
    {
        this->name = "unknown";
        this->rollno = 0;
        this->GPA = 0.0;
    }

    // parameterized constructor
    Student(string name, int rollno, float GPA)
    {
        this->name = name;
        this->rollno = rollno;
        this->GPA = GPA;
    }

    // copy constructor
    Student(Student &s)
    {
        this->name = s.name;
        this->rollno = s.rollno;
        this->GPA = s.GPA;
    }

    // getter

    string getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
    float getGPA()
    {
        return GPA;
    }

    // setter

    void setName()
    {
        cout << "Name : " << this->name << endl;
        cout << "Roll No : " << this->rollno << endl;
        cout << "GPA : " << this->GPA << endl;
    }
};

// student record manager class
class StudentRecordManager
{
    private:
    Student *students;
    int numStudents;
    int capacity;

    public:

    // constructor
    StudentRecordManager(int capacity = 10)
    {
        this->capacity = capacity;
        this->numStudents = 0;
        this->students = new Student[this->capacity];
    }

    // add student with the help of refrence variable
    void addStudent(Student &s)
    {
        if (this->numStudents < this->capacity)
        {
            this->students[this->numStudents] = s;
            this->numStudents++;
            cout << "Student added successfully." << endl;
        }
        else
        {
            cout << "Student record is full. Cannot add more students." << endl;
        }
    }

    // display all students
    void displayStudents()
    {
        if (this->numStudents == 0)
        {
            cout << "No students in the record." << endl;
            return;
        }

        cout << "Student Records :" << endl;
        for (int i = 0; i < this->numStudents; i++)
        {
           this->students[i].setName();
            cout << endl;
        }
    }

    // search student with the help of refrence variable

    void searchStudent(int rollno)
    {
       for (int i = 0; i < this->numStudents; i++)
        {
            if (this->students[i].getRollno() == rollno)
            {
                cout << "Student found :" << endl;
                this->students[i].setName();
                return;
            }
        }
        cout << "Student with Roll No " << rollno << " not found." << endl;
    }

    // destructor

    ~StudentRecordManager()
    {
        delete[] this->students;
    }
};