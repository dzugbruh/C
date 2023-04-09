#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            a=a+i;
        }

    }
    cout<<a+n<<endl;
    return 0;
}
