#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
            printf("%c", s[i]);
        }
        else
        {
            s[i] = s[i] + 32;
            printf("%c", s[i]);
        }
    }

    return 0;
}
