#include <bits/stdc++.h>

using namespace std;
// inline member function
class MyClass
{
public:
    int f() const { return m_i; }
    int g() const;

private:
    int m_i;
};

inline int MyClass::g() const
{
    return m_i;
}

// both member-functions behave equally (except for naming)

// Remember, inlining is only a request to the compiler,
// not a command. The compiler can ignore the request for inlining.

// initializer list to initialize the const
#include <iostream>
using namespace std;

class Test
{
private:
    const int t;
    const string s;

public:
    // Initializer list must be used
    Test(int t, string s) : t(t), s(s)
    {
    }
    int getT() { return t;}
};

int main()
{
    Test t1 = Test(); // ignor error
    cout << t1.getT();
    return 0;
}

// Initialization of reference data members
#include <iostream>
using namespace std;

class Test
{
    int &t;

public:
    Test(int &t) : t(t) {} // Initializer list must be used
    int getT() { return t; }
};

int main()
{
    int x = 20;
    Test t1(x);
    cout << t1.getT() << endl; // 20 
    x = 30;
    cout << t1.getT() << endl; // 30 
    return 0;
}

// initialize a member object without default
// constructor
#include <iostream>
using namespace std;

class A
{
    int i;

public:
    A(int);
};

 A :: A(int arg)
{
    i = arg;
    cout << "A's Constructor called: Value of i: " << i
         << endl;
}

// Class B contains object of A
class B
{
    A a;

public:
    B(int);
};

B :: B(int x) : a(x)
{ // Initializer list must be used
    cout << "B's Constructor called";
}

int main()
{
    B obj(10);
    return 0;
}
