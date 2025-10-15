#include <stdio.h>
#include <string.h>
int main()
{
    char f1[100], f2[100];
    scanf("%s %s", f1, f2);

    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
  

    char value = strcmp(f2, s2);

    if (value == 0) // 0 (equal) 1(f2 boro,s2 soto) -1(f2 soto,s2 boro)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}