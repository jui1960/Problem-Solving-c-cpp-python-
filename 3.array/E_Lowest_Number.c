#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 1;i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    int low = __INT_MAX__;
    int index = 0;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] < low)
        {
            low = A[i];
            index = i;
           
        }  
    }
    printf("%d %d", low,index);

    return 0;
}