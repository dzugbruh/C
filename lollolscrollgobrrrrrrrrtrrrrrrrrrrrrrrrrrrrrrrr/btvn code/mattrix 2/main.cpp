#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m;
    int a[100][100];
    int n;
    int x;
    int y;
    int z;
    int t;
    int s;
    int sum=0;
    cin>>s;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<s;i++)
    {
        cin>>x>>y>>z>>t;
        for(int i=x;i<z;i++)
    {
        for(int j=y;j<t;j++)
        {
            sum=sum+a[i][j];
        }
    }
    cout<<sum<<endl;
    sum=0;
    }
    return 0;
}
