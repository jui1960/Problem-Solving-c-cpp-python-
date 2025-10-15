#include <stdio.h>
int main()
{
    char a[1000001];
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
        printf("NO");
    }

    return 0;
}