#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    vector<int> a;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <=7; i++)
    { int temp;
        cin >> temp;
        sum += temp;
a.push_back(temp);
    }

    while(n>sum)
    {
    n = n -sum;}

    int i = 0;
    while (n)
    {
        n -= a[i++];
        if (n <= 0)
       {   cout << i << endl;
       break ;}
    }

    return 0;
}