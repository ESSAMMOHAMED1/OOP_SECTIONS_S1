// Friend Function or Class: In C++, a friend is a function or class that is not a member of another
// class but has the special privilege of accessing the private and protected members of that class.
#include <iostream>
using namespace std;
class MyClass
{
private:
    int privateVar;

public:
    MyClass(int value) : privateVar(value) {}

    // Declaration of friend function inside the class
    friend void showPrivateVar(const MyClass &obj);
};

// Definition of friend function outside the class
void showPrivateVar(const MyClass &obj)
{
    cout << "Private variable: " << obj.privateVar << endl; // is a privite member 
}

int main()
{
    MyClass obj(10);

    // Calling the friend function to access privateVar
    showPrivateVar(obj);

    return 0;
}
