#include <iostream>
#include <vector>

using namespace std;

bool judge(int num)
{
    if (num == 1)
    {
        return true;
    }

    static const vector<int> factors = {2, 3, 5};
    for (int factor : factors)
    {
        if (num % factor == 0)
        {
            return judge(num / factor);
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << (judge(n) ? "true" : "false") << endl;

    return 0;
}
