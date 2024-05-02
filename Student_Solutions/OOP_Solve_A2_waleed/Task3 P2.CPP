// multilevel inheritance
// multiple inheritance


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#include <iostream>
using namespace std;
// multilevel inheritance
class University
{
public:
    string name;

    University(string n) : name(n) {}

    void displayName()
    {
        cout << "University name: " << name << endl;
    }
};

class Student : public University
{
public:
    int id;

    Student(string n, int i) : University(n), id(i) {}

    void displayStudentInfo()
    {
        displayName();
        cout << "Student ID: " << id << endl;
    }
};

class Teacher : public Student
{
public:
    string subject;

    Teacher(string n, int i, string s) : Student(n, i), subject(s) {}

    void displayTeacherInfo()
    {
        displayName();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s("FCAI", 2024);
    Teacher t("FCAI", 2024, "Software Engineer");

    cout << "student info :" << endl;
    s.displayStudentInfo();
    cout << "----------------------------------------------" << endl;
    cout << "Teacher info :" << endl;
    t.displayTeacherInfo();
    cout << "----------------------------------------------" << endl;



    return 0;
}
