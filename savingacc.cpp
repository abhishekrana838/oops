#include <bits/stdc++.h>
using namespace std;
class savingAccount
{
private:
    double savingsBalance;

public:
    static int annualInterestRate;
    savingAccount()
    {
        this->savingsBalance = 0.0;
    }
    savingAccount(double x)
    {
        this->savingsBalance = x;
    }
    static void modifyInterestRate(int x)
    {
        annualInterestRate = x;
    }
    void calculateMonthlyInterest()
    {
        double interest = (annualInterestRate * savingsBalance) / 12;
        this->savingsBalance += interest;
    }
    void display()
    {
        cout << "Savings balance: " << savingsBalance << endl;
    }
};
int savingAccount::annualInterestRate = 0;
int main()
{
    savingAccount saver1(2000.0), saver2(3000.00);
    savingAccount::modifyInterestRate(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.display();
    saver2.display();
    savingAccount::modifyInterestRate(5);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.display();
    saver2.display();
   
}
