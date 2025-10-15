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
    int count_0 = 0;
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count_0++;
        }
        else if (a[i] == 1)
        {
            count_1++;
        }
    }
    printf("%d %d", count_0, count_1);

    return 0;
}