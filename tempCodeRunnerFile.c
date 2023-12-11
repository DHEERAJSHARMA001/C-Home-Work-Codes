#include<stdio.h>
void main()
{
   int n=5,i,j,temp;
   int a[]={10,12,17,23,30};
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n/2;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(j=n/2;j<n-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}