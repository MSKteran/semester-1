#include <iostream>
#include <vector>

using namespace std;

void Prime(int n)
{ 
    int check = 0;
    vector <int> list;
    list.push_back(2);
    for (int i = 3; i < n * n; i = i + 2) {
        for (int j : list) {
            if (i % j == 0) {
                ++check;
            }
        }
        if (check == 0) {
            list.push_back(i);
            cout << i << " ";
        }
        check = 0;
        if (list.size() == n) {
            break;
        }
    }

}
int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите количество простых чисел: " << endl;
    cin >> n;
    cout << 2 << " ";
    if (n>1) {
            Prime(n-1);
        }
    return 0;
}