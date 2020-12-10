#include <iostream>
using namespace std;

void drawTri(int n)
{
    if (n == 0)
    {
        return;
    }

    drawTri(n - 1);
    for (size_t i = 0; i < n; i++)
    {
        cout << '*';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    drawTri(n);
    return 0;
}