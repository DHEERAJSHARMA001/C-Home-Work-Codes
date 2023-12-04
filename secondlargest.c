#include<stdio.h>
void main(){
    int n,max=0,ind=0,max2=0;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements : ");
    for (i = 0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            ind=i;
            continue;
        }
    }
    max2=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max2&&a[i]<max)
        {
            max2=a[i];
            ind=i;
        //continue
        }
    }
    printf("the max element is:%d\n",max);
    printf("the second max element is:%d",max2);
    printf("the index is:%d",ind);
}