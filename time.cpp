#include <bits/stdc++.h>
using namespace std;
class timec
{
private:
    int hrs, min, sec;
    int addedTime;

public:
    timec()
    {
        hrs = 0;
        min = 0;
        sec = 0;
        addedTime = 0;
    }
    timec(int hrs, int min, int sec)
    {
        this->hrs = hrs;
        this->min = min;
        this->sec = sec;
    }
    void show()
    {
        cout << hrs << ":" << min << ":" << sec << endl;
    }
    void add(timec t, timec &newt)
    {
        int secondSum = this->sec + t.sec;
        int minSum = this->min + t.min;
        int hourSum = this->hrs + t.hrs;
        int secondCarry = 0, minCarry = 0;
        if (secondSum >= 60)
        {
            secondCarry = (secondSum) / 60;
            secondSum = secondSum - 60;
        }
        minSum += secondCarry;
        if (minSum >= 60)
        {
            minCarry = (minSum) / 60;
            minSum = minSum - 60;
        }
        hourSum += minCarry;
        newt.hrs = hourSum, newt.min = minSum, newt.sec = secondSum;
    }
};
int main()
{
    timec t1(15, 45, 30);
    timec t2(15, 45, 30);
    timec t3;
    t1.show();
    t2.show();
    t1.add(t2, t3);
    t3.show();
}
