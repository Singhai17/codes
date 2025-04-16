#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a number");
	scanf("%d",&a);
	b=1;
	while(b<=10)
	{
		c=a*b;
		printf("%d X %d = %d \n", a, b, c);
		b++;
	}
	return(0);
}
