#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];
    int x=0;
    int y=0;
    cin >> n;
    for(int i=0; i< n; i++)
    {
        cin >> a[i];
    }
     for(int i=0;i<n;i++)
    {
        if (a[i]%3==0&&a[i]%2==0)
        {
            x=x+0;
        }
       else if (a[i]%3==0)
        {
            y=y+1;
        }
        else if (a[i]%2==0)
        {
            x=x+1;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
