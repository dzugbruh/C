#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    for (int d=a; d<b; d++)
    {
        if (d%2==0)
        {
            cout << d << endl;
        }
    }
    return 0;
}
