#include <iostream>
using namespace std;
class Num
{
    int *p;

public:
    Num() { p = new int; }
    Num(const Num &obj)
    {
        p = new int;
        set(*(obj.p));
    }
    void set(int n) { *p = n; }
    int get() { return *p; }
    ~Num() { delete p; }
};

int main()
{
    Num t1, t2;
    t1.set(7);
    t2 = t1;
    t2.set(11);
    cout << t1.get() <<" ";
    Num t3 = t2;
    t3.set(9);
    cout << t2.get();
    return 0;
}