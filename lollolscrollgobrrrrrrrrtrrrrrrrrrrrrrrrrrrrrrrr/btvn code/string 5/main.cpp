#include <cstdio>
#include <iostream>

using namespace std;

char c;
char C[] = "43wjfdksdsf";
string s = "fjls3kdjflkjdfs";
int n;
int a=0;
int j=0;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n;
    for(int i=0; i<n; i++)
        {
        cin >> s;
        }
        for(int i=0;i<s.length()/2;i++)
        {
            j=s.length()-i-1;
            if(s[i]==s[j])
            {
                a=a+1;
            }
            else
            {
                cout<<"day ko la day doi xung"<<endl;
                return 0;
            }
        }
        if (a==s.length()/2)
        {
            cout<<"day la day doi xung"<<endl;
        }
        return 0;
}
