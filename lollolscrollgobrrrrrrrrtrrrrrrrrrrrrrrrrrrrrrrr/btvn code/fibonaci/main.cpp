#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        a[i]=1;
    }
    a[0]=0;
     for (int i=0;i<n;i++)
    {
        if (i>=3)
        {
            a[i]=a[i-1]+a[i-2];
        }
    }
     for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

