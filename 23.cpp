#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int len=s.length();
int c=0;
sort(s.begin(),s.end());
for(int i=0;i<len;i++)
{ if(s[i]!=s[i+1])
c++;

}
if(c%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;
    return 0;
}