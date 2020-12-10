#include <iostream>
using namespace std;

int ways_to_go(int steps)
{
    if (steps < 2)
    {
        // 少于一阶，只有一种走法
        return 1;
    }
    else
    {
        // 跳一阶，或者两阶
        return ways_to_go(steps - 1) + ways_to_go(steps - 2);
    }
}

int main()
{
    int steps;
    cin >> steps;
    cout << ways_to_go(steps) << endl;
    return 0;
}
