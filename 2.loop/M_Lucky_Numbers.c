#include <stdio.h>
#include <stdbool.h>

bool isLucky(int n) {
    char s[20];
    sprintf(s, "%d", n);  

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '4' && s[i] != '7')
            return false;
    }
    return true;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    bool found = false;

    for (int i = a; i <= b; i++) {
        if (isLucky(i)) {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found) {
        printf("-1");
    }

    return 0;
}
