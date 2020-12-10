#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    while (number != 1)
    {
        cout << number << ' ';
        if (number % 2)
        {
            number = number * 3 + 1;
        }
        else
        {
            number /= 2;
        }
    }

    cout << number << endl;
    return 0;
}
