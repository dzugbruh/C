#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;
    int s=0;
    int c=0;
    int d[100];
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        for(int j=0;j<b.length();j++)
        {
            if(a[i]==b[j])
            {
                s=s+1;
                c=j;
                cout<<c<<" ";
            }
        }
        cout<<s<<" ";
        s=0;
        cout<<endl;
    }
    return 0;
}

