
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    cin >> s;
    char y[100];
    cin >> y;
    if (strcmp(s, y) == 0)
    {
        cout << s;
    }
    else if (strcmp(s, y) == 1)
    {
        cout << y;
    }
    else if (strcmp(s, y) == -1)
    {
        cout << s;
    }

    return 0;
}
//