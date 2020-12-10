// 请在下方添加代码
/********** Begin *********/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{

    int sc_a, sc_b;
    cin >> sc_a >> sc_b;

    if (sc_a == 11)
    {
        if (sc_b < 10)
        {
            cout << "A win" << endl;
            goto over;
        }
        else if (sc_b < 13)
        {
            cout << "In progress" << endl;
            goto over;
        }
        else if (sc_b == 13)
        {
            cout << "B win" << endl;
            goto over;
        }
        else
        {
            cout << "Illegal" << endl;
            goto over;
        }
    }

    if (sc_b == 11)
    {
        if (sc_a < 10)
        {
            cout << "B win" << endl;
            goto over;
        }
        else if (sc_a < 13)
        {
            cout << "In progress" << endl;
            goto over;
        }
        else if (sc_a == 13)
        {
            cout << "A win" << endl;
            goto over;
        }
        else
        {
            cout << "Illegal" << endl;
            goto over;
        }
    }

    if (sc_a < 11 && sc_b < 11)
    {
        cout << "In progress" << endl;
        goto over;
    }

    if (sc_a > 10 && sc_b > 10)
    {
        if (abs(sc_a - sc_b) < 2)
        {
            cout << "In progress" << endl;
            goto over;
        }
        else if (abs(sc_a - sc_b) == 2)
        {
            if (sc_a > sc_b)
            {
                cout << "A win" << endl;
                goto over;
            }
            else
            {
                cout << "B win" << endl;
                goto over;
            }
        }
        else
        {
            cout << "Illegal" << endl;
            goto over;
        }
    }

    cout << "Illegal" << endl;

over:
    return 0;
}
/********** End **********/
