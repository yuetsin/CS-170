// 请在下方添加代码
/********** Begin *********/
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    set<char, greater<char>> chars;
    string input;
    getline(cin, input);

    for (auto ch : input)
    {
        chars.insert(ch);
    }

    copy(chars.begin(), chars.end(), ostream_iterator<char>(std::cout, ""));

    return 0;
}
/********** End **********/