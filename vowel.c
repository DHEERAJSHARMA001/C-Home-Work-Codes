#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character");
    scanf("%c",&x);
    (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')?printf("vowel\n"):printf("consonant\n");
    return 0;
}