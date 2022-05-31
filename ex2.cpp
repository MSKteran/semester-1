#include <iostream>
#include <cmath>

using namespace std;
// n число, a - число по модулю
// p - p - число для деления , d - степень десятки
int main()
{
    setlocale(0, "");
    int32_t a, p, n;
    int d;
    cin >> n;
    p = 1;
    d = 0;
    a = abs(n);
    while (p * 10 <= a)
    {
        p *= 10;
        d += 1;
    }
    cout << n << "=";
    if (n < 0)
    {
        cout << "-";
    }
    while (a > 0)
    {
        if ((a / p) != 0)
        {
            cout << (a / p) << "*10^" << d;
        }
        d-=1;
        a %= p;
        p /= 10;
        if ((d != -1) and (a / p != 0))
            if (n > 0)
            {
                cout << "+";
            }
            else
            {
                cout << "-";
            }
    }
    return 0;
}