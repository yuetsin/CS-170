// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;
int main() 
{
    int cnt, people;
    cin >> cnt >> people;

    bool *lights = new bool[cnt];
    for (int i = 0; i < cnt; ++i) {
        lights[i] = false;
    }

    for (int j = 1; j <= people; ++j) {
        for (int k = j; k <= cnt; k += j) {
            lights[k - 1] = !lights[k - 1];
        }
    }

    for (int l = 0; l < cnt; ++l) {
        if (lights[l]) {
            cout << l + 1 << ' ';
        }
    }
    return 0;
}
/********** End **********/

