#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    int sum = 0;
    int flag = 0,flag2=0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 0)
            flag += 1;
        v.push_back(t);
        sum += t;
        if(t==5)
        flag2++;
    }
    if(flag2==n)
    cout<<-1<<endl;

  else  if (flag2<9|| flag == 0)
       { cout << 0 << endl;}


    else
    {

        sort(v.rbegin(), v.rend());
while(sum%9!=0)
{
    sum-=5;
    v.erase(v.begin());
}
        for (auto &it : v)
        {
            cout << it;
        }
    }
}
