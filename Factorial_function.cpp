#include<stdio.h>
int factorial(int a)
{
	int c=1, i;
	for(i=1;i<=a;i++)
	c=c*i;
	return(c);
}
int main()
{
	int n, f;
	printf("Enter a number \n");
	scanf("%d", &n);
	f=factorial(n);
	printf("Factorial of %d = %d", n, f);
	return(0);
}
