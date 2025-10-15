#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int year = 0;
    int month = 0;
    int days = 0;

    if (x >= 365)
    {
        year = x / 365;

        x = x - (365 * year);
    }
    if (x >= 30)
    {
        month = x / 30;
        x = x - (30 * month);
    }

    if (x >= 1)
    {
        days = x / 1;
    }

    printf("%d years\n%d months\n%d days", year, month, days);

    return 0;
}