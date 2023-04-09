#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        cout<<"day ko phai so nguyen to"<<endl;
        return 0;
        }
    }
        cout<<"day la so nguyen to"<<endl;
        return 0;
}
