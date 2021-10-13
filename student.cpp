
#include<iostream>
#include<string>
using namespace std ;

class student {

 string name;
 int arr[6];
 int id;

 public :
 
  void get(void);
  void result(void);
};

 void  student ::get(void){

    cout<<"enter the name of student "<<endl;
     cin>>name;

    cout<<"student id"<<endl;
    cin>>id;
    
      for(int i=1;i<=6;i++){
       cout<<" enter mark of "<<(i)<<" subject "<<endl;
       cin>>arr[i];
       }  
}

void student :: result(void){

  int tot=0;
  float avg=0.0;
       cout<<"NAME "<<name<<endl;
       cout<<"student id  "<<id<<endl;

      for(int i=1;i<=6;i++){
       tot+=arr[i];
       
       }  
    cout<<"total marks of 6 subject => "<<tot<<endl;
    avg=(tot)/6;
    cout<<"avf of 6 subject => "<<avg<<endl;
    
     for(int i=1;i<=6;i++){
       if(arr[i]<35)
          cout<<"fail"<<endl;
        
       else
        cout<<"pass"<<endl;
       }  

 }

int main(){

student st1,st2;
st1.get();
st1.result();
st2.get();
st2.result();


return 0;
}



    

