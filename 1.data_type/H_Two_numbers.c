#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // float div = (float) a/b;

    float floor_ = floor((float)a / b);
    float ceil_ = ceil((float)a / b);
    float round_ = round((float)a / b);

    printf("floor %d / %d = %.0f\n", a, b, floor_);
    printf("ceil %d / %d = %.0f\n", a, b, ceil_);
    printf("round %d / %d = %.0f\n", a, b, round_);

    return 0;
}
