#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a - b;

    if (sum <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}