#include <iostream>
using namespace std;

int GetApple(int a[], int height, int n)
{
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= height || a[i] <= height + 30)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int n, tmp, heights;
    cin >> n;

    int apples[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        apples[i] = tmp;
    }

    cin >> heights;

    cout << GetApple(apples, heights, n) << endl;

    return 0;
}
