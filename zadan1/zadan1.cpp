#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double n;
    n=10;
    for(int i=1 ;i<8;i++) {
        n=n+n*0.1;

    }
    cout<<n;
    _getch();
    return 0;
}
