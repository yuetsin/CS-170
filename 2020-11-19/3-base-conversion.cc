#include <iostream>
using namespace std;

void printInt(int n, int base)
{
    static const char digits[] = "0123456789ABCDEF";

    if (n == 0)
    {
        return;
    }

    printInt(n / base, base);
    cout << digits[n % base];
}

int main()
{
    int n, base;
    cin >> n >> base;

    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        printInt(n, base);
    }

    return 0;
}
