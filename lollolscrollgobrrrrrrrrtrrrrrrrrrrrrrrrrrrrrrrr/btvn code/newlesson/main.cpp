#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    long long a;
    cin>>n;
    double b=0;
    bool d=0;
    double c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=0)
        {
            c=c+a;
            b=b+1;
            d=1;
        }
    }
    if(d==0)
        {
            cout<<"0.00"<<endl;
            return 0;
        }
    c=c/b;
    cout<<setprecision(2)<<fixed<<c<<endl;
    return 0;
}
