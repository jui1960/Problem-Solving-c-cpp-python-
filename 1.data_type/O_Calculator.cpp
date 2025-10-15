#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    char s;
    cin >> a >> s >> b;
    int ans = 0;
    if (s == '+')
    {
        ans = a + b;
    }
    else if (s == '-')
    {
        ans = a - b;
    }
    else if (s == '*')
    {
        ans = a * b;
    }
    else if (s == '/')
    {
        ans = a / b;
    }
    cout << ans;

    return 0;
}