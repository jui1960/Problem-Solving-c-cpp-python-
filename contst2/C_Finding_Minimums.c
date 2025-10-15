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
    int k;
    scanf("%d", &k);

    int min = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < k; j++)
        {

            if (a[i] <= min)
            {
                min = a[i];
            }
        }
    }
    printf("%d", min);

    return 0;
}