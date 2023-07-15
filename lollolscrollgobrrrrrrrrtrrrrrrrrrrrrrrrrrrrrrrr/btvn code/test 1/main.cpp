#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    int b;
    int c;
    int tg=0;
    cin>>a>>b>>c;
    if(c<b)
    {
        tg=b;
        b=c;
        c=tg;
    }
    if(c<a)
    {
        tg=a;
        a=c;
        c=tg;
    }
    if(b<a)
    {
        tg=a;
        a=b;
        b=tg;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    int d=sqrt(a);
    for(int i=2;i<d;i++)
    {
        if(a%i==0)
        {
            cout<<"NO"<<endl;
            break;
        }
        else
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    if(a*a+b*b==c*c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
