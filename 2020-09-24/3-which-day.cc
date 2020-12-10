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

    int year, month, day;
    cin >> year >> month >> day;
    int which_day = 31 * (month - 1) + day;

    if (month > 2)
    {
        which_day -= (4 * month + 23) / 10;
        if (is_leap_year(year))
        {
            which_day += 1;
        }
    }

    cout << which_day << endl;

    return 0;
}
/********** End **********/
