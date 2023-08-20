
#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;int l=s.length();
for(int i=0;i<l;i++)
{
    int t1=s[i],t2=s[i+1],t3=s[i+2];
    if(t1=='W'&&t2=='U'&&t3=='B')
    {
        i+=2;
        cout<<" ";
    }
    else{
        cout<<s[i];
    }
}

   return 0;
}
