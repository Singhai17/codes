#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter dividend");
	scanf("%d",&a);
	printf("Enter divisor");
	scanf("%d",&b);
	c=a%b;
	printf("The remainder= %d ",c);
	return(c);
}
