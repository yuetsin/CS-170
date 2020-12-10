#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, s, area;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area << endl;
    }
    else
    {
        cout << "error" << endl;
    }
    return 0;
}
