#include <iostream>
using namespace std;

int Func(int n)
{
    for (int i = 999; i >= 100; --i)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    if (n < 1000 || n > 1000000)
    {
        cout << "Input error!" << endl;
        return 0;
    }
    int i = Func(n);
    cout << (i == -1 ? "Not found!" : to_string(i)) << endl;
    return 0;
}