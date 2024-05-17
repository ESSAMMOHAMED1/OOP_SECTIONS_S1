#include <iostream>
using namespace std;
class Person
{
public:
    virtual void Print()
    {
        cout << "Person" << endl;
    }
    virtual ~Person()
    {
        cout << "~Person" << endl;
    }
};

class Sudent : public Person
{
public:
    void Print()
    {
        cout << "Student" << endl;
    }
    virtual ~Sudent()
    {
        cout << "~Sudent" << endl;
    }
};

int main()
{
    Person P;
    Sudent S;
    Person *per_ptr, *per_ptr2, *per_ptr3 = new Sudent;
    Sudent *stu_ptr;
    per_ptr = &P;
    stu_ptr = &S;
    per_ptr2 = &S;

    per_ptr2->Person::Print();
    delete per_ptr3;
}