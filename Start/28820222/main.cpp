#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
     for (int n=a-1;n>0;n--)
     {
     if(n>0)
     {
       a=a*n;
     }
     }
     cout << a;
        return 0;
}

