#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    // int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            // count = 0;
            printf("0 ");
        }
        else if (A[i] > 0)
        {
            printf("1 ");/* code */
        }
         
        else if (A[i] < 0)
        {
            printf("2 ");/* code */
        }
    }
    return 0;
}