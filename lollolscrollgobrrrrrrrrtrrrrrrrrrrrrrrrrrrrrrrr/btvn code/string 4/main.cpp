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
    for(int i=0; i<n; i++) {
        cin >> s;
        }
        int a=s.length()-1;
        for (int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[a])
            {
                a=a-1;
            }
        }
        if(a==0)
        {
           cout <<"day la day doi xung"<<endl;
        }
        return 0;
}
