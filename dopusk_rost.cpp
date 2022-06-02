//https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3070#1
#include <iostream>
using namespace std;
 
int main()
{
    setlocale(0, "");
    int a{1}, max1{0}, max2{0}, temp{0};
    while (a != 0)
    {
        cin >> a;
        if (a > max1)
        {
            temp=max1;
            max1=a;
            max2=temp;
        }
        else if (a > max2)
        {
            max2=a;
        }
    }
    cout << max2;
    return 0;
}