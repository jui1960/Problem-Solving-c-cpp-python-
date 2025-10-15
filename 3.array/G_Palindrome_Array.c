#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j = n - 1;

    int ple = 0;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            ple = 1;
            break;
        }
        i++;
        j--;
    }
    if (ple == 0)
    {
        printf("YES");
        return 0;
    }
    else
    {
        printf("NO");
    }

    return 0;
}