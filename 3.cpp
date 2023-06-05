#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, time;
    cin >> n >> time;
    string order;
    cin >> order;
    while (time--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (order[i] == 'B' && order[i + 1] == 'G')
            {
                int temp = order[i + 1];
                order[i + 1] = order[i];
                order[i] = temp;
                i++;
            }
        }
    }

    cout << order << endl;

    return 0;
}