#include <iostream>
using namespace std;

int get_f(int v)
{
    string str = to_string(v);
    int sum = 0;
    for (auto ch : str)
    {
        sum += ch - '0';
    }
    return sum;
}

int main()
{

    // 请在下方添加代码
    /********** Begin *********/

    int n;
    cin >> n;

    for (int i = 0; i < 10; ++i)
    {
        n = get_f(n);
    }

    cout << n << endl;

    /********** End **********/

    return 0;
}
