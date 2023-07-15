#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int s[9];
    int a=1;
    int b;
    cin>>b;
    for(int i=0;i<9;i++)
    {
        a=a*10;
        s[i]=a;
    }
    a=0;
    for(int i=0;i<b;i++)
    {
        if(a<s[i])
        {
            a=a+9;
        }
    }
}
