// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double R;
//     scanf("%lf", &R);
//     double area = 3.141592653 * pow(R, 2);
//     printf("%.9lf\n", area);
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main()
{
    double R;
    scanf("%lf", &R);
    double area = 3.141592653 * R * R;
    printf("%.9lf\n", area);
    return 0;
}
