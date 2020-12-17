#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

//定义函数unionset
void intersection(const vector<int>& a, const vector<int>& b, set<int>& c)
{
    for (int v : a) {
        if (find(b.begin(), b.end(), v) != b.cend()) {
            c.insert(v);
        }
    }
}

int main()
{
    vector<int> A, B;

    int m, n, i;
    cin >> m;
    A.resize(m, 0);
    for (i = 0; i < m; i++)
        cin >> A[i];
    cin >> n;
    B.resize(n, 0);
    for (i = 0; i < n; i++)
        cin >> B[i];

    set<int> C;
    //调用函数intersection求两个集合的交集
    intersection(A, B, C);
    //输出集合C

    if (C.size()) {
        for (int i : C) {
            cout << i << ' ';
        }
    } else {
        cout << "empty" << endl;
    }

    return 0;
}