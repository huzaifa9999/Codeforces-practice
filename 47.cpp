
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
int c=0;
    if (n < m)
    {
        for (int i = 0; i <= n; i++)
        {
            int p1 = i;
            if ((i * i) <= n)
            {
               int p2 = n - p1*p1;
                if ((p2 * p2) + p1 == m)
                    c++;
            }


        }
         cout << c << endl;
    }
    else
    {
        for (int i = 0; i <= m; i++)
        {
           int p1 = i;
            if (p1 * p1 <= m)
            {
               int p2 = m - p1*p1;
                if (p2 * p2 + p1 == n)
                    c++;
            }

         
        }
         cout << c << endl;
    }

   
}
