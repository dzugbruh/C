#include <iostream>
#include <stdio.h>
using namespace std;

 int lol1(int c)
 {
     if(c<0)
     {
         c=c*-1;
     }
     return c;
 }
 int lol2(int b)
 {
     if(b<0)
     {
         b=b*-1;
     }
     return b;
 }
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
int a[100][100];
int n;
int d=0;
int e=0;
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
int t=n/2+1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(a[i][j]==1)
        {
            d=i;
            e=j;
        }
    }
}
cout<<lol1(d-t)+lol2(e-t)<<endl;
    return 0;
}
