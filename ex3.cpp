#include <iostream>
#include <cmath>
using namespace std;

int toten(int ns, char n[]);
void fromten(int ks);
int result = 0;

int main()
{
    setlocale(0, "");
    int ns, ks; // ns - начальная сс, ks - конечная сс
    cout << "Из какой сс?" << endl;
    cin >> ns;
    cout << "В какую сс?" << endl;
    cin >> ks;
    cout << "Введите число:" << endl;
    char n[100]; // n - наше число
    cin >> n;
    if (ns != 10)
    {
        cout << "Число в 10 сс: " << toten(ns, n) << endl;
        if(ks != 10) fromten(ks);
    }
    else
    {
        result = atoi(n);
        fromten(ks);
    }
    return 0;
}

int toten(int ns, char n[])
{
    int i = -1;
    char *ptr = n;
    while(*ptr++ != '\0') i++; // ищем длину строки минус 1, чтобы знать в какую степень возводить первый элемент
    ptr = n; // опять присваиваем указателю начало массива n
    while(*ptr != '\0') {
        if(*ptr >= '0' && *ptr <= '9') {
            int temp = *ptr - 48; // '1' становится 1, '2' - 2 и так далее
            result += temp * pow(ns, i--);
        }
        else {
            *ptr = tolower(*ptr);
            int temp = 10 + *ptr - 'a';
            result += temp * pow(ns, i--);
        }
        ptr++;
    }

    return result;
}

void fromten(int ks)
{
    int a = result;
    int count = 0;
    while (a != 0)
    {
        a /= ks;
        count += 1;
    }
    int *mas = new int[count];
    for (int i = 0; i < count; i++)
    {
        mas[i] = result % ks;
        result /= ks;
    }
    cout << "Число в " << ks << " сс: ";
    for (int i = count - 1; i >= 0; --i)
    if (mas[i]<10)
    {
        cout << mas[i];
    }
    else
    {
        cout << char(mas[i]+55);
    }
    delete [] mas;
}