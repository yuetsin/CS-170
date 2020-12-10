#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for (int p = 0; p < a.size() - b.size() + 1; ++p)
    {
        if (a.substr(p, b.size()) == b)
        {
            cout << p << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
