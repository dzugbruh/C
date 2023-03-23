#include <iostream>

using namespace std;

int main()
/*{
    /*
    int a,b=0;
    cout<<"nhap mot so trong 1 den 100"<<endl;
    cin>>a;
    while (a<1||a>100)
    {
        cout<<"sai roi,hay thu lai"<<endl;
        cin>>a;
    }
    cout<<a<<endl;
    return 0;

}*/
{
    int a,b=0;
    do
    {
        cin>>a;
    }
    while (a<1||a>100);
    cout<<a<<endl;
    return 0;
}

