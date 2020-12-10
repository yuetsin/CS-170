#include <iostream>
using namespace std;

long long fact(int value)
{
    long long v = 1;
    for (int i = 2; i <= value; ++i)
    {
        v *= i;
    }

    return v;
}

string get_c(int m, int n)
{
    return to_string(fact(n) / (fact(m) * fact(n - m)));
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << ((n >= m) ? get_c(m, n) : "wrong!") << endl;
    return 0;
}