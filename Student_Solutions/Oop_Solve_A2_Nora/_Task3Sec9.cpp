#include <iostream>

using namespace std;
class Apple
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "how many apple did you take? "; cin >> x;
    }
};
class Mango
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "how many Mango did you take?" ; cin >> y;
 	}
};
class Total : public Apple, public Mango
{
 	public:
 	void sum()
 	{
 	    cout << "total = " << x + y;
 	}
};

int main()
{
 	 Total obj1;
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.sum();
 	 return 0;
}
