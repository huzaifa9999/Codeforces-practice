
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int maxi = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {

            if (b[j] % a[i] == 0)
            {
                if (maxi == b[j] / a[i])
                {
                    c++;
                }
                else if (maxi < b[j] / a[i])
                {
                    c = 0;
                    maxi = b[j] / a[i];
                    c++;
                }
                break;
            }
        }
    }

    cout << c << endl;
}
