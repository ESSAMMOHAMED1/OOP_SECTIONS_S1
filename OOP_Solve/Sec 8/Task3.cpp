#include <iostream>
#include <string>
using namespace std;

class student{

int value;

public:

student(int val):value(val){}

bool operator<(const student &other) const
    {
        return value < other.value;
    }

};




int main(){

student s1(220);
student s2 (30);
if (s1 < s2){

    cout<<"student 1 < student 2 ";
}
else
    cout<<"student 2 < student 1 ";
















}
