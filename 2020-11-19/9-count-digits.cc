#include <iostream>
using namespace std;

int CountDigit(int number, int digit)
{
    if (number < 10)
    {
        return number == digit;
    }
    return CountDigit(number / 10, digit) + (number % 10 == digit);
}

int main()
{
    int number, digit;
    cin >> number >> digit;
    cout << CountDigit(number, digit) << endl;
    return 0;
}
