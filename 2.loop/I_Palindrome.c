#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[100000];
    scanf("%s", s);

    int n = strlen(s);

    // Check palindrome
    bool isPal = true;
    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            isPal = false;
            break;
        }
        i++;
        j--;
    }

    // Reverse string
    char r[100000];
    for (int k = 0; k < n; k++)
    {
        r[k] = s[n - 1 - k];
    }
    r[n] = '\0';

    // Remove leading zeros from reversed
    int pos = 0;
    while (r[pos] == '0')
        pos++;

    if (pos == n)
        printf("0\n");
    else
        printf("%s\n", r + pos);

    // Print palindrome result
    if (isPal)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
