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
           if(s[k]==s[0])
           {
            a=a+1;
           }

        }
        if (a==s.length())
        {
            cout<<"xau nay toan ki tu giong nhau"<<'\n';

        }
          if (a!=s.length())
        {
            cout<<"xau nay ki tu ko giong nhau"<<'\n';

        }
a=0;

    }
    return 0;
}
