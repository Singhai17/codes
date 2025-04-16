#include<stdio.h>
int main()
{
	char x[20];
	printf("Write your name");
	gets(x);
	printf("Your name is: %s", x);
	return(0);
}
