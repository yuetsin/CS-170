// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <cmath>

using namespace std;

double distance(double x, double y, double to_x, double to_y)
{
    return sqrt(pow(x - to_x, 2) + pow(y - to_y, 2));
}

int main()
{

    double x, y;
    cin >> x >> y;

    if (distance(x, y, 2, 2) > 1 && distance(x, y, 2, -2) > 1 && distance(x, y, -2, 2) > 1 && distance(x, y, -2, -2) > 1)
    {
        cout << 0;
    }
    else
    {
        cout << 10;
    }

    cout << endl;

    return 0;
}
/********** End **********/
