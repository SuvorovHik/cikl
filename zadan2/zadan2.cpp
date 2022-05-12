#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double n, i;
    n=10;
    i=1;
    do
    {
        n=n+n*0.1;
        i=i+1;
    } while(n<101);
    cout<<i;
    _getch();
    return 0;
}
