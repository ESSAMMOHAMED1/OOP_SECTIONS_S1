#include <bits/stdc++.h>
using namespace std;
/// Working with Pointers

// normal pointers

int *i;          // pointer to an integer variable
double *d;       // pointer to a double variable
float *f;        // pointer to a float variable
char *c;         // pointer to a character variable
int *ptr = NULL; // null pointer

//=========================================================================================================================

// struct and pointers 

struct Distance
{
    int feet;
    float inch;
};
//=========================================================================================================================

//pointer and classes

class Box
{
public:
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};
//=========================================================================================================================

// dangling poiters

class Test
{
private:
    int p;
    char c;

public:
    void Display()
    {
        cout << "display" << endl;
    }
};

/// =========================================================================================================

// arrays and pointers

void Arr()
{
    // Declare an array
    //  ptr
    //  0    1    2
    int v[3] = {10, 100, 200};

    // declare pointer variable

    int *ptr;

    // Assign the address of v[0] to ptr

    ptr = v; ///  ptr -> 0 , *ptr = 10

    for (int i = 0; i < 3; i++)
    {
        cout << "Value at ptr = " << ptr << "\n";   // 0 1 2
        cout << "Value at *ptr = " << *ptr << "\n"; // 10 100 200

        // Increment pointer ptr by 1
        ptr++;
    }
}
//=====================================================================================================================

// pointers and functions

int multiply(int a, int b)
{
    return a * b;
}
//=====================================================================================================================

// main function

int main()
{
    int *singelPtr;
    int val = 5;
    ptr = &val; // ptr point in val

    cout << singelPtr << endl;  // address of val
    cout << val << endl;        // 5
    cout << *singelPtr << endl; // 5
    cout << &val << endl;       // address
    cout << &singelPtr << endl; // address of ptr

    //=======================================================================================================

    // arrays and pointers

    Arr();

    //=======================================================================================================

    // function with pointer

    int (*func)(int, int); //(*func) is the pointer  , (int , int ) function parms

    // func is pointing to the multiplyTwoValues function

    func = multiply;

    int prod = func(15, 2);
    cout << "The value of the product is: " << prod << endl;

    //================================================================================================

    // pointers and struct

    Distance *ptr, d;
    ptr = &d;
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";
    // the same as
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches";
    //======================================================================================================

    // pointer and classes

    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    Box *ptrBox;             // Declare pointer to a class.

    // Save the address of first object
    ptrBox = &Box1;

    // Now try to access a member using member access operator
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;

    // Save the address of second object
    ptrBox = &Box2;

    // Now try to access a member using member access operator
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;

    // dynamic allocation

    double *pvalue = NULL; // Pointer initialized with null
    pvalue = new double;   // Request memory for the variable

    *pvalue = 29494.99; // Store value at allocated address
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue; // free up the memory.
    // q : whats happend if we not free up the memory 🤔

    //=======================================================================================================

    // Dangling Pointers

    // Dangling pointers are dreaded errors in C++.
    // You often come across a runtime error if the pointer you are trying to access
    // is dangling. What are dangling pointers? Well,
    // a dangling pointer is one that points to
    // the memory location of an object that has already been deleted from memory.

    Test *ptr1 = new Test(); // memory leak

    Test *ptr2 = ptr1;

    delete ptr2;

    ptr1->Display(); // Error: The pointer ptr1 is now a dangling pointer!
}
