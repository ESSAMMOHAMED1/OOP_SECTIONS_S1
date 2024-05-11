#include <iostream>

using namespace std;
class FName{
public:
    string fName;
    void FirstName()
    {
        cout<<"first name"<<endl;
        cin >> fName ;
    }
};
class SName : public FName {
public:

    string sName;
     void SecoundName()
    {
        cout<<"secound name"<<endl;
        cin >> sName ;
    }

};
class LastName : public SName {
public:
    string lName;
    string full;
     void lastName()
    {
        cout<<"last name"<<endl;
        cin >> lName ;
    }

     void FullName()
    {

        string full = fName + " " + sName + " " + lName;
        cout << "Full name: " << full << endl;
    }

};
int main()
{
    LastName obj;
    FName F1;
    SName S1;

    F1.FirstName();
    S1.SecoundName();
    obj.lastName();
    obj.FullName();



    return 0;
}
