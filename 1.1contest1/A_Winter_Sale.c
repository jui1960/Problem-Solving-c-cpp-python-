#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float m = 100 - x;

    float val = (x * p) / m;
    float ans = val + p;
    printf("%.2f", ans);

    return 0;
}