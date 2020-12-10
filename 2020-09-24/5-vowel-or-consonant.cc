// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;
int main()
{

    char chr;
    cin >> chr;

    switch (chr)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "vowel" << endl;
        break;

    default:
        cout << "consonant" << endl;
    }

    return 0;
}
/********** End **********/
