// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string string_a, string_b;
    getline(cin, string_a);
    getline(cin, string_b);

    int strlen_a = string_a.size(), strlen_b = string_b.size();

    if (strlen_a < strlen_b)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i <= strlen_a - strlen_b; ++i)
    {
        if (string_a.substr(i, strlen_b) == string_b)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
/********** End **********/