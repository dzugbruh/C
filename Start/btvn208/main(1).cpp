#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"nhap mot so"<< endl;
    cin>> a;
    cout <<"nhap so thu hai"<< endl;
    cin>> b;
    cout <<"nhap so thu ba"<< endl;
    cin>> c;
    if (c < a + b && a < b + c && c < a+b )
    {
       cout << "do la do dai 3  canh cua 1 tam giac";
    }
    else
    {
        cout << "do khong phai la do dai 3 canh cua 1 tam giac";
    }
}
