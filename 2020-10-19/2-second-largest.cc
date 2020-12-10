#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // 请在下方添加代码
    /********** Begin *********/

    vector<int> numbers;
    int number_count;
    cin >> number_count;

    for (int i = 0; i < number_count; ++i)
    {
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }

    sort(numbers.begin(), numbers.end());
    cout << numbers[numbers.size() - 2] << endl;

    /********** End **********/
    return 0;
}
