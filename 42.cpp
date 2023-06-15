#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int flag = 1;
    vector<long long> v;

    while (n > 0)
    {
        int t = n % 10;
        v.push_back(t);
        n /= 10;
    }
    int it = 0;

    reverse(v.begin(), v.end());
    if (v[0] != 1)
        cout << "NO" << endl;

    else
    {
        while (it < v.size())
        {

            if (v[it] == 1 && v[it + 1] == 4 && v[it + 2] == 4)
                it += 3;

            else if (v[it] == 1 && v[it + 1] == 4)
                it += 2;
            else if (v[it] == 1)
                it += 1;
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
