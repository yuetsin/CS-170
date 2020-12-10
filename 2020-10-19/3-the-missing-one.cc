#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 请在下方添加代码
    /********** Begin *********/

    int n;
    cin >> n;
    int sum = 0;
    int expect_sum = n * (n + 1) / 2;

    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }

    cout << expect_sum - sum << endl;
    /********** End **********/
    return 0;
}
