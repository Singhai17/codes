#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a number");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{
		c=a*b;
		printf("%d X %d = %d \n", a, b, c);
	}
	return(0);
}
