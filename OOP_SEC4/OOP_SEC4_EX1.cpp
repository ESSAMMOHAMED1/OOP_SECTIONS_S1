#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    static int minAge; // Static member variable to store minimum age

public:
    Person(const string& name, int age) : name(name), age(age) {
        if (minAge == 0 || age < minAge) {
            minAge = age;
        }
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    static int getMinAge() {
        return minAge;
    }
};

// Initializing static member variable
int Person::minAge = 0;

int main() {
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    Person person3("Charlie", 20);

    cout << "Minimum age among all persons: " << Person::getMinAge() << endl;

    return 0;
}
