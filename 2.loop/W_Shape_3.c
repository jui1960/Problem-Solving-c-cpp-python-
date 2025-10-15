#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ster = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= ster; j++)
        {
            printf("*");
        }
        printf("\n");
        ster += 2;
        space--;
    }

    int ster_ = (n * 2) - 1;
    int space_ = 0;
    for (int i = 0; i < n; i++)
    {

        for (int k = 1; k <= space_; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= ster_; j++)
        {
            printf("*");
        }
        printf("\n");
        ster_ -= 2;
        space_++;
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ster = 1;
//     int space = n - 1;
//     for (int i = 1; i < n; i++)
//     {

//         for (int k = 1; k <= space; k++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= ster; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         ster += 2;
//         space--;
//     }

//     int ster_ = (n * 2) - 1;
//     int space_ = 0;
//     for (int i = 0; i < n; i++)
//     {

//         for (int k = 1; k <= space_; k++)
//         {
//             printf(" ");
//         }

//         for (int j = ster_; j >= 1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//         ster_ -= 2;
//         space_++;
//     }

//     return 0;
// }