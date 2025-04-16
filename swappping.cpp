#include<stdio.h>
int main()
{
	int a, b, p;
	printf("Enter two numbers \n");
	scanf("%d%d", &a, &b);
	printf("Value in a %d \n", a);
	printf("Value in b %d \n", b);
	//method 1
	p=a;
	a=b;
	b=p;
	printf("New value in a %d \n", a);
	printf("New value in b %d \n", b);
	//method 2
	b=a+b;
	a=b-a;
	b=b-a;
	printf("New value in a %d \n", a);
	printf("New value in b %d \n", b);
	return(0);
}
