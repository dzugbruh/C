#include <iostream>

using namespace std;


string s = "fjls3kdjflkjdfs";
int s_length = s.length();

int main()
{
    int a=0;
   for (int b=0;b<s_length;b++)
    {
       if(s[b]=='s')
       {
           a=a+1;
       }
    }
    cout<<a;
    return 0;
}
