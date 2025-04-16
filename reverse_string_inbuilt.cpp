#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    printf("Enter a string \n");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

