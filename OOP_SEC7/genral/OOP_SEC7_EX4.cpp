// initialize the const by user input using constractor and Initializer list

#include <bits/stdc++.h>
using namespace std;

class A

{
    const int val;

public:
    A(int x) : val(x)
    {
    }
};

int main()
{
    int x;
    cin >> x;
    A obj = A(x);
}
