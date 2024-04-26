#include <iostream>
#include <string>
using namespace std;

class player{

string name;

float avarge;

int i;
public:


void change(string i,float a){



cin >> name >> avarge;

}



player(){
cout << "name"<<endl<<"avarge"<<endl;
cin >> name >> avarge;


}


void display(){

cout<<name<<endl;
cout<<avarge<<endl;

}

};


int main(){
string res;

cout<<"input:"<<endl;
player p;


cout<<"do yo change:?(set yes)"<<endl;
cin>>res;
if(res == "yes")

p.change("",0);

cout<<"display:"<<endl;
p.display();
}
