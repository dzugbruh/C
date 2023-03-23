#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int i = 0;
    int b = 0;
    cin >> a;
    while (a!=0)
    {
        if (a%2==1)
        {
            b=b+pow(2,i);
        }
        if (a%2==0)
        {
            b=b;
        }

    i=i+1;
    a=a/10;
    }
    cout << b;
    return 0;
}

