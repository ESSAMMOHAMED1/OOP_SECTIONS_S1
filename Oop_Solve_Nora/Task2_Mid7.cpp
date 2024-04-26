#include <iostream>

using namespace std;
class frute{
private:
    int Mango;
    int Apple;
    int price;
public:
    void setMango(int m)
     { Mango = m; }
    void setApples(int a)
     { Apple = a; }

    int getMango() const
    { return Mango; }
    int getApple() const
    { return Apple; }

    int getPrice() const
     { return Mango+Apple; }

};

int main() {
     frute F1;
    cout << "Total price: " << F1.getPrice() << endl;

    return 0;
}
