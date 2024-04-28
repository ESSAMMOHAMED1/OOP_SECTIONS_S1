#include <iostream>
#include <string>
using namespace std;

class bank
{
  string name;
  int acc;
  float balance;

public:
  bank(string n, int a, float b)
  {

    name = n;
    acc = a;
    balance = b;
  }
  void Deposit_fun(float am)
  {
    balance += am;
  }

  void withdraw_fun(float am)
  {
    if (balance > am)

      balance -= am;
  }

  void display_fun()
  {

    cout << name << endl;
    cout << acc << endl;
    cout << balance << endl;
  }
};

int main()
{

  bank b("mohamed", 5031, 5000);

  b.Deposit_fun(2000);
  b.display_fun();
  cout << "-----------------------" << endl;
  b.withdraw_fun(3000);
  b.display_fun();
}
