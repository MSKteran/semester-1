#include <iostream>
using namespace std;

void CocktailSort(int array[], int len) {
    int left = 0;
    int right = len - 1;
    int helper;

    while(left < right) {
        for (int i = left; i < right; i++) {
            if (array[i] > array[i + 1]) {
                helper = array[i + 1];
                array[i + 1] = array[i];
                array[i] = helper;
                helper = i;
            }
        }
        right = helper;
        for (int i = right; i > left; i--) {
            if (array[i] < array[i - 1]) {
                helper = array[i - 1];
                array[i - 1] = array[i];
                array[i] = helper;
                helper = i;
            }
        }
        left = helper;
    }
}

int main()
{
    setlocale(0, "");
    int n, max, min;
    cout << "Введите размер массива: ";
    cin >> n;
    cout << "Введите максимальное и минимальное число через пробел: ";
    cin >> max >> min;
    cout << n << " " << max << " " << min << endl;
    cout << "Ваш рандомный массив: " << endl;
    int *array = new int[n];
    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max-min+1) + min;
        cout << array[i] << " ";
    }
    CocktailSort(array, n);
    cout << endl << "Ваш отсортированный массив: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    return 0;
}