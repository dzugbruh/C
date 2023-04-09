#include <iostream>

using namespace std;
int n;
int a[100];
void sorta()
{

    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int main()
{

    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sorta();
    int b=n/2;
    cout<< "result: " << a[b];
    return 0;
}
