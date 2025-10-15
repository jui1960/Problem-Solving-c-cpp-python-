
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int min = __INT_MAX__;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int value = a[i] + a[j] + j - i;
                //    printf("%d",value);
                if (min > value)
                {
                    min = value;
                }
            }

        }
        printf("%d\n", min);
    }

    return 0;
}