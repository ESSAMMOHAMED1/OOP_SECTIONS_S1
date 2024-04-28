#include <iostream>
#include <string>
using namespace std;

class car
{

    string model;
    string brand;
    int year;

public:
    void set_model(string m)
    {

        model = m;
    }
    void set_brand(string b)
    {

        brand = b;
    }
    void set_year(int y)
    {

        year = y;
    }
    //--------------
    string getmodel()
    {

        return model;
    }
    string getbrand()
    {

        return brand;
    }
    int getyear()
    {

        return year;
    }
    car() {}
};

int main()
{

    car c2;
    c2.set_brand("Toyota");
    c2.set_model("Camry");
    c2.set_year(2011);
    cout << c2.getbrand() << endl;
    cout << c2.getmodel() << endl;
    cout << c2.getyear();
}
