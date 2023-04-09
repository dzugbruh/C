#include <iostream>

using namespace std;

int main()
{
    int a[100]={true};
    for(int i=2;i<100;i++)
    {
        if(a[i]==true)
        {
            cout<<i<<"la so nguyen to"<<endl;
            a[i*2]=false;
            break;
        }
        else if(a[i]==false)
        {
            cout<<i<<" ko la so nguyen to"<<endl;
        }
        a[i]=true;
    }
}
