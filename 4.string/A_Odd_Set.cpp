#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        int n;
        cin >> n;
        int even_count = 0;
        int odd_count = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        if (even_count == n && odd_count == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}