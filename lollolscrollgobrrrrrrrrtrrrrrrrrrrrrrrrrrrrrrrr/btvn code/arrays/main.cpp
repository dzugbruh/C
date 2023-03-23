#include <iostream>

using namespace std;

int main()
{
   int a[10];
   int b;
   cin>>b;
   for (int i=0;i<b;i++)
   {
       cin>>a[i];
   }
   cout<<endl;
   for (int i=0;i<b;i++)
   {
       if (a[i]%3==0)
       {
           cout<<a[i]<<" ";
       }
   }
   return 0;
}
