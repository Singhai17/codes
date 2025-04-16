#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a number \n");
	scanf("%d",&a);
	c=a*a;
	b=c*a;
	printf("The square of number= %d \n",c);
	printf("The cube of number= %d ",b);
	return(c);
}
