#include <iostream>
#include <utility>
#include <map>

using namespace std;

map<int, int> init_table()
{
    map<int, int> table;

    // a can't be 0, you know.
    for (int a = 1; a < 10; ++a)
    {
        for (int b = 0; b < 10; ++b)
        {
            for (int c = 0; c < 10; ++c)
            {
                // 100 * a + 200 * b + 200 * c +
                //  20 * a +  10 * b +  20 * c +
                //   2 * a +   2 * b +   1 * c =
                // 122 * a + 212 * b + 221 * c = m
                table.insert(make_pair<int, int>(122 * a + 212 * b + 221 * c, 100 * a + 10 * b + c));
            }
        }
    }

    return table;
}

int Magic(int m)
{
    /***********begin************/

    static auto table = init_table();

    auto entry = table.find(m);
    if (entry != table.end())
    {
        return entry->second;
    }
    return -1;
    /***********end**************/
}

int main()
{
    int t, m;
    cin >> t;
    while (t--)
    {
        cin >> m;
        int res = Magic(m);
        if (res == -1)
        {
            cout << "The sum you calculated is wrong!\n";
        }
        else
        {
            cout << "The number is " << res << endl;
        }
    }
}
