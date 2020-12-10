#include <iostream>
using namespace std;

int main()
{

    // 请在下方添加代码
    /********** Begin *********/
    int n;
    cin >> n;

    int count = 0;

    while (true)
    {
        if (n % 2 == 0)
        {
            ++count;
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            ++count;
            n = n / 3 * 2;
        }
        else if (n % 5 == 0)
        {
            ++count;
            n = n / 5 * 4;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    /********** End **********/

    return 0;
}
