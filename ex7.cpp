#include <iostream>
using namespace std;
struct dot
{
    float x, y;
};

int main()
{
    setlocale(0, "");
    float k1, b1, k2, b2;
    dot one; dot two; dot three; dot four; dot intersection;
    cout << "Введите координаты точки 1 через пробел (x ; y)" << endl;
    cin >> one.x >> one.y;
    cout << "Введите координаты точки 2 через пробел (x ; y)" << endl;
    cin >> two.x >> two.y;
    cout << "Введите координаты точки 3 через пробел (x ; y)" << endl;
    cin >> three.x >> three.y;
    cout << "Введите координаты точки 4 через пробел (x ; y)" << endl;
    cin >> four.x >> four.y;
    k1 = (two.y - one.y) / (two.x - one.x);
    k2 = (four.y - three.y) / (four.x - three.x);
    if (k1 == k2)
    {
        cout << "Прямые параллельны или совпадают, точки пересечения не существует";
    }
    else
    {
        b1 = - (k1 * one.x) + one.y;
        b2 = - (k2 * three.x) + three.y;
        intersection.x = (b2 - b1) / (k1 - k2);
        intersection.y = k1 * intersection.x + b1;
        cout << "Координаты точки пересечения (x ; y): ("<< intersection.x << " ; " << intersection.y << ")";
    }
    return 0;
}