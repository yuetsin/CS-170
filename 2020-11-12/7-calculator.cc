// 请在下方添加代码
/********** Begin *********/
#include <iostream>
using namespace std;

int main()
{
    int left, right;
    char op;
    cin >> left >> op >> right;

    cout << left << op << right << '=';
    switch (op)
    {
    case '+':
        cout << left + right;
        break;
    case '-':
        cout << left - right;
        break;
    case '*':
        cout << left * right;
        break;
    case '/':
        cout << left / right;
        break;
    }
    cout << endl;
    return 0;
}
/********** End **********/