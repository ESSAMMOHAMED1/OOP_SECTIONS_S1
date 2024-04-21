#include <iostream>
#include <cstring>

using namespace std;

class Father
{
private:
    string name;
    char **children;
    int numOfCh;

public:
    // Default constructor
    Father(string nameParam, int numOfChildren)
    {
        name = nameParam;
        numOfCh = numOfChildren;
        children = new char *[numOfCh];
        for (int i = 0; i < numOfCh; i++)
            children[i] = new char[20];
    }

    // Copy constructor
    Father(const Father &other)
    {
        name = other.name;
        numOfCh = other.numOfCh;
        children = new char *[numOfCh];
        for (int i = 0; i < numOfCh; i++)
        {
            children[i] = new char[20];
            strcpy(children[i], other.children[i]);
        }
    }

    // Destructor to free memory
    ~Father()
    {
        for (int i = 0; i < numOfCh; i++)
            delete[] children[i];
        delete[] children;
    }

    // Method to add a child
    void addChild(char childName[], int ind)
    {
        strcpy(children[ind], childName);
    }

    // Method to display father's information
    void displayInfo()
    {
        cout << "Father's Name: " << name << endl;
        cout << "Children:" << endl;
        for (int i = 0; i < numOfCh; i++)
            cout << "- " << children[i] << endl;
    }
};

int main()
{
    // Creating an object using default constructor
    Father father1("John Doe", 3);
    father1.addChild("Alice", 0);
    father1.addChild("Bob", 1);
    father1.addChild("Charlie", 2);
    cout << "Father 1:" << endl;
    father1.displayInfo();

    // Creating an object using copy constructor
    Father father2 = father1;
    cout << "\nFather 2 (Copy of Father 1):" << endl;
    father2.displayInfo();

    return 0;
}
