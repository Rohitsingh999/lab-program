#include<iostream>
using namespace std;

class base {

 int a;
 void read();
public :

void fun(void){
read();
}
};

void base ::read(void){
 
cout<<"enter value of a"<<endl;
cin>>a;
cout<<a;
}
int main(){

base obj;

obj.fun();




return 0;
}
