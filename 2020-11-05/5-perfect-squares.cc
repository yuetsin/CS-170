// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;
int main()
{
    int c;
    cin >> c;

    for (int i = 1; i < 46341; ++i)
    {
        int sqrt = i * i;
        if (sqrt == c)
        {
            cout << "true" << endl;
            return 0;
        }
        else if (sqrt > c)
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "false" << endl;
    return 0;
}
/********** End **********/
