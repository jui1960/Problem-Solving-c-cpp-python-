#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int fib1 = 0;
    int fib2 = 1;

    if (n >= 1)
        printf("%d ", fib1);
    if (n >= 2)
        printf("%d ", fib2);
    for (int i = 1; i < n - 1; i++)
    {

        int fib3 = fib1 + fib2;

        printf("%d ", fib3);

        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
