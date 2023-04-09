#include <iostream>

using namespace std;

int main()
{
    int a;
    bool b=true;
    cin>>a;
    cout<<"1 ko phai la so nguyen to"<<endl;
    for(int n=2;n<a;n++)
    {
    for(int i=2;i<n;i++)
     {
         b=true;
        if(n%i==0)
        {
        cout<<n<<" ko phai so nguyen to"<<endl;
        b=false;
        break;
        }
      }
      if (b==true)
      {
          cout<<n<<" la so nguyen to"<<endl;
      }

    }
        return 0;
}
