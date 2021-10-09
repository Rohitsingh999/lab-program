#include<iostream>
using namespace std;

class base{
public :
int x;
static int y;

void printx(){
cout<<x<<endl;
}
void printy(){
cout<<y<<endl;

}
};

int base:: y;

int main(){

base obj1,obj2;

obj1.x=10;
obj1.y=20;
obj2.x=40;
obj2.y=80;
obj1.printx();
obj1.printy();

obj2.printx();
obj2.printy();
return 0;
}
