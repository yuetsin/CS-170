// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;

bool is_leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int days[] = {-1, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    cin >> year >> month >> day;

    if (is_leap_year(year))
    {
        days[2] = 29;
    }
    else
    {
        days[2] = 28;
    }

    if (month < 1 || month > 12)
    {
        cout << "Illegal" << endl;
        return -1;
    }

    if (day < 1 || day > days[month])
    {
        cout << "Illegal" << endl;
        return -2;
    }

    int day_count = 0;
    for (int i = 1; i < month; ++i)
    {
        day_count += days[i];
    }
    day_count += day;
    cout << day_count << endl;
    return 0;
}
/********** End **********/
