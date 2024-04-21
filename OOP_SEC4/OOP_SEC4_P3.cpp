#include <iostream>
using namespace std;
class MyClass
{
public:
    int value;

    // Default constructor
    MyClass() : value(0) {}

    // Copy constructor (default)
    MyClass(const MyClass &other) : value(other.value) {}

    void display() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    MyClass obj1;
    obj1.value = 10;

    MyClass obj2 = obj1; // Using copy constructor

    obj1.display(); // Output: Value: 10
    obj2.display(); // Output: Value: 10

    return 0;
}

// When a class contains a pointer as a member variable,
// using the default copy constructor can lead to issues because a shallow copy of the pointer is made,
// not a deep copy. This means that both the original object and the copied object would end up pointing to the same memory location,
// which can lead to unintended behavior like double deletion (if not properly managed) or sharing data between objects when modifications are made.
// To address this problem,
// you typically need to define a custom copy constructor that performs a deep copy.

#include <iostream>

class MyClass2
{
public:
    int *data;

    // Constructor
    MyClass2() : data(new int(0)) {}

    // Copy constructor (custom deep copy)
    MyClass2(const MyClass2 &other) : data(new int(*other.data)) {}

    ~MyClass2()
    {
        delete data;
    }

    void setData(int value)
    {
        *data = value;
    }

    void displayData() const
    {
        cout << "Data: " << *data << endl;
    }
};

int main()
{
    MyClass2 obj1;
    obj1.setData(10); // 10

    MyClass2 obj2 = obj1; // Using custom copy constructor obj = 10 , obj2 = 10

    obj1.displayData(); // Output: Data: 10
    obj2.displayData(); // Output: Data: 10

    obj2.setData(20);

    obj1.displayData(); // Output: Data: 10
    obj2.displayData(); // Output: Data: 20

    return 0;
}