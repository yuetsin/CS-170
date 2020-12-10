#include <iostream>
using namespace std;
int main()
{

    // 请在下方添加代码
    /********** Begin *********/
    int n, p;
    cin >> n >> p;

    int count = 0;
    for (int i = 2; i <= n; ++i)
    {
        int fact = i;
        while (true)
        {
            if (fact % p == 0)
            {
                fact /= p;
                ++count;
            }
            else
            {
                break;
            }
        }
    }

    cout << count << endl;

    /********** End **********/

    return 0;
}
