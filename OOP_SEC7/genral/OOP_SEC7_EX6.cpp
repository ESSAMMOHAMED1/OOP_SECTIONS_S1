// creat a function to access privet class members and function are not a member finction in class

// hint : use frind function

#include <bits/stdc++.h>
using namespace std;

class A

{
    int x;

public:
    A(int x) : x(x) {}
    friend void bePro(A &c); // header frind function in class
};

void bePro(A &c)
{ // frind function body outside the class
    cout << c.x; // access the privet member in class 
}

int main()
{
    A a = A(12); // use constractor to intialize { (x) -> privet member}

    bePro(a); //  send object to frind class to do opertion ( output is 12 )  
}