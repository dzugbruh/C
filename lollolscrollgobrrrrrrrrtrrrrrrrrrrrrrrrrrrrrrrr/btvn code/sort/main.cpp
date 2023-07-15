#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a[5];
    int swp=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int save=0;
    for(int j=0;j<n;j++)
    {
            save=j;
            for(int i=j+1;i<n;i++)
    {
    if(a[i]>a[j])
        {
            save=i;
        }
            swp=a[j];
            a[j]=a[save];
            a[save]=swp;
    }
    }

    for(int i=n-1;i>-1;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
