#include <iostream>
using namespace std;
class MyNumber
{
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Arithmetic Operators (+, -)
    MyNumber operator+(const MyNumber &other) const
    {
                            //  15 
        return MyNumber(value + other.value);
    }

    MyNumber operator-(const MyNumber &other) const
    {
        return MyNumber(value - other.value);
    }

    // Increment (++)
    MyNumber &operator++()
    {
        ++value;
        return *this;
    }

    MyNumber operator++(int)
    {
        MyNumber temp = *this;
        ++(*this);
        return temp;
    }

    // Decrement (--)
    MyNumber &operator--()
    {
        --value;
        return *this;
    }

    MyNumber operator--(int)
    {
        MyNumber temp = *this;
        --(*this);
        return temp;
    }

    // Comparison Operators (==, !=, <, >, <=, >=)
    bool operator==(const MyNumber &other) const
    {
        return value == other.value;
    }

    bool operator!=(const MyNumber &other) const
    {
        return !(*this == other);
    }

    bool operator<(const MyNumber &other) const
    {
        return value < other.value;
    }

    bool operator>(const MyNumber &other) const
    {
        return value > other.value;
    }

    bool operator<=(const MyNumber &other) const
    {
        return value <= other.value;
    }

    bool operator>=(const MyNumber &other) const
    {
        return value >= other.value;
    }

    // Assignment Operator (=)
    MyNumber &operator=(const MyNumber &other)
    {
        if (this != &other)
        {
            value = other.value;
        }
        return *this;
    }

    // Bitwise Left Shift (<<)
    MyNumber operator<<(int shift) const
    {
        return MyNumber(value << shift);
    }

    friend ostream &operator<<(ostream &os, const MyNumber &obj);
};

// Output operator (<<)
ostream &operator<<(ostream &os, const MyNumber &obj)
{
    os << obj.value;
    return os;
}
int main()
{
    MyNumber num1(10);
    MyNumber num2(5);

    // Arithmetic operations
    MyNumber sum = num1 + num2;
    MyNumber diff = num1 - num2;
    cout << "Sum: " << sum << endl;         // Output: 15
    cout << "Difference: " << diff << endl; // Output: 5

    // Increment and decrement
    ++num1;
    cout << "Incremented num1: " << num1 << endl; // Output: 11

    num2--;
    cout << "Decremented num2: " << num2 << endl; // Output: 4

    // Comparison operators
    cout << "num1 == num2: " << (num1 == num2) << endl; // Output: 0 (false)
    cout << "num1 != num2: " << (num1 != num2) << endl; // Output: 1 (true)
    cout << "num1 < num2: " << (num1 < num2) << endl;   // Output: 0 (false)
    cout << "num1 > num2: " << (num1 > num2) << endl;   // Output: 1 (true)
    cout << "num1 <= num2: " << (num1 <= num2) << endl; // Output: 0 (false)
    cout << "num1 >= num2: " << (num1 >= num2) << endl; // Output: 1 (true)

    // Assignment operator
    num1 = num2;
    cout << "num1 after assignment: " << num1 << endl; // Output: 4

    // Bitwise operators
    MyNumber num3(15);
    cout << "num3 before shift: " << num3 << endl; // Output: 15
    num3 = num3 << 2;
    cout << "num3 after left shift: " << num3 << endl; // Output: 60

    return 0;
}
