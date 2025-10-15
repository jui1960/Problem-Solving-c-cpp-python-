#include <stdio.h>
int main()
{
    int a, b;
    long long int c;
    char s, q;
    scanf("%d %c %d %c %lld", &a, &s, &b, &q, &c);
    int result = 0;
    if (s == '+')
    {

        result = a + b;
    }
    if (s == '-')
    {
        result = a - b;
    }

    if (s == '*')
    {
        result = a * b;
    }
    if (result == c)
    {
        printf("Yes");
    }
    else
    {
        printf("%d", result);
    }

    return 0;
}