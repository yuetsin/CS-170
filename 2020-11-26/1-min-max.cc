//
// Created by RadiumScriptTang on 2020/10/11.
//

#include <iostream>
using namespace std;

const int MAX_LENGTH = 10005;

template <class T>
void maxmin(T arr[], int length)
{
    T min, max;
    bool min_touched = false, max_touched = false;

    for (int i = 0; i < length; ++i)
    {
        if (!min_touched || min > arr[i])
        {
            min = arr[i];
            min_touched = true;
        }

        if (!max_touched || max < arr[i])
        {
            max = arr[i];
            max_touched = true;
        }
    }

    cout << max << ' ' << min << endl;
}
int main()
{
    int m, n;
    int arr_int[MAX_LENGTH];
    double arr_double[MAX_LENGTH];

    // 输入m和整型数组
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr_int[i];
    }

    // 输入n和浮点型 数组
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr_double[i];
    }
    // 输出结果
    maxmin(arr_int, m);
    maxmin(arr_double, n);
}