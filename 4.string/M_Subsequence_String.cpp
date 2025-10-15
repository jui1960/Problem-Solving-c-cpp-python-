// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     string subsequence = "hello";
//     int sub = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == subsequence[sub])
//         {
//             sub++;
//             if (sub == subsequence.size())
//             {
//                 cout << "YES" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<"NO"<<endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string subsequence = "hello";
    // int i = 0;
    int sub_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == subsequence[sub_count])
        {
            sub_count++;
            if (sub_count == subsequence.size())
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}