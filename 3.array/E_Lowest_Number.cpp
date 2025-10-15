// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>v[i];
//     }
//     // int mini = INT_MAX;
//        int mini =  min(v,v+n);

//     for (int i = 1; i <=n; i++)
//     {
//        cout<<mini<<" "<<i;
//     //    break;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int mn = INT_MAX;
    int ind = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            ind = i;
        }
    }
    cout<< mn<< " "<<ind;

    return 0;
}