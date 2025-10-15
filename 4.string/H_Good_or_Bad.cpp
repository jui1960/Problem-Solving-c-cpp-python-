

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)

    {
        string s;
        cin >> s;
        int good = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                good = 0;
                break;
            }
        }
        if (good == 0)
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;
    }
}

//     {
//         string s;
//         cin >> s;
//         int good = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             for (int j = i + 1; j < s.size() - 1; j++)
//             {
//                 if (s[i] == s[j])
//                 {
//                     good = 1;
//                     // break;
//                 }
//                 else
//                 {
//                     good = 0;
//                 }
//             }
//         }
//         if (good == 0)
//         {
//             cout << "Good" << endl;
//         }
//         else
//         {
//             cout << "Bad" << endl;
//         }
//     }
// }

//         string s;
//         cin >> s;
//         int good = 0;
//         int i = 0;
//         int j = s.size() - 1;
//         while (i < j)
//         {
//             if (s[i] == s[j])
//             {
//                 good = 1;
//                 break;
//             }
//            i++;
//            j--;
//         }

//         if (good == 0)
//         {
//             cout << "Good" << endl;
//         }
//         else
//         {
//             cout << "Bad" << endl;
//         }
//     }
// }
