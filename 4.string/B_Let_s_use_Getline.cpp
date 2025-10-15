// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '\\')
//         {
//             break;
//         }
//         else
//         {
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
    getline(cin, s);

    for (char c : s)
    {
        if (c == '\\')
        {
            break;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}