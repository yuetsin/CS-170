// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> &vec, int from, int to, int target)
{
    if (from >= to - 1)
    {
        if (vec[from] < target)
        {
            return from + 1;
        }
        else
        {
            return from;
        }
    }
    int mid = (from + to) / 2;
    if (vec[mid] < target)
    {
        return binary_search(vec, mid, to, target);
    }
    else
    {
        return binary_search(vec, from, mid, target);
    }
}

int main()
{
    vector<int> vec;
    int n, x;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }
    cin >> x;

    cout << binary_search(vec, 0, vec.size(), x);

    return 0;
}
/********** End **********/
