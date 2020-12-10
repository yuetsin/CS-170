#include <iostream>
#include <vector>

using namespace std;

template <class T>
void sort(vector<T> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; ++i)
    {
        for (int j = i; j < size; ++j)
        {
            if (vec[i] > vec[j])
            {
                T tmp = vec[i];
                vec[i] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}

int main()
{
    int i, n, intdata[100];
    double doubledata[100];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> intdata[i];
    for (i = 0; i < n; i++)
        cin >> doubledata[i];
    //两次函数调用，分别对intdata和doubledata排序
    vector<int> vec_int(&intdata[0], &intdata[n]);
    vector<double> vec_double(&doubledata[0], &doubledata[n]);

    sort(vec_int);
    sort(vec_double);

    for (i = 0; i < n; i++)
        cout << vec_int[i] << ' ';
    cout << endl;
    for (i = 0; i < n; i++)
        cout << vec_double[i] << ' ';
    cout << endl;
    return 0;
}
