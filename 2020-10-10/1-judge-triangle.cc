// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "no" << endl;
        return 0;
    }

    int as = a * a, bs = b * b, cs = c * c;
    if (as + bs == cs || as + cs == bs || bs + cs == as)
    {
        cout << "yes" << endl
             << "yes" << endl;
    }
    else
    {
        cout << "yes" << endl
             << "no" << endl;
    }
    return 0;
}
/********** End **********/
