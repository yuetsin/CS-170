#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    // 请在下方添加代码
    /********** Begin *********/

    int n, m;
    cin >> n >> m;

    while (n && m)
    {
        int max_v = max(n, m);
        int min_v = min(n, m);
        n = min_v;
        m = max_v % min_v;
    }

    cout << max(n, m) << endl;

    /********** End **********/

    return 0;
}
