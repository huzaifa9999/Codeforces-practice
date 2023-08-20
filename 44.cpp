
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int one = 0, two = 0;
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    string opp;
    string comp = str[0];
    for (int i = 0; i < n; i++)
    {
        if (str[i] == comp)
        {
            one++;
        }

        else
        {
            opp = str[i];
            two++;
        }
    }

    if (one > two)
        cout << comp << endl;
    else
        cout << opp << endl;
}
