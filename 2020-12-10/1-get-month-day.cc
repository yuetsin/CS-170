#include <iostream>
using namespace std;

// 此处函数定义
void get_md(int date, int &month, int &day)
{
    static int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    month = 0;
    while (date > 0)
    {
        date -= days[month];
        ++month;
    }
    day = date + days[month - 1];
}

int main()
{
    int month, day, date;
    cin >> date;
    get_md(date, month, day);
    cout << month << ' ' << day;
    return 0;
}
