//Malloc() & Free()
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char*ptr=(char*)malloc(sizeof(char));
    if(ptr==NULL)
    printf("Memory Error");
    else{
        *ptr='s';
        printf("%c \t",*ptr);
    }
    free(ptr);
    printf("%c",*ptr);
}