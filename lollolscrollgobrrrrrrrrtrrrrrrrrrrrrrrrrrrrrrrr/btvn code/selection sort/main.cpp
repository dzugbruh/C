#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[5];
    int swp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int save=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(j+1>n)
            {
                break;
            }
            if(a[i]>a[j])
            {
                save=j;
            }
            swp=a[i];
            a[i]=a[save];
            a[save]=swp;
        }
    }
        for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
