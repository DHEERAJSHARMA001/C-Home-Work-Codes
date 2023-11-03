//Write a program to print 1 -20 numbers by skipping the even numbers.
//1 3 5 7 9 11 13 15 17 19.
#include<stdio.h>
int main(){

    int e= 1 ;
    printf("Skipping even no.from 1-20 :\n");
    while(e<=20){
        
    printf("%d\n",e);
    e+=2;
    }
    return 0;

}