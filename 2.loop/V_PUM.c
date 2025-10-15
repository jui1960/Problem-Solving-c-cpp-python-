#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = n * 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= val; j++)
        {
            if (j % 4 == 0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ", j);
            }
        }

        return 0;
    }
}
