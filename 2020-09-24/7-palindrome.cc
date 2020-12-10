// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    string input;
    cin >> input;
    string copy = input;

    reverse(copy.begin(), copy.end());
    if (copy == input)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
/********** End **********/
