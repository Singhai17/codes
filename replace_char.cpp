#include <stdio.h>
int main() 
{
    char s[100];
    char oldc, newc;
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter the character to be replaced: ");
    scanf(" %c", &oldc);
    printf("Enter the new character: ");
    scanf(" %c", &newc);
    for(int i=0;s[i]!='\0';i++) 
	{
        if(s[i]==oldc)
            s[i]=newc;
    }
    printf("Modified sentence: %s\n", s);
    return 0;
}

