#include<stdio.h>
int main(){
    int x,i,y;
    scanf("%d",&x);
    for( i=1;i<=20;i++)
    {
        y=i*x;
        printf("%d*%d=%d\n",x,i,y);
    }
    return 0;
    
}