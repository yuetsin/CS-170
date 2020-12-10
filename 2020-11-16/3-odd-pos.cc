// 请在下方添加代码
/********** Begin *********/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 1; i < input.size(); i += 2)
    {
        cout << input[i];
    }
    cout << endl;
    return 0;
}
/********** End **********/