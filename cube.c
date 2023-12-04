//WAP to find the cubes of 1 to given numbers using do while loop
#include<stdio.h>
void main()
{
    int a,i=1,cube;
    printf("Enter the number:",a);
    scanf("%d",&a);
    do
    {
      printf("%d\t",i);
      cube=i*i*i;
      i++;
    } while(i<=a);
    printf("%d\t",cube);
}