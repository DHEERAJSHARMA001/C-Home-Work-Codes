//Using Ternary Method:
#include<stdio.h>
void main()
{ 
    int a,b,c,big ;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a,&b,&c);
    big =a>b? (a>c? a:c) :(b>c?b:c);
    printf("The largest number is: %d\n",big);
}

//Using elseif:
#include<stdio.h>
void main()
{
int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b&&a>=c)
    {
        printf("The largest number is: %d\n",a);
    } 
    else 
    {
        if(b>=a&&b>=c) 
    {
       printf("The largest number is: %d\n",b);
    } 
    else 
    {
        printf("The largest number is: %d\n",c);
    }
    }
}

//Using Nested If:
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>=b) 
{
    if(a>=c) 
{
    printf("The largest number is: %d\n",a);
} 
else
{
    printf("The largest number is: %d\n",c);
}
} 
else
{
    if(b>=c) 
{
    printf("The largest number is: %d\n",b);
}
else 
{
    printf("The largest number is: %d\n",c);
}
}
}