// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == ',')
//         {
//             cout << " ";
//         }
//         else if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             s[i] = s[i] - 32;
//             cout << s[i];
//         }
//         else
//         {
//             s[i] = s[i] + 32;
//             cout << s[i];
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == ',')
        {
            cout << " ";
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
            cout << c;
        }
        else
        {
            c = c + 32;
            cout << c;
        }
    }

    return 0;
}