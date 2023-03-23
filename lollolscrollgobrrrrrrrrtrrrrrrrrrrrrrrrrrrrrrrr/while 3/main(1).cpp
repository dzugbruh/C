#include <iostream>

using namespace std;
/*
int main()
{
    int a,b=0;
    do
    {
        cin>>a;
        cout<<a<<endl;
        b++;
    }
    while (b<10);
    return 0;}*/
/*int main()
{
    int a[10],b=0;
    do
    {
        cin>>a[b];
        b++;
    }
    while(b<10);
    b--;
    do
    {
        cout<<a[b]<<endl;
        b--;
    }
    while(b>=0);
          return 0;
}*/
int main()
{
    int a[10];
    for(int b=0;b<10;b++)
        cin>>a[b];
    for(int b=0;b<10;b++)
        cout<<a[b]<<endl;
    return 0;
}
