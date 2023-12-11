//swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    b=a+b+c;//a=10,b=20,c=30
    c=b-(a+c);
    a=b-(a+c);
    b=b-(a+c);


    printf(" %d\n",a);
    printf(" %d\n",b);
    printf("%d\n",c);
    return 0;
}