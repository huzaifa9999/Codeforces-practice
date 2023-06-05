#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[3][3];
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = 1;
            
        }
        // cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cin >> a[i][j];
            // ans[i][j] = 1;
            if (a[i][j] % 2 == 1)
            {
                ans[i][j] = 1 - ans[i][j];
                if (i > 0)
                    ans[i - 1][j] = 1 - ans[i - 1][j];
                if (i < 2)
                    ans[i + 1][j] = 1 - ans[i + 1][j];
                if (j > 0)
                    ans[i][j -1] = 1 - ans[i][j - 1];
                if (j < 2)
                    ans[i][j + 1] = 1 - ans[i][j + 1];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
