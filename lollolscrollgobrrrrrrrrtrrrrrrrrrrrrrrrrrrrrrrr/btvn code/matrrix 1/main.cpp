#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     int n;
     int x,y;
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
       cin>>x>>y;
       for(int j=x;j<y;j++)
       {
           sum=sum+a[x];
       }
       cout<<sum<<endl;
       sum=0;
     }
    return 0;
}
