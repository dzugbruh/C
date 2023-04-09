#include <iostream>

using namespace std;

int main()
{
   int n;
   int s=1;
   cin>>n;
   for(int m=1;m<n+1;m++)
   {
       s=s*m;
   }
   cout<<s<<endl;
   return 0;
}
