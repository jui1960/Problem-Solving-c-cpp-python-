#include <stdio.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    int length = strlen(a);
    int i = 0;
    int j = length - 1;
    int ple = 0;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            ple = 1;
            break;
        }
        i++;
        j--;
    }
    if (ple == 0)
    {
        printf("%s\nYES", a);
    }

    else
    {
        
        j--;
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        
        printf("%s\nNO", a);

       

        // printf("%d%d\nNO", a[i] - 48, a[j] - 48);
    }

    return 0;
}