#include <set>
#include <iostream>
#include <vector>
using namespace std;

//定义函数unionset
void unionset( const vector< int >& a, const vector< int >& b, set< int >& c ) {
    for ( int v : a ) {
        c.insert( v );
    }
    for ( int v : b ) {
        c.insert( v );
    }
}

int main() {
    vector< int > A, B;

    int m, n, i;
    cin >> m;
    A.resize( m, 0 );
    for ( i = 0; i < m; i++ )
        cin >> A[ i ];
    cin >> n;
    B.resize( n, 0 );
    for ( i = 0; i < n; i++ )
        cin >> B[ i ];

    set< int > C;
    //调用函数unionset求两个集合的并集
    unionset( A, B, C );
    //输出集合C
    for ( int i : C ) {
        cout << i << ' ';
    }

    return 0;
}