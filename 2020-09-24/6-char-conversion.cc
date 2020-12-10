// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <cctype>

using namespace std;
int main()
{

    char chr;
    cin >> chr;

    if (isupper(chr))
    {
        cout << char(tolower(chr)) << endl;
    }
    else if (islower(chr))
    {
        cout << char(toupper(chr)) << endl;
    }
    else
    {
        cout << chr << endl;
    }

    return 0;
}
/********** End **********/
