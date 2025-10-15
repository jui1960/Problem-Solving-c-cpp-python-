
#include <stdio.h>
int main()
{
    int t; 
    scanf("%d", &t);
    for (int i = 0; i < t; i++)

    {
        char s[100001];
        scanf("%s", s);
        int length = strlen(s);
        int good = 1;
        for (int i = 0; i < length; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                good = 0;
                break;
            }
        }
        if (good == 0)
        {
            printf("Good\n");
        }
        else
            printf("Bad\n");
    }
}
