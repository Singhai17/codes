#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, D, rt1, rt2, squirt;
	printf("Enter values for a, b, c for expression ax^2 + bx + c = 0 \n");
	scanf("%f %f %f", &a, &b, &c);
	D=(b*b)-(4*a*c);
	if(D==0)
	{
		rt1=-b/(2*a);
		rt2=rt1;
		printf("Both roots are real and equal \n");
		printf("Value of roots= %f \n", rt1);
	}
	else if(D>0)
	{	
		squirt=sqrt(D);
		rt1=(-b+squirt)/(2*a);
		rt2=(-b-squirt)/(2*a);
		printf("Roots are real and distinct \n");
		printf("Value of greater root= %f \n ", rt1);
		printf("Value of lesser root= %f", rt2);
	}
	else
	{
		printf("Roots are imaginary");
		//printf("Toh nahi bataunga");
	}
	return(0);
}
