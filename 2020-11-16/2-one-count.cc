// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int min_line = 0, min_count = -1;
    int tmp;

    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        for (int j = 0; j < size; ++j)
        {
            cin >> tmp;
            sum += tmp;
        }
        if (sum > min_count)
        {
            min_line = i;
            min_count = sum;
        }
    }

    cout << min_line << endl;
    return 0;
}
/********** End **********/