#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a[100][100];
    int n;
    int s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i][i];
    }
    for(int j=0;j<n;j++)
        {
            s=s+a[0+j][n-1-j];
        }
        int t=n/2;
        if(n%2!=0)
        {
        s=s-a[t][t];
        }
        cout<<s<<endl;
    return 0;

}
