#include <iostream>

using namespace std;
class Mammals {
public:
    void getMammals()
    {
        cout<<  "I am mammal" <<endl;
    }

};

class MarineAnimals {
public:
    void getMarineAnimals()
    {
        cout << "I am a marine animal" << endl;
    }


};
class BlueWhale : public Mammals , public MarineAnimals {
public:
    void getBlueWhale()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals"<<endl;

    }


};
int main()
{
    Mammals M1;
    MarineAnimals M2;
    BlueWhale B1;

    M1.getMammals();
    M2.getMarineAnimals();
    B1.getBlueWhale();
    B1.getMammals();
    B1.getMarineAnimals();
    return 0;
}
