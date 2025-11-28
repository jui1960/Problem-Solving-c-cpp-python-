#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int j = 1; j <= T; j++)
    {
        int N;
        scanf("%d", &N);
        if (N % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(N>0)
        {
            pos++;
        }
        else if(N<0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d",neg);
    return 0;
}