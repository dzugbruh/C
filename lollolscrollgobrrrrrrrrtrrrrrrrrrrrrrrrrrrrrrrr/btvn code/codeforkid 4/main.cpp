#include <iostream>

using namespace std;

int main()
{
    int n;
    int s=0;
    cin>>n;
    for(int m=1;m<n+1;m++)
    {
        if (12%m==0)
        {
        s=m;
        cout<<s<<endl;
        }
    }
    return 0;
}
