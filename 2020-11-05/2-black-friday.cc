// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;

bool is_leap_year(int year)
{
    if (year % 4)
    {
        return false;
    }
    else
    {
        if (year % 100)
        {
            return true;
        }
        else
        {
            if (year % 400)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}

int main()
{
    const int leap_years[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const int common_years[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;
    cin >> year;

    int counts[7] = {0, 0, 0, 0, 0, 0, 0};

    int days = 13;
    for (int i = 1900; i < 1900 + year; ++i)
    {
        bool is_leap = is_leap_year(i);
        for (int j = 0; j < 12; ++j)
        {
            ++counts[(days - 1) % 7];
            if (is_leap)
            {
                days += leap_years[j];
            }
            else
            {
                days += common_years[j];
            }
        }
    }

    for (int k = 0; k < 7; ++k)
    {
        cout << counts[k] << ' ';
    }

    return 0;
}
/********** End **********/
