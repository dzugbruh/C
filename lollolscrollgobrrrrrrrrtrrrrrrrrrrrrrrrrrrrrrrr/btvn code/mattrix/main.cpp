#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    int x;
    int y;
    int sum=0;
    int t;
    cin>>n;
    int a[100];
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    cin>>t;
    for(int i=0;i<t;i++)
{
    sum=0;
    cin>>x>>y;
    for(int j=x;j<y+1;j++)
    {
        sum=sum+a[j];
    }
    cout<<sum<<endl;
}
    return 0;
}
