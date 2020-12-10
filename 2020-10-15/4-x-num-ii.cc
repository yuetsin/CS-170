// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is_x_number(int i)
{
    string buf = to_string(i);

    int cube_sum = 0;
    for (char ch : buf)
    {
        cube_sum += int(pow(ch - '0', 3));
    }
    return cube_sum == i;
}

int main()
{
    const int max_number = 5000;
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "no" << endl;
        return -1;
    }

    bool first = true;
    for (int i = a; i <= min(b, max_number); ++i)
    {
        if (is_x_number(i))
        {
            if (!first)
            {
                cout << ' ';
            }
            first = false;
            cout << i;
        }
    }
    if (first)
    {
        cout << "no";
    }
    cout << endl;
}
/********** End **********/
