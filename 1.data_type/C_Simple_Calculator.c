
#include <stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    long long int sum = x + y;
    long long int mul = x * y;
    long long int sub = x - y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, sub);
    return 0;
} // #include <stdio.h>
// int main()
// {
//     long long int x, y;

//     scanf("%lld %lld", &x, &y);

//     int sum = x + y;
//     int mul = x * y;
//     int sub = x - y;

//     printf("%d + %d = %d\n", x, y, sum);
//     printf("%d * %d = %d\n", x, y, mul);
//     printf("%d - %d = %d\n", x, y, sub);
//     return 0;
// }