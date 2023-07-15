#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int b[10000];
    int c;
    int sum1=0;
    int sum2=0;
    int x,k,n;
    int i=1;
    cin>>x>>k>>n;
    int a=x;
    b[0]=a%100;
    b[1]=(a+k)%100;
    while(b[i]!=b[0])
    {
        i=i+1;
        a=a+k;
        b[i]=(a+k)%100;
    }
     c=i;
     c=c%i;
     for(int j=0;j<c;j++)
       {
           sum1=sum1+b[j];
       }
       int d=n/i;
       for(int j=0;j<i;j++)
       {
           sum2=sum2=b[i];
       }
      cout<<sum1+sum2*d<<endl;
    return 0;
}
