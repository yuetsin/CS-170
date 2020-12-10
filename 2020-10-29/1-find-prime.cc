#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;

    for (int i = m; i <= n; ++i)
    {
        if (is_prime(i))
        {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
