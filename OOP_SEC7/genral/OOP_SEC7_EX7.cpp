// creat a copy constractor do the same like defult copy constractor

// if we have pointers can we use the defult copy constractor 🤔

// if not tell us about issues well meet us if we use it

#include <bits/stdc++.h>
using namespace std;

class A

{
    int x;

public:
    A(int x) : x(x) {} // intialize x

    A(const A &other) : x(other.x) {} // copy constractor
};

int main()
{
    A a = A(10), b(12);
    a = b;
    // then a = 12 , b = 12
}