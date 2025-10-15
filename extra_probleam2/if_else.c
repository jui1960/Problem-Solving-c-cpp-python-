#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if (n >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (n >= 500)
    {
        printf("One large Pizza");
    }
    else if ( n >= 250)
    {
        printf("Three Small Burger");
    }
    else if (n >= 100)
    {
        printf("Three fuska");
    }

    else if (n < 100)
    {
        printf("Nothing");
    }

    return 0;
}