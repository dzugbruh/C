#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    long long a;
    long long maxx;
    cin>>n;
    cin>>a;
    maxx=a;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(a>maxx)
        {
            maxx=a;
        }
    }
  cout<<maxx<<endl;
    return 0;
}
