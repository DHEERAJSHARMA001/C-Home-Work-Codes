#include<stdio.h>
int main()
{
    int a,sum=0,square=0;
    for(a=1;a<=5;a++)
    {
        printf("%d\t",a);
        printf("%d\n",a*a);
        sum+=a;
        square+=a*a;
    }
    printf("Sum of first five numbers: %d\n",sum);
    printf("Square of first five number :%d\n",square);
    
    return 0;
}