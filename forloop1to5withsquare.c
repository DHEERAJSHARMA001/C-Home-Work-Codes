//Write a program to print thr first five numbers from 1 together with there squares
#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        printf("%d\t",a);
        printf("%d\n",a*a);
    }
    return 0;
}