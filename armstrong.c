//WAP to check the given number is armstrong or not 
//153
//1^3=1
//5^3=125
//3^3=27
//1+125+27=153
#include<stdio.h>
int main () {
    int n,r,sum=0,num1;
    printf ("enter the number:");
    scanf ("%d",&n);
    num1=n;
    while(n>0) {
        r=n%10;
        sum=sum+ (r*r*r);
        n=n/10;
    }
    if(num1==sum){
        printf ("It is an Armstrong number.");
    }
    else{
        printf ("Its not an Armstrong number.");
    }
    return 0;
}