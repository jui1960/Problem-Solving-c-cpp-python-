#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);

    long long int digit_1 = n%10;
    long long digit_2 = m%10;

    long long int sum = digit_1 + digit_2;
    printf("%lld",sum);


    return 0;
}