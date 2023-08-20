
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c = 0;
    cin >> n;
    vector<int> v(12);
    int sum = 0;
    if (n == 0)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < 12; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum < n)
            cout << -1 << endl;
        else
        {
            int i = 0;
            sort(v.rbegin(), v.rend());
            while (n > 0)
            {
                n -= v[i++];
                c++;
            }
            cout << c << endl;
        }
    }
}
