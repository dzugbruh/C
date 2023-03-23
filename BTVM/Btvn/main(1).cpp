#include <iostream>

using namespace std;

int main()
{
    float a,b,c,x,y;
    cout << "nhap mot so" << endl;
    cin >> a;
    cout << "nhap so thu hai" << endl;
    cin >> b;
    cout << "nhap so thu ba" << endl;
    cin >> c;
    if (a==0){
        cout<<"vo nghiem" ;
    }
    else
    {
        y=c-b;
        x=y/a;
        cout << x;
    }
}
