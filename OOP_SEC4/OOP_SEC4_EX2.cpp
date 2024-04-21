#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    static double totalSalary; // Static member variable to store total sum of salaries
    static double highestSalary; // Static member variable to store highest salary
    static string highestPaidEmployee; // Static member variable to store name of employee with highest salary

public:
    // Default constructor
    Employee() : name(""), salary(0.0) {}

    // Parameterized constructor
    Employee(const string& name, double salary) : name(name), salary(salary) {
        totalSalary += salary; // Increment total salary
        if (salary > highestSalary) {
            highestSalary = salary;
            highestPaidEmployee = name;
        }
    }

    // Getter and setter for name
    string getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }

    // Getter and setter for salary
    double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        totalSalary -= salary; // Deduct old salary from total salary
        salary = newSalary;
        totalSalary += salary; // Add new salary to total salary

        if (salary > highestSalary) {
            highestSalary = salary;
            highestPaidEmployee = name;
        }
    }

    // Static member function to get highest salary
    static double getHighestSalary() {
        return highestSalary;
    }

    // Static member function to get name of employee with highest salary
    static string getHighestPaidEmployee() {
        return highestPaidEmployee;
    }

    // Static member function to get total salary of all employees
    static double getTotalSalary() {
        return totalSalary;
    }
};

// Initializing static member variables
double Employee::totalSalary = 0.0;
double Employee::highestSalary = 0.0;
string Employee::highestPaidEmployee = "";

int main() {
    Employee emp1("Alice", 50000.0);
    Employee emp2("Bob", 60000.0);
    Employee emp3("Charlie", 55000.0);

    cout << "Total salary of all employees: $" << Employee::getTotalSalary() << endl;
    cout << "Highest salary: $" << Employee::getHighestSalary() << " earned by " << Employee::getHighestPaidEmployee() << endl;

    return 0;
}
