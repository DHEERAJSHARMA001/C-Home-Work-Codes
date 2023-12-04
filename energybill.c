#include <stdio.h>

int main() {
    int i,x,y,z;
    float a;
    printf("enter the initial reading :");
    scanf("%d",&x);
    printf("enter the final reading :");
    scanf("%d",&y);
    
    z =y-x;
    
    if(z>=200&&z<=500){
        a=z*3.50;
        
    }
    else if (z>=100&&z<=200){
        a=z*2.50;
    }
    else if(z<=100){
        a=z*1.50;
    }
    else{
        printf("the record is outoff range !! ");
        
    }
    printf("total consumed units is %d so the bill is %.2f",z,a);
}