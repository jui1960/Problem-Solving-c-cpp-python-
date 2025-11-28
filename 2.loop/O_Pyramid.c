#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ster = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= ster; j++)
        {
            printf("*");
        }
        printf("\n");
        ster++;
    }

    return 0;
}