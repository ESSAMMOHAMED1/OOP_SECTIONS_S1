// define two ways to point in calss member or struct member with pointer

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int val;
};

int main()
{

    A *ptr, d;

    ptr = &d;

    cout << ptr->val; // first way 
    cout << (*ptr).val; // second way
}
