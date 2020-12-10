#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    if (a > b)
    {
        return Gcd(a - b, b);
    }
    else if (b > a)
    {
        return Gcd(a, b - a);
    }
    else
    {
        return a;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Gcd(a, b);
    return 0;
}