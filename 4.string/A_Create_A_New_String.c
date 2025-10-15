#include <stdio.h>
int main()
{

    char s[10001];
    scanf("%s", s);
    char t[10001];
    scanf("%s", t);
    int s_length = strlen(s);
    int t_length = strlen(t);
    printf("%d %d\n", s_length, t_length);
    printf("%s %s", s, t);
    return 0;
}
