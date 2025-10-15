#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = INT_MAX;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = a[i] + a[j] + j - i;
                mn = min(sum, mn);
            }
        }
        cout << mn<<endl;
    }

    return 0;
}
