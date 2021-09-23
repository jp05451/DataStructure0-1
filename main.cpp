#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    while (cin >> a >> b)
    {
        if (b > a)
        {
            swap(a, b);
        }
        while (a != 0 && b != 0)
        {
            a %= b;
            if (a == 0 || b == 0)
            {
                break;
            }
            b %= a;
        }
        if (a == 0)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}