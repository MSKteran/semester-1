#include <iostream>
using namespace std;
int main()
{
    int v, t; // v - скорость, t - время
    cin >> v >> t;
    cout << (109 + v * t % 109) % 109;
    return 0;
}