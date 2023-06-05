#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        char t = s[0];
        if (t == 'X')
        {
            t = s[1];
            if (t == '+')
                c += 1;
            else
                c -= 1;
        }

        else if (t == '+')
            c += 1;
        else
            c -= 1;
    }
    cout << c << endl;

    return 0;
}