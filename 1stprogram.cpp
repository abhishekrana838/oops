#include<iostream>
using namespace std;
class student
{
   public:
   string name;
   int age;
   string grade;
};

int main(){
    student s1;
    s1.name ="rohit";
    s1.age = 21;

    cout<<s1.age<<" "<<s1.name;
}
