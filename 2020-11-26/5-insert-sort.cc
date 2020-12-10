#include <iostream>
using namespace std;

void insertSort(int arr[], int size)
{
    if (size <= 1)
    {
        // arr.size() <= 1, then it must be sorted
        return;
    }

    int to_insert = arr[size - 1];
    insertSort(arr, size - 1);

    int i;
    for (i = size - 2; i >= 0; --i)
    {
        if (to_insert >= arr[i])
        {
            arr[i + 1] = to_insert;
            break;
        }
        arr[i + 1] = arr[i];
    }

    if (i == -1)
    {
        arr[0] = to_insert;
    }

    // cout << "successfully sorted at size " << size << endl;

    // for ( int i = 0; i < size; ++i ) {
    //     cout << arr[ i ] << ' ';
    // }
    // cout << endl;
}

int main()
{
    int n, num[20], tmp;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        num[i] = tmp;
    }

    insertSort(num, n);

    for (int i = 0; i < n; ++i)
    {

        cout << num[i] << ' ';
    }
    return 0;
}
