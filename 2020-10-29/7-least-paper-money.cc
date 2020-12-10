#include <iostream>
#include <vector>
#include <map>

using namespace std;

static vector<int> money = {1, 5, 16, 23, 33};

static map<int, int> cache;

int exhausion(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    auto cache_entry = cache.find(n);
    if (cache_entry != cache.end())
    {
        return cache_entry->second;
    }

    int min_arrange;
    bool first = true;

    for (const auto &i : money)
    {
        if (i > n)
        {
            break;
        }
        int new_arrange = exhausion(n - i) + 1;
        if (first || min_arrange > new_arrange)
        {
            first = false;
            min_arrange = new_arrange;
        }
    }

    cache.insert(make_pair(n, min_arrange));
    return min_arrange;
}

int greedy(int n)
{
    int money_count = 0;
    for (int i = money.size() - 1; i >= 0; --i)
    {
        int value = money[i];
        while (n >= value)
        {
            n -= value;
            ++money_count;
        }
    }
    return money_count;
}

int main()
{
    int cost;
    cin >> cost;
    cout << exhausion(cost) << ' ' << greedy(cost) << endl;
    return 0;
}
