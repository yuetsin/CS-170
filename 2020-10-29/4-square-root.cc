#include <iostream>
using namespace std;

int main()
{
    int x, sqr;
    cin >> x;

    for (int i = 0; i < x; ++i)
    {
        sqr = i * i;
        if (sqr > x)
        {
            cout << i - 1 << endl;
            return 0;
        }
        else if (sqr == x)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
