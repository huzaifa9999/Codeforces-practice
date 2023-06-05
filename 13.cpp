#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int div;
    vector<int> a;
    if (n == 1)
        cout << -1 << endl;
    else
    {
        if (n % 2 == 0)
      {      div = n / 2;
        // div = (n + 1) / 2;

        for (int i = 0; i < n; i++)
        {
            a.push_back(i + 1);
        }

// if(n%2==0)
reverse(a.begin(),a.end());

for (auto &it : a)
        {
            cout << it << " ";
        }}

        else
        cout<<-1<<endl;
// else{
//         reverse(a.begin(), a.begin() + div);
//         reverse(a.begin() + div, a.end());
// }
        
    }

    return 0;
}