#include <iostream>
using namespace std;
class score
{
private:
    int marks[5];
    int totalmarks = 0;

public:
    void input(int marks[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
    }
    int calculate()
    {
        for (int i = 0; i < 5; i++)
        {
            totalmarks = totalmarks + this->marks[i];
        }
        return totalmarks;
    }
};
int main()
{
    cout << "no. of student";
    int n;
    cin >> n;
    score s[n];
    int temp[5];
    for (int i = 0; i < n; i++)
    {
        cout << "enter marks";
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            temp[i] = x;
        }
        s[i].input(temp);
    }

    int ans = 0;
    int ascore = s[0].calculate();
    // cout<<ascore<<endl;
    for (int i = 1; i < n; i++)
    {
        int t = s[i].calculate();
        // cout<<t<<endl;
        if (ascore < t)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

