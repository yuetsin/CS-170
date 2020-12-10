#include <iostream>
using namespace std;

//countNum 鍑芥暟
int countNum(const char *str, int max_strlen)
{
    int count = 0;
    for (int i = 0; i < max_strlen; ++i)
    {
        char ch = str[i];
        if (ch == '\0')
        {
            return count;
        }
        if (ch >= '0' && ch <= '9')
        {
            ++count;
        }
    }
    return count;
}

const int max_strlen = 100;

int main()
{
    char s[max_strlen];
    cin.getline(s, max_strlen);

    cout << countNum(s, max_strlen) << endl;
    return 0;
}