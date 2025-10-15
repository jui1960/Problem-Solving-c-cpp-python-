#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    char y = 0;

    if (x >= 'a' && x <= 'z')
    {
        y = x - 32;
        printf("%c", y);
    }
    else
    {
        y = x + 32;
        printf("%c", y);
    }

    return 0;
}