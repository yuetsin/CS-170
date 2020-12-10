#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec;
    int tmp;
    while (cin >> tmp)
    {
        vec.push_back(tmp);
    }
    auto iter = vec.begin();
    while (iter != vec.end())
    {
        auto found = find(vec.begin(), vec.end(), *iter);
        if (found != iter)
        {
            iter = vec.erase(iter);
            if (iter != vec.end())
            {
                continue;
            }
            else
            {
                break;
            }
        }
        ++iter;
    }

    for (auto v : vec)
    {
        cout << v << ' ';
    }
}