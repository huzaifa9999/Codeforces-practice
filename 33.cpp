#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = 0, up = 0, down = 0;
        for (int j = 0; j < n; j++)
        {
            if (x[i] == x[j] && i != j)
            {
                if (y[j] > y[i])
                    up = 1;
                else if (y[j] < y[i])
                    down = 1;
            }
            else if (y[i] == y[j] && i != j)
            {
                if (x[j] > x[i])
                    right = 1;
                else if (x[j] < x[i])
                    left = 1;
            }
        }
        if (up == 1 && down == 1 && left == 1 && right == 1)
            count++;
    }

    cout << count << endl;

    return 0;
}