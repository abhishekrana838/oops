#include <bits/stdc++.h>
using namespace std;
class bank
{
private:
  string name;
  long long acc;
  string type;
  double bal = 0.0;

public:
  void setCreds(string name, long long acc, string type)
  {
    this->name = name;
    this->acc = acc;
    this->type = type;
  }
  void deposit(double amount)
  {
    this->bal += amount;
  }
  void withdraw(double amount)
  {
    if (amount > this->bal)
    {
      cout << "Low Balance" << endl;
    }
    else
    {
      this->bal -= amount;
    }
  }
  void display()
  {
    cout << "name: " << this->name << endl;
    cout << "balance: " << this->bal << endl;
  }
};
int main()
{
  bank c1;
  string name;
  long long acc;
  string type;
  cout << "enter name acc no acc type: " << endl;
  cin >> name;
  cin >> acc;
  cin >> type;
  c1.setCreds(name, acc, type);
  double x;
  cout << "enter deposit amount" << endl;
  cin >> x;
  c1.deposit(x);
  double y;
  cout << "enter withdrawal amount" << endl;
  cin >> y;
  c1.withdraw(y);
  c1.display();
}
