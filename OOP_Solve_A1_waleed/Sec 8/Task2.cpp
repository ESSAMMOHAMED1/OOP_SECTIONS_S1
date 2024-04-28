#include <iostream>
#include <string>
using namespace std;



class Integer
{
private:
    int value;

public:
    Integer(int val ) : value(val) {}

    Integer operator+(const Integer& other)
    {
        return Integer(value + other.value);
    }

    friend ostream& operator<<(ostream& os, const Integer& i)
    {
        os << i.value;
        return os;
    }
};

int main()
{
    Integer nu1(10);
    Integer nu2(25);
    Integer result = nu1 + nu2;
    cout << result << endl;
    return 0;
}



