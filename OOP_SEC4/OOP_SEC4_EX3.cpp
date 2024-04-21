#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int *grades;
    int numOfSubjects;

public:
    // Constructor
    Student(string nameParam, int numOfSubs) : name(nameParam), numOfSubjects(numOfSubs)
    {
        grades = new int[numOfSubjects];
    }

    // Copy constructor
    Student(const Student &other) : name(other.name), numOfSubjects(other.numOfSubjects)
    {
        // Allocate new memory for grades array
        grades = new int[numOfSubjects];

        // Copy values from other.grades to grades array
        for (int i = 0; i < numOfSubjects; i++)
        {
            grades[i] = other.grades[i];
        }
    }

    // Destructor to free dynamically allocated memory
    ~Student()
    {
        delete[] grades;
    }

    // Set student grade at index
    void setStudentGrade(int g, int ind)
    {
        if (ind >= 0 && ind < numOfSubjects)
        {
            grades[ind] = g;
        }
    }

    // Display student information
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Grades:";
        for (int i = 0; i < numOfSubjects; i++)
        {
            cout << " " << grades[i];
        }
        cout << endl;
    }
};

int main()
{
    // Create original student object
    Student student1("Alice", 3);
    student1.setStudentGrade(90, 0);
    student1.setStudentGrade(85, 1);
    student1.setStudentGrade(95, 2);

    // Use copy constructor to create a copy of student1
    Student student2 = student1;

    // Modify grades of student2
    student2.setStudentGrade(88, 1);

    // Display information for both students
    student1.display();
    student2.display();

    return 0;
}
