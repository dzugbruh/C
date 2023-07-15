#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        reverse(a[i].begin(), a[i].end());
        cout<<a[i].length()<<" ";
        cout<<a[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        reverse(a[i].begin(), a[i].end());
        int numl=0;
        int s=0;
        int l=a[i].length();
        for(int j=0;j<l;j++)
        {
            numl=numl*10+(a[i][j]-'0');
        }
        cout<<numl<<" ";
        for(int k=1;k<numl;k++)
        {
            if(sqrt(k)==floor(sqrt(k)))
            {
                s=s+1;
            }
        }
        cout<<s<<endl;
    }
     return 0;

}
