// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {

//         char a[10000];
//         scanf("%s", a);
//         int length = strlen(a);

//         for (int i = length - 1; i >= 0; i--)
//         {

//             printf("%d ", a[i] - '0');
//         }

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        if (n==0)
        {
            printf("0");
        }
        
        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }

        printf("\n");
    }

    return 0;
}
