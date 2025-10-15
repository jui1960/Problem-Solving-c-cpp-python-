#include <stdio.h>
int main()
{
    long long int eyes, mouth, body;
    scanf("%lld %ld %lld", &eyes, &mouth, &body);
    int val1, val2, val3 = 0;
    int count = 0;

    // one eye,one mouth,one body
    if (eyes <= mouth && eyes <= body)
    {
        val1 = eyes;
    }
    else if (mouth <= body)
    {
        val1 = mouth;
    }
    else
    {
        val1 = body;
    }
    count = count + val1;

    eyes -= val1;
    mouth -= val1;
    body -= val1;

    long long int div_eyes = eyes / 2;

    if (div_eyes <= mouth && div_eyes <= body)
    {
        val2 = div_eyes;
    }
    else if (mouth <= body)
    {
        val2 = body;
    }
    else
    {
        val2 = body;
    }

    count = count + val2;

    eyes -= val2;
    mouth -= val2;
    body -= val2;

    printf("%d\n", eyes);
    printf("%d\n", mouth);

    printf("%d", body);

    // printf("%d\n", count);

    return 0;
}