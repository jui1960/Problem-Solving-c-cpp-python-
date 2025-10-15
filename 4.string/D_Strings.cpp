// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a;
//     cin >> a;
//     string b;
//     cin >> b;
//     string c = a + b;
//     cout << a.size() << " " << b.size() << endl<< c << endl;
//     swap(a[0], b[0]);
//     cout << a << " " << b;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a>>b;
    cout << a.size() << " " << b.size() << endl<< a+b << endl;
    swap(a[0], b[0]);
    cout << a << " " << b;
    return 0;
}