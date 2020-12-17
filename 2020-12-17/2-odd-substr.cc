#include <iostream>
using namespace std;

//此处函数定义
void oddstr(char* str, char **odd) {
    *odd = (char *)calloc(40, 1);
    char *ptr = *odd;
    int cnt = 0;

    while (*str) {
        if (cnt % 2) {
            *ptr = *str;
            ++ptr;
        }
         ++cnt;
         ++str;
    }
    *ptr = '\0';
}

int main()
{
    char str[80], *odd;
	//输入字符串str
    cin.getline(str, 80);
    oddstr(str, &odd);
	//调用oddstr函数
	cout << odd << endl;
	//其它语句
}

