#include <iostream>
using namespace std;

int fib()
{
    static int a = 1, b = 0;
    int tmp = a;
    a = a + b;
    b = tmp;
    return b;
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
        cout << fib() << endl;
    return 0;
}
