#include<stdio.h>>
#include <string.h>
    int main()
{
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);
    int i = 0;
    int j = length - 1;
    int ple = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            ple = 1;
            break;
        }
        i++;
        j--;
    }
    if (ple == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}