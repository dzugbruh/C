#include <iostream>

using namespace std;

int main()
{
int a;
int b=0;
int e=0;
cin >> a;
while (a!=0)
{
    if (a%2==1)
    {
        b=b*10+1;
    }
    else if (a%2==0)
    {
        b=b*10;
    }
    a=a/2;
    b=b%10;
    e=e*10+b;
}
cout<<e<<endl;
return 0;
}
