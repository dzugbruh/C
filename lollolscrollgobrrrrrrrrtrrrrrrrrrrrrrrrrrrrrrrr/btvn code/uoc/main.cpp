#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int s[100];
    int b=0;
    int k;
    int a;
    cin>>a;
    cin>>k;
    for(int n=1;n<=a;n++)
    {
        if(a%n==0)
        {
            b=b+1;
            s[b]=n;
        }
    }
    if(b>=k)
    {
            cout<<b<<" "<<s[k];
    }
    else
    {
            cout<<b<<" "<<-1;
    }
    return 0;
}
