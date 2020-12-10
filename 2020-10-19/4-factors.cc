#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    // 请在下方添加代码
    /********** Begin *********/

    int n;
    cin >> n;

    vector<int> factors;

    for (int i = 1; i <= n; ++i)
    {
        if ((n / i) * i == n)
        {
            factors.push_back(i);
        }
    }

    for (int i = 0; i < factors.size() - 1; ++i)
    {
        cout << factors[i] << ' ';
    }

    cout << factors[factors.size() - 1] << endl;

    /********** End **********/
    return 0;
}
