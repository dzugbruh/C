#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,x,y;
    cout << "nhap mot so" <<endl;
   cin >> a;
   cout << "nhap so thu hai"<<endl;
   cin >> b;
   cout << "nhap so thu ba"<<endl;
   cin >> c;
   cout << "nhap so thu tu"<<endl;
   cin >> d;
   if (a>b)
   {
       x=a;
   }
   else
   {
       x=b;
   }
   if (c>d)
   {
       y=c;
   }
   else
   {
       y=d;
   }
   if(x>y)
   {
       cout<<x;
   }
   else
   {
       cout<<y;
   }
}
