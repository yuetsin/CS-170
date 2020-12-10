// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
    int line_count;
    cin >> line_count;

    string alphas = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
    string numerics = "1234567890";
    string emptys = " \t\r\n";
    string tmp;

    int alpha_count = 0, numerics_count = 0, others_count = 0;

    for (int i = 0; i <= line_count; ++i)
    {
        getline(cin, tmp);
        for (auto ch : tmp)
        {
            if (alphas.find(ch) != alphas.npos)
            {
                ++alpha_count;
            }
            else if (numerics.find(ch) != numerics.npos)
            {
                ++numerics_count;
            }
            else if (emptys.find(ch) == emptys.npos)
            {
                ++others_count;
            }
        }
    }

    cout << "英文字母：" << alpha_count << endl;
    cout << "数字：" << numerics_count << endl;
    cout << "其他字符：" << others_count << endl;

    return 0;
}
/********** End **********/