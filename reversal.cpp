#include<stdio.h>
int main()
{
	int n;
	//printf("Enter a nigga \n");
	printf("Enter a number \n");
	scanf("%d", &n);
	if(n==0)
	printf("Reverse is= 0 \n");
	else if(n>0)
	{
		int sum=0, d, m=n;
		while(m>0)
		{
			d=m%10;
			sum=sum*10+d;
			m=m/10;
		}
		printf("Reverse is= %d \n", sum);
	}
	else
	{
		int sum=0, d, m=-n;
		while(m>0)
		{
			d=m%10;
			sum=sum*10+d;
			m=m/10;
		}
		printf("Reverse is= %d \n", (-sum));
	}
	return(0);
}
