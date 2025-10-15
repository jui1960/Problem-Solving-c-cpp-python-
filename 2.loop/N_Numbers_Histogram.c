#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (s == '+')
        {
            for (int j = 1; j <= a[i]; j++)
            {
                printf("+");
            }

            printf("\n");
        }

        else if (s == '-')
        {
            for (int j = 1; j <= a[i]; j++)
            {
                printf("-");
            }

            printf("\n");
        }

        else if (s == '*')
        {
            for (int j = 1; j <= a[i]; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        else if (s == '/')
        {
            for (int j = 1; j <= a[i]; j++)
            {
                printf("/");
            }

            printf("\n");
        }
    }

    return 0;
}