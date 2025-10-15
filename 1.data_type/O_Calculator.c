#include <stdio.h>
int main()
{
    int a, b;
    char x;

    scanf("%d%c%d", &a, &x, &b);

    int result = 0;
    if (x == '+')
    {
        result = a + b;
        printf("%d", result);
        return 0;
    }

    else if (x == '-')
    {
        result = a - b;
        printf("%d", result);
        return 0;
    }

    else if (x == '*')
    {
        result = a * b;
        printf("%d", result);
        return 0;
    }
    else if (x == '/')
    {
        result = a / b;
        printf("%d", result);
        return 0;
    }

    
}