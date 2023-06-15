
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, s1;
    cin >> str>>s1;
    reverse(str.begin(), str.end());

    if (str.compare(s1) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
