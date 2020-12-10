#include <iostream>
#include <set>
using namespace std;

set<int> perfect_numbers = {6, 28, 496, 8128, 33550336};

bool is_perfect(int num) {
    return perfect_numbers.find(num) != perfect_numbers.end();
    /*
    int sum_of_factors = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum_of_factors += i;
        }
    }
    return num == sum_of_factors;
    */
}

int main() 
{
    int m, n;
    cin >> m >> n;

    int perfect_count = 0;
    for (int i = m; i <= n; ++i) {
        if (is_perfect(i)) {
            ++perfect_count;
            cout << i << ' ';
        }
    }
    if (perfect_count == 0) {
        cout << -1 << endl;
    }
	return 0;
}
