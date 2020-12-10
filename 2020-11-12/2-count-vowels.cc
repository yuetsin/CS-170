// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int bin_op(int v, char chr)
{
    static string vowels = "AEIOUaeiou";
    if (vowels.find(chr) != vowels.npos)
    {
        // cout << "+" << endl;
        return v + 1;
    }
    else
    {
        // cout << "-" << endl;
        return v;
    }
}

int main()
{
    string input;
    getline(cin, input);
    cout << "Count=" << accumulate(input.begin(), input.end(), 0, bin_op) << endl;
    return 0;
}
/********** End **********/