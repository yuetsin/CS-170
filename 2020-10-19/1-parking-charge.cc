#include <iostream>
using namespace std;
int main()
{
    // 请在下方添加代码
    /********** Begin *********/
    char type;
    int in_time, out_time;
    cin >> type >> in_time >> out_time;
    int raw_time = out_time - in_time;

    int cost;
    switch (type)
    {
    case 'b':
        if (raw_time <= 2)
        {
            cost = raw_time * 10;
        }
        else
        {
            cost = 2 * 10 + (raw_time - 2) * 15;
        }
        break;
    case 'c':
        if (raw_time <= 3)
        {
            cost = raw_time * 5;
        }
        else
        {
            cost = 3 * 5 + (raw_time - 3) * 10;
        }
        break;
    case 't':
        if (raw_time <= 1)
        {
            cost = raw_time * 10;
        }
        else
        {
            cost = 1 * 10 + (raw_time - 1) * 15;
        }
        break;
    }

    cout << cost << endl;
    /********** End **********/
    return 0;
}
