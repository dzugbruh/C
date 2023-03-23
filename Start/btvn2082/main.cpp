#include <iostream>

using namespace std;

int main()
{ int a,b,c,d;
   cout << "nhap mot so" <<endl;
   cin >> a;
   cout << "nhap so thu hai"<<endl;
   cin >> b;
   cout << "nhap so thu ba"<<endl;
   cin >> c;
cout << "nhap so thu tu"<<endl;
   cin >> d;
   if (a>=b&&a>=c&&a>=d)
   {
       cout << a;
   }
 else if (d>=b&&d>=c&&d>=a)
   {
       cout << d;
   }
 else if (b>=a&&b>=c&&b>=d)
   {
       cout << b;
   }

  else if (c>=a&&c>=b&&c>=d)
   {
       cout << c;
   }

}
