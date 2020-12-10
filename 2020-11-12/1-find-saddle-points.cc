/********** Begin *********/
#include <iostream>
#include <vector>

using namespace std;

bool is_saddle_point( const vector< vector< int > >& matrix, int m, int n, int x, int y ) {
    int value = matrix[ x ][ y ];
    for ( int i = 0; i < n; ++i ) {
        if ( matrix[ x ][ i ] > value ) {
            return false;
        }
    }

    for ( int j = 0; j < m; ++j ) {
        if ( matrix[ j ][ y ] < value ) {
            return false;
        }
    }

    return true;
}

int main() {
    int m, n, tmp;
    cin >> m >> n;

    vector< vector< int > > matrix;
    for ( int i = 0; i < m; ++i ) {
        matrix.push_back( vector< int >() );
        for ( int j = 0; j < n; ++j ) {
            cin >> tmp;
            matrix[ matrix.size() - 1 ].push_back( tmp );
        }
    }

    bool found = false;
    for ( int i = 0; i < m; ++i ) {
        for ( int j = 0; j < n; ++j ) {
            // cout << "check " << i << ", " << j << endl;
            if ( is_saddle_point( matrix, m, n, i, j ) ) {
                found = true;
                cout << "mat[" << i << "][" << j << "]=" << matrix[ i ][ j ] << endl;
            }
        }
    }

    if ( !found ) {
        cout << "Not Found" << endl;
    }
    return 0;
}
/********** End *********/