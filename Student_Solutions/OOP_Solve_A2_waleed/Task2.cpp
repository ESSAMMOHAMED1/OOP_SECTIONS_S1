//1 - For below code snippet, the public and protected members of Superclass becomes """"""""""protected"""""""" members of Sub class.
//class subclass : protected Superclass {
// some code
//}

//2 - give and bref exampel of that with code

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


class superclass
{
public:
    int num1=1;
protected:
    int num2=2;


};

class subclass:protected superclass
{
public:
    void print()
    {

        cout<<"num 1 is public -:"<<num1 <<endl;
        cout<<"num 2 is protected -:"<<num2<<endl;
        cout<<"\nthe public and protected members of Superclass becomes #protected# members of Sub class.\n";
    }

};
int main()
{

    subclass sub;
    sub.print();


}
