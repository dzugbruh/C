#include <iostream>

using namespace std;

int main()
{
    int a[20];
    for (int b=0;b<20;b++)
        cin>>a[b];
    int c=0;
    for (int b=0;b<20;b++)
        c=c+a[b];
    cout<<c;
    return 0;
}
