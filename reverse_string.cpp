#include <stdio.h>
#include <string.h>
void reStr(char str[]) 
{
    int n=strlen(str);
    for (int i=0;i<n/2;i++) 
	{
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}
int main()
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    reStr(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

