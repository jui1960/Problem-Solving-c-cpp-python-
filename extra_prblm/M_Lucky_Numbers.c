#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > 1)
    {
        if ((a == 4) || (a == 7))
        {
            printf("4 7");
        }

        else
        {
            printf("-1");
        }
    }

    return 0;
}