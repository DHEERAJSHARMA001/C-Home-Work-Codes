//Write a program to read three variable x,y,z, use conditional statement and evaluate values of 
//variables a,b,c .Perform the sum with two sets of variables Chevk the sums for equality and print dufferent messages.
#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d %d %d",&x,&y,&z);
    printf("x value is: %d\n",x);
    printf("y value is: %d\n",y);
    printf("z value is: %d\n",z);
    a=(x>=5)?7:9;
    b=(x<=5)?6:8;
    c=(x==5)?5:4;
    printf("\n a value is:%d",a);
    printf("\n b value is:%d",b);
    printf("\n c value is:%d",c);
    int sum1=x+y+z;
    int sum2=a+b+c;
    printf("\n sum1 value is :%d\n",sum1);
    printf("\n sum2 value is :%d\n",sum2);
    (sum1==sum2)?printf("\nboth are equal"):printf("\n both are not equal");
    return 0;
}
    

