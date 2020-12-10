#include <iostream>
using namespace std;

int main()
{
    int number;
    char digit;
    cin >> number >> digit;

    int count;
    for (auto s : to_string(number))
    {
        if (s == digit)
        {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
