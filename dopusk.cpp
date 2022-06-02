//https://informatics.msk.ru/mod/statements/view.php?chapterid=3072#1
#include <iostream>
using namespace std;
 
int main()
{
    int a{1}, max{0}, count{0};
    while (a != 0)
    {
        cin >> a;
        if (a == max) count++;
        if (a>max) 
        {
            max=a;count=1;
        }
    }
    cout << count;
    return 0;
}