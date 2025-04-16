#include<stdio.h>
int main()
{
	char x;
	int k;
	printf("Enter a character \n");
	scanf("%c", &x);
	k=x;
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("The character is a vowel");
	}
	else if((k>=65&&k<=90)||(k>=97&&k<=122))
	{
		printf("The character is consonant");
	}
	else
	{
		printf("The character is not an alphabet");
	}
	return(0);
}
