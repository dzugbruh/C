#include <iostream>

using namespace std;

int main()
{
   int a,b,c,i;
   cin>>a;
   cout<<endl;
   cin>>b;
   cout<<endl;
   cin>>c;
   cout<<endl;
   i=a;
   if(a>=b)
   {
      a=b;
   }
   if(a>=c)
   {
      a=c;

   }
   c=i;
   cout<<a<<","<<b<<","<<c;

}
