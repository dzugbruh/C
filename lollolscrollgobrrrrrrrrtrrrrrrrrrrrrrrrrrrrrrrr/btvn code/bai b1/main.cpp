#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a,b=0;
    int n;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {

        b=b+a;
        cout<<b<<" ";
    }
    return 0;
}
