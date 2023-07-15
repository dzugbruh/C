#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   bool a[1000006];
      for (int i=1;i<1000;i++)
   {
       a[i*i]=true;
       if (a[i*i]>1000000)
       {
          break;
       }
       if (a[i]==true)
       {
           cout<<i<<" la so chinh phuong"<<endl<<" can bac hai cua so do la"<<sqrt(i) <<endl<<endl;
       }
   }

   return 0;
}
