#include <iostream>
#include <algorithm>

using namespace std;

int rev(int v)
{
    string tmp_s = to_string(v);
    reverse(tmp_s.begin(), tmp_s.end());
    return stoi(tmp_s);
}

int main()
{

    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        if (i + rev(i) == n)
        {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
