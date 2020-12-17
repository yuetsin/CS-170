#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> strings;
    int n;
    cin >> n;
    string tmp;
    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        strings.insert(tmp);
    }

    for (const auto &s: strings) {
        cout << s << endl;
    }
}