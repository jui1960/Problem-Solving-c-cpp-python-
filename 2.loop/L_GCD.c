#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int count = 0;
    for (int i = 1; i <=a ; i++)
    {
       if (a%i==0 && b%i == 0)
       {
        if (i>count)
        {
            count = i;
        }

       }
    }
    printf("%d",count);
    
    return 0;
}