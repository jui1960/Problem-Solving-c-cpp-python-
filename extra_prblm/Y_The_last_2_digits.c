#include <stdio.h>
#include<limits.h>
int main()
{
    long long int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int mul = a * b * c * d;
   
    
    int value = mul % 100;
    printf("%d",value);
    return 0;
}
//147276606 236,387,740