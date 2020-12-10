// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    char key;
    cin.get(key);

    auto index = input.rfind(key);
    if (index != input.npos)
    {
        cout << "Index=" << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
/********** End **********/