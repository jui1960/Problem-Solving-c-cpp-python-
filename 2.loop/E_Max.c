#include<stdio.h>
int main()
{
    int n;
    
    int password = 1999;
    while(scanf("%d",&n)){
        if(n==password)
        {
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}