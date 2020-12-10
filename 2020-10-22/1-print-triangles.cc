#include <iostream>
using namespace std;
int main()
{

    // 请在下方添加代码
    /********** Begin *********/
    int layer;
    cin >> layer;
    for (int i = 0; i < layer; ++i)
    {
        for (int j = 0; j < layer - i - 1; ++j)
        {
            cout << ' ';
        }

        for (int k = 0; k < 2 * i + 1; ++k)
        {
            cout << '*';
        }

        // for (int j = 0; j < layer - i - 1; ++j) {
        //     cout << ' ';
        // }

        cout << endl;
    }

    /********** End **********/

    return 0;
}
