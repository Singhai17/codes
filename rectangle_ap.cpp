#include<stdio.h>
int main()
{
	int a, p, x, y;
	printf("Enter length and breadth of rectangle \n");
	scanf("%d %d", &x, &y);
	a=x*y;
	p=2*(x+y);
	printf("Area of rectangle= %d \n",a);
	printf("Perimeter of rectangle= %d \n",p);
	return(0);
}
