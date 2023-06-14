#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1;
    int c; int n;
    cin>>n;
    while (true)
    {
        c=a+b;
        if(c>=n)
        {c=0;
        break;}
        a=b;
        b=c;
    }

    if(n==0)
    {a=0 ,b=0,c=0;   }

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
