#include <iostream>
#include <string>
using namespace std;


class str
{

    string value;
public:
    str(string val):value(val) {}
    str operator+(const str &other)const
    {

        return str(value+other.value);
    }

friend ostream& operator<<(ostream& os, const str& v)
    {
        os << v.value;
        return os;
    }

};




int main()
{


str s   ( " s " ) ;

str s2("cd");

str r = s() + s2() ;
cout<< r <<endl;


}
