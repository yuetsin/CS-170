#include <iostream>
using namespace std;

// 此处函数定义
bool getdate( int date, int& month, int& day ) {
    if (date < 1 || date > 366) {
        return false;
    }
    static int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    month = 0;
    while ( date > 0 ) {
        date -= days[ month ];
        ++month;
    }
    day = date + days[ month - 1 ];
    return true;
}


int main()
{
	int d, month, date, res;
	cin >> d;
	res = getdate(d, month, date);
	if(res)
		cout << month << " " << date;
	else
		cout << "wrong number";
	return 0;
}
