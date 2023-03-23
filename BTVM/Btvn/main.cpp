#include <iostream>

using namespace std;

int main()
{
    int a[64],b,c;
    cin>>b;
    for(c=0;b>0;c++)
    {
        a[c]=b%2;
        b=b/2;
    }
    for(c=c-1 ;c>=0 ;c--)
{
   cout<<a[c];
}
    return 0;
}
