#include <stdio.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s %s", a, b);

    int length_A = strlen(a);
    int length_b = strlen(b);
    printf("%d %d\n", length_A, length_b);
    printf("%s%s\n", a, b);

    for (int i = 0; i < length_A; i++)
    {
        int temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        printf("%s %s", a, b);
        break;
    }

    return 0;
}
