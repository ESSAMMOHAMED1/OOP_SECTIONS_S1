#include <iostream>
using namespace std;

class emp {
private:
    string name;

protected:
    int age;
    int ID;

public:
    emp() {

        age = 0;
        ID = 0;
    }
};

class eng : protected emp {
public:
    int age = 20;
    int ID = 20223;

    eng() {

        age = 20;
        ID = 20223;
    }

    void displayData() {
        cout << "Age: " << age << ", ID: " << ID << endl;
    }
};

int main() {
    eng obj;
    obj.displayData();

    return 0;
}
