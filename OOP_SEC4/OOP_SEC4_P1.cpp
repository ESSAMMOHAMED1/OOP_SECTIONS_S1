#include <iostream>

using namespace std;
// Instance Variable:

// An instance variable (also known as a member variable or field) in a class is a variable that is unique to each object created from that class. Each object has its own separate copy of the instance variables.
// Instance variables store data that is specific to an object's state. They are declared without the static keyword and are initialized when an object is created using the class's constructor.

class MyClass1
{
public:
    int instanceVar; // Instance variable

    MyClass1(int value) : instanceVar(value) {}
};

int main()
{
    MyClass1 obj1(10);
    MyClass1 obj2(20);

    cout << obj1.instanceVar << endl; // Output: 10
    cout << obj2.instanceVar << endl; // Output: 20

    return 0;
}

// Static Variable:

// A static variable in a class is a variable that is shared among all objects of that class. Unlike instance variables, static variables are not tied to any particular object instance; they have a single shared copy across all instances of the class.
// Static variables are declared with the static keyword and are typically used for data that should be common to all objects of the class, such as constants or counters.

class MyClass
{
public:
    static int staticVar; // Static variable declaration

    MyClass() {}

    static void incrementStaticVar()
    {
        staticVar++;
    }
    static void descrimentStaticVar()
    {
        staticVar--;
    }
};

int MyClass :: staticVar = 0; // Static variable definition and initialization

int main()
{
    MyClass obj1;
    MyClass obj2;

    obj1.incrementStaticVar();
    obj2.incrementStaticVar();
    obj2.descrimentStaticVar();
    obj2.incrementStaticVar();

    cout << MyClass :: staticVar << endl; // Output: 2

    return 0;
}

// Static Member Function:

// A static member function in a class is a function that operates on static data members or performs class-level operations. Unlike regular member functions, static member functions do not have access to instance-specific data (instance variables) because they are not associated with any particular object.
// Static member functions are declared with the static keyword and can be called using the class name, even before any objects of the class are created.

class MyClass2
{
public:
    static void staticMemberFunction()
    {
        cout << "This is a static member function." << endl;
    }
};

int main()
{
    MyClass2::staticMemberFunction(); // Calling static member function
    return 0;
}
// Static variables and static member functions are often used in scenarios where data or functionality needs to be shared across all instances of a class or when working with class-level operations that do not require access to instance-specific data.
