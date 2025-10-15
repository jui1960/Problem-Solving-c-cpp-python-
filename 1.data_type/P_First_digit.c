#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int firstdigit = x / 1000;

    if (firstdigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}