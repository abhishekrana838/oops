#include<iostream>
using namespace std;
class student
{
   string name;
   int age;
   string grade;
   public:
   void setname(string n){
        name = n;
   }
   void setage(int b){
    age = b;
   }
   void getname(){
    cout<<name<<endl;
   }
   void getage(){
    cout<<age<<endl;
   }
};

int main(){
    student s1;
    s1.setname("rohit");
    s1.setage(10);
    s1.getname();
    s1.getage();

  
}