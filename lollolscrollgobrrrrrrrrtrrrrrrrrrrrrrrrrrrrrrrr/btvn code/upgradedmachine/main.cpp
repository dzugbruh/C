#include <iostream>

using namespace std;

int main()
{

    bool a[105];
    for(int i=2;i<100;i++)
    {
        a[i]=true;
    }
        for(int i=2;i<100;i++)
    {
        if (a[i]==true)
        {
            cout<<i<<" la so nguyen to"<<endl;
            for (int j=2;j<100;j++)
        {
           if (i*j>100) break;
           a[i*j]=false;
        }
        }
        else
        {
            cout<<i<<" ko la so nguyen to"<<endl;
        }
    }
    return 0;
}
