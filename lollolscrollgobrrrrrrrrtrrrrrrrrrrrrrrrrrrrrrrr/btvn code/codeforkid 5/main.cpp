#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    for(int i=a;i<b;i++)
    {
        if(i%3==0&&i%5==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
