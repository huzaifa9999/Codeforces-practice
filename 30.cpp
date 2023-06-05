#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    long long c1 = 0,  c2 = 0;
    cin >> n;
    unordered_map<long long , long long > mp;

    for (long long i = 0; i < n; i++)
    { long  long v;
        cin >> v;
        mp[v] = i+1;
    }

    long long  m;
    cin >> m;
    while (m--)
    {
        long long  target;
        cin >> target;
        c1 += mp[target];
        c2 += -mp[target] +n + 1;
    }

    cout << c1 << " " << c2 << endl;

    return 0;
}