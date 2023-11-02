#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("factorial of given number is %d\n",fact);
    return 0;
}