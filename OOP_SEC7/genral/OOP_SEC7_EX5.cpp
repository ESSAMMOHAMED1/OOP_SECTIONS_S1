// creat a global variabel and creat two methods to increamend and descriment

// hint : use static variabel

#include <bits/stdc++.h>
using namespace std;

class A

{
public:
    static int x;

    void increament()
    {
        x++;
    }
    void descreament()
    {
        x--;
    }
};

int A ::x = 0;

int main()
{
    A a, b;
    a.increament(); // +1
    b.increament(); // +1
    a.increament(); // +1
    b.descreament(); // -1
    cout << A :: x << endl; // 2 
}