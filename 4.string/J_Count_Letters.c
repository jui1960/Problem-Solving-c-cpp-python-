
#include <stdio.h>
int main()
{
    char a[1000001];
    scanf("%s", a);

    int count[26] = {0}; // a-z total 26 letter,26 ta array create hoia count korbe
    for (int i = 0; a[i] != '\0'; i++)
    {
        int value = a[i] - 97; // ascii  a = 97 b =98 c=99
        count[value]++;        // i to 0 index..tahole a[i] er valu ke 0 te convart korar jnne
    }                           // a[i] - 97 kora holo. 97(a)-97 = 0, 98(b)-97 = 1,99(c)-97 = 2
    for (char i = 0; i < 26; i++)
    {
        if (count[i] > 0) // jegula char 0 er beshi ase sudu segula print korbe
        {
            printf("%c : %d\n", i + 97, count[i]);
        }                       // i(0)+97 = 97(a),i(1)+97 = 98(b).........
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char a[10000001];
//     scanf("%s", a);

//     int count[26] = {0};
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         int value = a[i]-97;
//         count[value]++;
//     }
//     for (char i = 0; i < 26; i++)
//     {
//         if (count[i] > 0)
//         {
//             printf("%c : %d\n", i + 97, count[i]);
//         }
//     }

//     return 0;
// }