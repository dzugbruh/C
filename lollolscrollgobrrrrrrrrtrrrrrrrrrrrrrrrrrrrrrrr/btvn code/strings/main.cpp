#include <cstdio>
#include <iostream>

using namespace std;

char c;
char C[] = "43wjfdksdsf";
string s = "fjls3kdjflkjdfs";

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a=0;
    for(int i=1; i<=2; i++) {
        cin >> s;
        for (int b=0;b<s.length();b++)
        {
           if(s[b]=='s')
           {
               a=a+1;
           }
        }
        cout<< "this is the number character s in string " << i <<":" <<a <<'\n';
        a=0;
    }

    return 0;
}
