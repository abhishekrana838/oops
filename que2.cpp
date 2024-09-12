#include <iostream>
#include <math.h>
using namespace std;

int area(int n)
{
    cout<<"area of square"<<endl;
    return n * n;
}
int area(int n, int m)
{
    cout << "area of rectangle" << endl;
    return n * m;
}
int area(int n, int m, int l)
{
    cout << "area of triangle" << endl;
    int s = n + m + l;
    s = s / 2;
    s = (s * (s - n) * (s - m) * (s - l));
    int ans = sqrt(s);
    return ans;
}
int main()
{
    cout << area(5) << endl;
    cout << area(3, 5) << endl;
    cout << area(4, 5, 6) << endl;
}