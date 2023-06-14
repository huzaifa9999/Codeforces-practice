#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
        v1.push_back(t);
    }
    sort(v.begin(), v.end());

    if (v[0] == v[1])
        cout << "Still Rozdil" << endl;
    else

    { int ans;
        for (int it=0;it<v.size();it++)
        {
            if (v1[it] == v[0])
            {
                 ans = it ;
                break;
            }
        }

        cout << ans+1 << endl;
    }

    return 0;
}
