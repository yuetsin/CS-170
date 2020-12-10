// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;
int main()
{

    double water_amount, cost;
    cin >> water_amount;

    if (water_amount <= 10)
    {
        cost = water_amount * 1.5;
    }
    else
    {
        cost = 15 + (water_amount - 10) * 2;
    }

    cout << cost << endl;

    return 0;
}
/********** End **********/
