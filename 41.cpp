#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> v;

    for (long long i = 0; i < m; i++)
    {
        long long t;
        cin >> t;
        v.push_back(t);
    }

    long long cur = 1;
    long long  time = 0;
    for (auto &it : v)
    {
        if (cur == it)
            time += 0;
        else if (it > cur)
        {
            time += it - cur;
            cur = it;
        }
        else
        {
            time += n + it - cur;
            cur = it;
        }
    }
    cout << time << endl;
}
