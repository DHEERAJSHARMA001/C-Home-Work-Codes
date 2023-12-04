//Write a program to store 10 students roll numbers and Print all the students roll numbers
//and also print 6th and 8th students roll numbers separately.
/*#include<stdio.h>
void main()
{
    int a[10]={11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("The 6th student roll no is %d\n",a[5]);
    printf("The 8th student roll no is %d\n",a[7]);

}*/
//Adress also
/*#include<stdio.h>
void main()
{
    int a[10]={11,12,13,14,15,16,17,18,19,20};
    printf("Size of int: %d bytes",sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("\na[i]=%d address=%d\n",a[i],&a[i]);
    }
    printf("The 6th student roll no is %d\n",a[5]);
    printf("The 8th student roll no is %d\n",a[7]);

}*/
#include<stdio.h>
void main()
{
    int sum,sum1;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
        print("Even and odd=%d",a[i]);

    }

    printf("Sum of the even elements in array=%d\n",sum);
    printf("Sum of the odd elements in array=%d\n",sum1);   
}