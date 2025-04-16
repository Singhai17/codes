#include <stdio.h>
#include <ctype.h>
int main() 
{
    char str[1000];
    int cnt=0;
    int inW=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i=0;str[i]!='\0';i++) 
	{
        if (isspace((unsigned char)str[i]))
		{
            inW=0;
        }
		else if(!inW) 
		{
            inW=1;
            cnt++;
        }
    }
    printf("Number of words: %d\n", cnt);
    return 0;
}

