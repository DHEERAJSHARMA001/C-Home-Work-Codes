#include<stdio.h> 
int main()
{
    int f=0,s=1,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",f);
        int next=f+s;
        f=s;
        
        s=next;

      
    }
    return 0;

}