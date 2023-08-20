
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int p = 0;
    sort(a, a + n);
    int i = 0;
    while (m > 0)
    {
        if (a[i] < 0)
            p += (-a[i]);
        i++;
        m--;
    }
    cout << p << endl;
}
