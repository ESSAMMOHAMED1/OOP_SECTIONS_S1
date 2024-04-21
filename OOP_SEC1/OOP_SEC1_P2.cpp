#include <bits/stdc++.h>
using namespace std;

/// first way to define a struct variable

struct
{                                   // Structure declaration
    int myNum;                      // Member (int variable)
    string myString;                // Member (string variable)
} myStructure, yourStruct; // Structure variable

// second way to define a struct variable

struct Car
{
    string brand; // member
    string model; // member
    int year;     // member
};
int main()
{
    // first way
    // Assign values to members of myStructure
    myStructure.myNum = 1;

    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;

    cout << myStructure.myString << endl;

    // second way

    Car BMW; // Creat Structure variable ( object )

    Car Tiota; // Creat Structure variable

    // Assign values to members of BMW
    



    BMW.brand = "BMW";
    
    BMW.model = "X5";

    BMW.year = 1999;

    cout << BMW.brand << BMW.model << BMW.year << endl;
}
