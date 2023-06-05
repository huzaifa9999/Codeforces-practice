#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin >> n;
    int flag = 0;
    int r, count = 0;
    while (n > 0)
    {
        r = n % 10;
        if (r == 4 || r == 7)
        {
            count++;
        }
        n /= 10;
    }

    while (count > 0)
    {
        int test = count % 10;
        if (test != 4 && test != 7)
        {
            flag = 0;
            break;
        }
        else
            flag++;

        count /= 10;
    }

    if (flag > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}