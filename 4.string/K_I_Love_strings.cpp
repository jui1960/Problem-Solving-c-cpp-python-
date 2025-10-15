#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    for (int te = 0; te < t; te++)
    {
        string s, t;
        cin >> s >> t;

        int i = 0;
        int j = 0;

        while (i < s.size() && j < t.size())
        {
            cout << s[i] << t[j];
            i++;
            j++;
        }
        while (j < t.size())
        {
            cout << t[j];
            j++;
        }
        while (i < s.size())
        {
            cout << s[i];
            i++;
        }

        cout << endl;
    }

    return 0;
}
