#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
 
    for (int i = 1; i <= n; i++)
    {
       
        int prime = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                prime++;
            }
        }

        if (prime == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
