#include <iostream>
using namespace std;



// functional template
//  template <typename T> ----> define templat
//  Typename of template + regular function define (typename of temblat + argument ) {
//  your code here ;
// }




template <class T, class U>
class A
{
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
};

int main()
{
    // calling fuction<send type you want as argument> (arguments);

    // assiment1 (typeid(variable).name());

    // temblate class

    A<char, char> a;
    A<int, double> b;

    // defult type of temblate
    return 0;
}
