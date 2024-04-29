#include <iostream>
using namespace std;
class Complex
{
public:
    double real;
    double imag;

    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex addComplex(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
};

int main()
{
    Complex first(3.0, 4.0);
    Complex second(1.5, 2.5);

    Complex third = addComplex(first, second);

    cout << "Result: " << third.real << " + " << third.imag << "i" << endl;

    return 0;
}
