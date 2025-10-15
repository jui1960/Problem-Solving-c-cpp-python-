#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        sort(s[i].begin(), s[i].end());
        cout << s[i];

        return 0;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// bool cmp(string l,string r){
//     return l<r;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n, cmp);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i];
//     }
//     return 0;
// }
