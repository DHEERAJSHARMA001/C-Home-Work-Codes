#include<stdio.h>
void dheeraj();
void main()
{
   dheeraj();
   dheeraj();
   dheeraj();
}
void dheeraj()
{
    static int x=1;
    printf("%d\n",x);
    x=x+5;

    
}