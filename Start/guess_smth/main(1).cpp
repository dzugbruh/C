#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int t = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            t = t + i;
        }
    }

    cout << t;
}
