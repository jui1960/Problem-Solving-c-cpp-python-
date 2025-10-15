#include <stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
        long long int sum = (r * (r + 1) / 2) - (l* (l - 1) / 2);
        // long long int sum1 = r * (r + 1) / 2;
        // long long int sum2 = l * (l - 1) / 2;

        // long long int sum = sum1 - sum2;

        // printf("%lld\n",abs( sum));
        printf("%lld\n",llabs(sum));
    }

    return 0;
}