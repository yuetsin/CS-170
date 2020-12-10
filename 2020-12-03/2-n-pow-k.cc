#include <iostream>
using namespace std;

long long int pow(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    long long int tmp = pow(n, k / 2);
    if (k % 2)
    {
        return n * tmp * tmp;
    }
    else
    {
        return tmp * tmp;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << pow(n, k);
    return 0;
}