#include <iostream>

using namespace std;

// common vs. unique
// coomn data like data can be more than class have it like (name , id  , address , ... etc)

// is-a relathionship (means that is a somthing like (student is-a person and so on ))
class Person
{
public:
    int age;
    string name;
    void getName()
    {
        cout << name << endl;
    }
};

class Student : public Person
{
    // her student is a Person have age and name (we can avoid duplicating name and age)
    // int age;
    // string name;
    Student()
    {
        cout << name << endl // use the person data members
             << age << endl;
    }
};

// is-a hierarchy (the same way we can make normal hierarchy)

// how can avoid duplicating (by inheret class Essam from employee )

class Employee
{
public:
    int age;
    string name;
    string address;
};

class Essam : public Employee
{
public:
    // we can use data members now

    Essam()
    {
        cout << name << endl
             << age << address << endl;
    }
};

// soultion for data hiding ( protected access modifier ) ----> half and half soultion
// in if we inhert a class we can't access privite data members and if we use public we will break (data hiding)
// then we use (protected access modifir )

class Modifir
{
private:
    int PVdata;

public:
    int PubData;

protected:
    int Protecdata;
};

class Inherert : public Modifir
{
    Inherert()
    {
        // cout << PVdata << endl;     // member "Modifir::PVdata"  is inaccessible
        cout << PubData << endl;    // can access as we know
        cout << Protecdata << endl; // can access in inhert class but can't access out of it
    }
};

// composition has-a relathionship
// composition is most used and refferd than inheritance
// composition is easy just make an object and use it in class like you use it in main
class Comp
{
private:
    int data;

public:
    Comp() {}
    Comp(int data) : data(data){};
    int getData()
    {
        return data;
    }
    ~Comp(){};
};

class Comp2
{
    Comp comp1 = Comp(13); // creat object of Copm and set data

public:
    Comp2()
    {
        // get data by use object like in main that is simpel as you know 😁
        cout << comp1.getData() << endl;
    };
};

// public inheritance as we use it in any class Rules ( public still public , private still private and protected still protected  )

// private inheritance (mostly we don't use it ) Rules ( public convert to private  , private still privete and protected convert to private  )

// protected inheritance (mostly we don't use it ) Rules ( public convert to protected  , private still private and  protected still protected  )

// multiple inheritance
class P
{
protected:
    int ES;

public:
    P(){};
};

class C1 : public P
{
private:
    /* data */
public:
    C1();
    ~C1();
    int getES()
    {
        return ES;
    }
};

class C2 : public P
{
private:
    /* data */
public:
    C2(/* args */);
    ~C2();
};

class C3 : public C1, public C2
{
    C3()
    {
        getES();
    }
};

// multilevel inheritance
class C4 : public C3, public C2, public C1, public P
{
};

// constructor and destructor inheritance (setup first , order of run )

class STU
{
private:
    int esq;

public:
    STU(int esq) : esq(esq){};

    ~STU()
    {
        cout << "destractor STU";
    }
};

class STD : public STU
{
    STD() : STU(12)
    {
    }

    ~STD()
    {
        cout << "destractor STU";
    }
};

// member function override (parent and chield )

class STA
{
private:
    int esq;

public:
    STA(int esq) : esq(esq){};

    int getname(int ibm)
    {
        return ibm;
    }

    int getname(int a, int b)
    {
        return a + b;
    }

    ~STA()
    {
        cout << "destractor STU";
    }
};

class STB : public STA
{

    int getname(int ibm)
    {
        return ibm + 12;
    }
    STB() : STA(12)
    {
    }

    ~STB()
    {
        cout << "destractor STB";
    }
};

// inhert constractor in gun++11 ( * using class :: constructor * )
class STA
{
private:
    int esq;

public:
    STA(int esq) : esq(esq){};
    STA() {}
    STA(int x, int y) {}
    STA(string name) {}

    int getname(int ibm)
    {
        return ibm;
    }

    int getname(int a, int b)
    {
        return a + b;
    }

    ~STA()
    {
        cout << "destractor STU";
    }
};

class STB : private STA
{

    using STA ::STA;
    int getname(int ibm)
    {
        return ibm + 12;
    }

    STB() : STA(12)
    {
    }

    ~STB()
    {
        cout << "destractor STB";
    }
};

// prevent class inheritance (using final)

class MAKER final
{
    // some code
};

// class M1 : MAKER { // a 'final' class type cannot be used as a base class

// some code

// };
//

//================================================================================

// reading homework

// code reusability

//  C++ STLs Exception Hierarchy

int main()
{
}
