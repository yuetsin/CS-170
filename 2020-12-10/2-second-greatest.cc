#include <iostream>
using namespace std;

void get_max_2(int arr[], size_t arr_size, int &first, int &second)
{
    first = -32767;
    second = -32768;

    for (size_t i = 0; i < arr_size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }
}

int main()
{
    int n, data[100], f, s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    get_max_2(data, n, f, s);
    cout << f << ' ' << s;
    return 0;
}
