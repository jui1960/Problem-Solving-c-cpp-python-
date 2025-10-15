// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int sum = 0;
//     int count = 0;
//     int i = 1;
//     while (i <= n)
//     {
//         int dig =  n % 10;
//         n /= 10;
//         printf("%d",dig);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    char a[10001];
    scanf("%s", &a);
 
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        sum += a[i]-48;
    }
 
    printf("%d", sum);
}