#include <bits/stdc++.h>
using namespace std;
class bill{
    private:
       string name;
       int units;
       float cost;

    public:
    void setName(string name){
        this->name=name;
    }
    void setUnits(int units){
        this->units=units;
    }
    void getBill(){
      int x=this->units;
      if(x<=100){
        this->cost=x*60;
      }else if(x<=300){
        this->cost=100*60 + (x-100)*80;
      }
      else{
         this->cost=100*60 +200*80+(x-300)*90 +50;
         this->cost=this->cost+0.15*this->cost;
      }
      this->cost/=100;
    }
    void output(){
      cout<<"name: "<<this->name<<endl;
      cout<<"no of units: "<<this->units<<endl;
      cout<<"total bill: "<<this->cost<<endl;
    }

};
int main(){
  int n;
  cout<<"enter number of users"<<endl;
  cin>>n;
     bill c1[n];
     for(int i=0;i<n;i++){
      string s;
      cout<<"enter name:"<<endl;
      cin>>s;
      int x;
      cout<<"enter units:"<<endl;
      cin>>x;
      c1[i].setName(s);
      c1[i].setUnits(x);
      c1[i].getBill();
     }
     for(int i=0;i<n;i++){
      c1[i].output();
     }
}
