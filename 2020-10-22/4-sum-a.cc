#include <iostream>
using namespace std;
int main()
{
    // 请在下方添加代码
    /********** Begin *********/
    char a;
    int n;

    cin >> a >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += stoi(string(i, a));
    }

    cout << sum << endl;

    /********** End **********/

    return 0;
}
