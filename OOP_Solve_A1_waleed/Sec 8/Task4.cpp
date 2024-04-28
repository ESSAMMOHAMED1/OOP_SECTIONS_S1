#include <iostream>
#include <string>
using namespace std;

class Counter
{

    int count;

public:
    Counter &operator++() // pre
    {
        ++count;
        return *this;
    }
    Counter &operator++(int) // post
    {
        count++;
        return *this;
    }
    void Set_Count(int c)
    {

        count = c;
    }
    int Get_Count()
    {

        return count;
    }
};

int main()
{

    Counter c;

    c.Set_Count(0);

    cout << c.Get_Count() << endl;

    ++c;
    cout << c.Get_Count() << endl;

    c++;
    cout << c.Get_Count() << endl;

    return 0;
}
