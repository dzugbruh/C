#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "nhap 1 so"<<endl;
    cin >> a;
    cout << "nhap so thu hai"<<endl;
    cin >> b;
    cout << "nhap so thu ba"<<endl;
    cin >> c;
    cout << "nhap so thu tu"<<endl;
    cin >> d;
    if(a>b)
{
    if(a>c)
    {
        if(a>d)
        {
            cout << a;
        }
    }
}
if(d>b)
{
    if(d>c)
    {
        if(a>d)
        {
            cout << d;
        }
    }
}
if(c>b)
{
    if(a>c)
    {
        if(c>d)
        {
            cout << c;
        }
    }
}
if(a>b)
{
    if(b>c)
    {
        if(b>d)
        {
            cout << b;
        }
    }
}
}
