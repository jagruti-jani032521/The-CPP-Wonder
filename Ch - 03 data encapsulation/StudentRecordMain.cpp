#include "StudentRecord.cpp"

int main()
{
    // create student objects

    Student s1("Alice", 101, 3.8);
    Student s2("Bob", 102, 3.5);
    Student s3(s1); // copy constructor

    // create student record manager

    StudentRecordManager manager;

    // add students to the record

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    // display all students

    manager.displayStudents();

    // search student

    cout << "-----Search Student-----" << endl;
    manager.searchStudent(102);

    return 0;
}