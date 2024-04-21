#include <bits/stdc++.h>
using namespace std;

// OOP paradigm

/*

- defination : that organizes software design around objects and data,
  rather than functions and logic like procedural programming.

- Why We use it

*/
//================================================================================================================

// object-oriented (OO) concepts

/*

 - Classes and Objects
 - Encapsulation
 - Abstraction
 - Inheritance
 - Polymorphism

*/

//===================================================================================================================

// OOP principles

// 1 - SOLID
/*
- Single Responsibility Principle (SRP):
class should have only one reason to change ,
this means that each class should focus on a single aspect of functionality

- Open/Closed Principle (OCP):
software entities (classes, modules, functions, etc.)
should be open for extension but closed for modification.

this is most important to topics now ....

*/

// 2 - (DRY ,KISS ,YAGNI)

/*
- DRY (Don’t Repeat Yourself)
- KISS (Keep it simple, Stupid!)
- YAGNI (You ain't gonna need it)
*/

//==========================================================================================================================

// Classes

// GradeBook class definition

class GradeBook1
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // end function displayMessage
};    // end class GradeBook

class GradeBook2
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) const
    {
        cout << "Welcome to the grade book for\n"
             << courseName << endl;
    } // end function displayMessage
};    // end class GradeBoo

//=============================================================================================================

// Encapsulation

// Encapsulation → the wrapping up of data and information in a single unit.

class student
{
    string name;
    int ID;
    int NID;
    float GPA;
    string courses[100];
    string phoneNo;
};

//===============================================================================================================================

// Data hiding

// The Access Modifiers

// that set the accessibility of classes, methods, and other members.

// we have three important Access Modifiers

// 1. public

//     The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.

// 2. private (default)

//     The class members declared as *private* can be accessed only by the member functions inside the class.

// 3. protected

// I will explain it in the inheritance

class student
{
public:
    string name;
    int ID;
    int NID;
    float GPA;

private:
    int age; // now age is private
};

/*


int main(){
        s1.age= 20; //we can not access to the age because it is private -> error
    return 0;
}
*/

// private you can not access to member outside class but you can access inside class

class student
{
public:
    string name;
    int ID;
    int NID;
    float GPA;

private:
    int age; // now age is private
public:
    void set_age(int value) // create method for set value to age
    {
        age = value; // set value
    }
};

// int main(){
// 		s1.set_age(20);//use method for set data
// 	return 0;
// }

class student
{
public:
    string name;
    int ID;
    int NID;
    float GPA;

private:
    int age; // now age is private      
public:
    void set_age(int value) // create method for set value to age
    {
        if (value >= 18) // Iadded this condition so that I do not allow a value less than 18
            age = value; // set value
        else
            cout << "Age cannot be less than 18";
    }

    void get_age() // create method for set value to age
    {
        cout << age << endl;
    }
};

// int main(){
// 		s1.set_age(20);//use method for set data
// 		s1.set_age(10);//output-> Age cannot be less than 18
//      s1.get_age() ->   output -> 20 
// 	return 0;
// }

//========================================================================================================

// first → default constructor `class_name()`

// Default constructor is the constructor which doesn’t take any argument.

//  It has no parameters.

//  It is also called a zero-argument constructor.

/*

 Syntax for defining the constructor within the class
        <class-name>(list-of-parameters)
        {
                  //constructor definition
        }

*/

/*

Syntax for defining the constructor outside the class

        <class-name>: :<class-name>(list-of-parameters)
        {
                //constructor definition
        }

*/

// - A destructor function is called automatically when the object goes out of
// scope :
//     1. the function ends
//     2. the program ends
//     3. a block containing local variables ends
//     4. a delete operator is called

// simply, destructor opposite to constructor.

// - the destructor kills the objects of classes
// - the destructor can be defined only once in a class.
// - if you don’t create a destructor it is invoked automatically
// - No parameter or return
// - It must have the same name as the class. But it is prefixed with a tilde sign (~).

// example

#include <iostream>
using namespace std;
class example
{
public:
    example()
    {
        cout << "Constructor Invoked" << endl;
    }
    ~example()
    {
        cout << "Destructor Invoked" << endl;
    }
};
int main(void)
{
    example x1; // creating object
    return 0;
}

// maybe now you are wondering why we need to use the destructor

// okay, Main usage is to deallocate memory (pointers)

#include <iostream>
using namespace std;
class example
{
public:
    int x;
    int *ptr;
    example()
    {
        x = 0;
        ptr = new int; // alocate memeory
    }
    ~example()
    {
        delete ptr; // deallocate memeory
    }
};
int main(void)
{
    example x1; // creating object
    return 0;
} // when the main function ends destructor deallocate memor

// in this section, we will talk about an important topic

// firstly, we need to know what is different between what and how

// Abstraction using Access modifiers

// we can use access modifiers to enforce restrictions on class members by using private and public **(We have explained this in encapsulation)**

//  Advantages of Data Abstraction
// - Helps the user to avoid writing the low-level code
// - Avoids code duplication and increases reusability.
// - Can change the internal implementation of the class independently without affecting the user.
// - Helps to increase the security of an application or program as only important details are provided to the user.
// - It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.