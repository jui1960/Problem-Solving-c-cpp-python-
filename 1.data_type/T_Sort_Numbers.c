#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int A = a;
    int B = b;
    int C = c;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);

    printf("\n");

    printf("%d\n%d\n%d\n", A, B, C);
    return 0;
}

// if (a > b)
// {
//     printf("%d\n", b);
// }
// if (a > c)
// {
//     printf("%d\n", c);
// }
// if (a > b && a > c)
// {
//     /* code */ printf("%d", a);
// }

// if (b > c)
// {
//     printf("%d", c);
// }
// if (b > a)

// {
//     printf("%d", a);
// }
// if (b > a && b > c)
// {
//     /* code */ printf("%d", b);
// }
// if (c > a)
// {
//     printf("%d", a);
// }
// if (c > b)
// {
//     printf("%d", b);
// }
// if (c > b && c > a)
// {
//     /* code */ printf("%d", c);
// }
