#include <cstdio>
#include <iostream>

using namespace std;

char c;
char C[] = "43wjfdksdsf";
string s = "fjls3kdjflkjdfs";
int n;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n;
    int a=0;
    for(int i=0; i<n; i++) {
        cin >> s;
        for (int k=0;k<s.length();k++)
        {
           if(s[k]=='a' &&s[k+1]=='f')
           {
                   a=a+1;
           }

        }
           cout<<a<<'\n';
           a=0;
}

    return 0;
}
