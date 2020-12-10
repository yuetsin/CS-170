#include <iostream>
using namespace std;

void draw(char chr, int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout << chr;
    }
}

int main()
{
    int line;
    cin >> line;

    for (int i = 1; i < line; ++i)
    {
        draw(' ', line - i);
        draw('+', 2 * i - 1);
        cout << endl;
    }
    draw('+', 2 * line - 1);
    cout << endl;

    for (int i = line - 1; i > 0; --i)
    {
        draw(' ', line - i);
        draw('+', 2 * i - 1);
        cout << endl;
    }
    return 0;
}
