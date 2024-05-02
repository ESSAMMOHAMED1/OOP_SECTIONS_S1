// multilevel inheritance
// multiple inheritance


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// multiple inheritance
#include <iostream>
#include <string>

#include <iostream>
using namespace std;

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

class Teacher : public University
{
public:
    string subject;

    Teacher(string n, string s) : University(n), subject(s) {}

    void displayTeacherInfo()
    {
        displayName();
        cout << "Subject: " << subject << endl;
    }
};




int main()
{
    Student s("FCAI",2024);
    Teacher t("FCAI", " Software Engineer");

    cout<<"student info :"<<endl;
    s.displayStudentInfo();
    cout<<"----------------------------------------------"<<endl;
    cout<<"Teacher info :"<<endl;
    t.displayTeacherInfo();
    cout<<"----------------------------------------------"<<endl;
    cout<<"STAFF info :"<<endl;



}
