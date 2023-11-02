#include<stdio.h>
int main(){
    int j=1,sum=0;
    while(j<=10){
        sum+=j;
        j++;
    }
    printf("Sum of ten consecutive number :%d",sum);
    return 0;
}