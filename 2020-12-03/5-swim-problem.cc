#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

static unordered_map<int, int> map;

int swim(const vector<int> &p, int till)
{
    if (map.find(till) != map.end())
    {
        return map.find(till)->second;
    }
    if (till == 3)
    {
        return p[0] + p[1] + p[2];
    }
    else if (till == 2)
    {
        return p[1];
    }

    int result = min(2 * p[1] + p[0] + p[till - 1], 2 * p[0] + p[till - 1] + p[till - 2]) + swim(p, till - 2);

    map[till] = result;
    return result;
}

int main()
{
    map.clear();
    int n, i, tmp;
    vector<int> p;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        p.push_back(tmp);
    }

    sort(p.begin(), p.end());
    cout << swim(p, n);
    return 0;
}
