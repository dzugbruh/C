#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a,b,c,n,y;
    cin>>a>>b>>c>>n;
    for (int x=-n;x<n;x++)
    {
        y=a*x*x + b*x + c;
        if(y<n)
        {
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
