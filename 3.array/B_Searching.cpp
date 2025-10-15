// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int x;
//     cin >> x;
//     int indx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (x == a[i])
//         {
//             cout << i;
//             indx = 1;
//             break;
//         }
//     }
//     if (indx == 0)
//     {
//         cout << "-1";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;

    auto it = find(v.begin(), v.end(), x);
    if (it == v.end())
    {
        cout << "-1";
    }
    else
    {
        cout << it - v.begin();
    }

    return 0;
}
