#include<stdio.h>
int main()
{
    int years,choice;
    printf("Enter your choice from the following:");
    printf("1.Seconds\n");
    printf("2.Minutes\n");
    printf("3.Hours\n");
    printf("4.Days\n");
    printf("5.Months\n");
    printf("Enter years:");
    scanf("%d",&years);
    printf("Enter your choice: ");
    scanf("%d",&choice);
    long mon=years*12;
    long days=mon*30;
    long hours=days*24;
    long min=hours*60;
    long sec=min*60;
    switch(choice)
    {
        case 1:
        printf("%d Years in Seconds is : %d Seconds",years,min);
        break;
        case 2:
        printf("%d Years in Minutes is : %d Minutes",years,hours);
        break;
        case 3:
        
    
    }



}