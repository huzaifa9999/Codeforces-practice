#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int c = 0, p = 0;
    while (c < n)
    {
        if (arr[p] > 0)
        {
            arr[p] -= m;
            if (arr[p] <= 0)

            {
                c++;
            }
        }
        p++;

        if (p == n)
            p = 0;
    }

    if (p == 0)
        p = n;

    cout << p << endl;

    return 0;
}