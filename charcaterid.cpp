#include<stdio.h>
int main()
{
	char x;
	printf("Enter a character \n");
	scanf("%c", &x);
	int k=x;
	if(k>=65&&k<=90)
	{
		printf("Charcter is uppercase alphabet");
	
	}
	 else if(k>=97&&k<=122)
	{
		printf("Charcter is lowercase alphabet");
	
	}
	else
	{
		printf("Charcter is not an alphabet");
	
	}
	return(0);
}
