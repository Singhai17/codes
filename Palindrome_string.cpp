#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	printf("Enter a string \n");
	scanf("%s", c);
	int t=strlen(c);
	char s[100];
	int m=0;
	for(int i=0;i<t;i++)
	{
		if(c[i]==c[t-1-i])
		m++;
	}
	if(m==t)
	printf("String is palindrome");
	else
	printf("String is not palindrome");
	return(0);
}
