#include <iostream>

using namespace std;

int main()
{
    int a,d=0;
    cin>>a;
    if (a<0)
    {
        cout<<"invalid"<<endl;
        return 0;
    }
        int b[a];
    for (int c=0;c<a;c++)
        cin>>b[c];
    for (int c=0;c<a;c++)
        d=d+b[c];
    cout<<d;
    return 0;
}
