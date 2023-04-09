#include <iostream>

using namespace std;
int n;
int a[100];
int b = 0;
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
           cout<<"day ko la day lien tiep";
           return 0;
        }
    }
        cout<<"day la day lien tiep";
         return 0;
}
