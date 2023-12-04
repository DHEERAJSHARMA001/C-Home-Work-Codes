#include <stdio.h>
 #include <string.h>
  int main()
   { char string1[100], string2[100];
    int result;
     printf("Enter first string: ");
      fgets(string1, sizeof(string1), stdin);
       printf("Enter second string: ");
        fgets(string2, sizeof(string2), stdin);
         // remove newline character string1[strlen(string1) - 1] = '\0'; string2[strlen(string2) - 1] = '\0'; result = strcmp(string1, string2); if (result > 0) printf("\"%s\" is greater than \"%s\".\n", string1, string2); else if (result < 0) printf("\"%s\" is less than \"%s\".\n", string1, string2); else printf("\"%s\" is equal to \"%s\".\n", string1, string2); return 0;