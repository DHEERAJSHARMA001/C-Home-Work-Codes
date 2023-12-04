#include<stdio.h>
int main(){
    int x,i,j;
    printf("ENter a number : ");
    scanf("%d",&x);
    
    for (i= 1;i<=x;i++){
        
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}