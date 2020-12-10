#include <iostream>
#include <iomanip>
using namespace std;

double Calculate(double x, double y)
{
    return 1 / ((1 / x + 1 / y) / 2);
}
// 请不要修改 main 函数
// ok

int main()
{
    int t;
    double x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << fixed << setprecision(3) << Calculate(x, y) << endl;
    }
}