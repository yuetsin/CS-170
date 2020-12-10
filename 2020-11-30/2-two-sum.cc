#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, tmp, target;
    map<int, int> counter;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (counter.find(tmp) == counter.end())
        {
            counter[tmp] = 1;
        }
        else
        {
            ++counter[tmp];
        }
    }
    cin >> target;

    for (const auto &v : counter)
    {
        int lhs = v.first;
        int rhs = target - lhs;
        if (lhs == rhs)
        {
            if (v.second > 1)
            {
                cout << "true" << endl;
                return 0;
            }
        }
        else
        {
            if (counter.find(rhs) != counter.end())
            {
                cout << "true" << endl;
                return 0;
            }
        }
    }

    cout << "false" << endl;

    return 0;
}
