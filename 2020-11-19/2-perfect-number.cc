#include <iostream>
#include <set>

using namespace std;

bool perfectNumber(int n)
{
    static set<int> perfect_numbers = {6, 28, 496, 8128, 33550336};
    return perfect_numbers.find(n) != perfect_numbers.end();
}

int main()
{
    int m, n, counter = 0;
    cin >> m >> n;

    bool touched = false;

    for (int i = m; i <= n; ++i)
    {
        if (perfectNumber(i))
        {
            cout << i << ' ';
            touched = true;
        }
    }

    if (!touched)
    {
        cout << -1;
    }

    return 0;
}
