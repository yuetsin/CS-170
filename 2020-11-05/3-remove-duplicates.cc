#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec, new_vec;
    int tmp;
    while (cin >> tmp)
    {
        vec.push_back(tmp);
    }

    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
    {
        if (find(vec.begin(), vec.end(), *iter) == iter)
        {
            new_vec.push_back(*iter);
        }
    }

    for (auto v : new_vec)
    {
        cout << v << ' ';
    }
}