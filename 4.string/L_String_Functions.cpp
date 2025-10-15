// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     string s;
//     cin >> s;

//     for (int i = 0; i < q; i++)
//     {
//         string query;
//         cin >> query;

//         if (query == "pop_back")
//         {
//             s.pop_back();
//             // cout<<s<<endl;
//         }
//         else if (query == "front")
//         {
//             cout << s.front() << endl;
//         }
//         else if (query == "back")
//         {
//             cout << s.back() << endl;
//         }
//         else if (query == "sort")
//         {
//             int l, r;
//             cin >> l >> r;
//             sort(s.begin() + l - 1, s.begin() + r);
//         }
//         else if (query == "reverse")
//         {
//             int l, r;
//             cin >> l >> r;
//             reverse(s.begin() + l - 1, s.begin() + r);
//         }
//         else if (query == "print")
//         {
//             int pos;
//             cin >> pos;
//             cout << s[pos - 1] << endl;
//         }
//         else if (query == "substr")
//         {
//             int l, r;
//             cin >> l >> r;
//             cout << s.substr(l - 1, r - l + 1) << endl;
//         }
//         else if (query == "push_back")
//         {
//             char x;
//             cin >> x;
//             s.push_back(x);
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    while (Q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back") {
           
            S.pop_back();
        }
        else if (cmd == "front") {
            cout << S.front() << "\n";
        }
        else if (cmd == "back") {
            cout << S.back() << "\n";
        }
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
           
            sort(S.begin() + l - 1, S.begin() + r);
        }
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(S.begin() + l - 1, S.begin() + r);
        }
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << "\n";
        }
        else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            cout << S.substr(l - 1, r - l + 1) << "\n";
        }
        else if (cmd == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}
