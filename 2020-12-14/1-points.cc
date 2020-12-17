#include <iostream>
using namespace std;

void mov(int& x, int& y, int xmov, int ymov)
{
    x += xmov;
    y += ymov;
}

int main()
{
    int x, y;
    cin >> x >> y;
    //调用move函数，向右移动5格，向上移动1格
    mov(x, y, 5, 1);
    cout << x << ' ' << y << endl;
    //调用move函数，向左移动4格，向下移动10格

    mov(x, y, -4, -10);
    cout << x << ' ' << y << endl;
    return 0;
}