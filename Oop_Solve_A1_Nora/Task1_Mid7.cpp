#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
  string name;
  int id;
  int age;

  void getInfo()
  {
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter employee age: ";
    cin >> age;
  }

public:
  Employee()
  {
    getInfo();
  }

  void displayInfo()
  {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "age: " << age << endl;
  }
};

int main()
{
  Employee emp;
  emp.displayInfo();

  return 0;
}
