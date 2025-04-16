#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char c[100];
	printf("Enter a hexadecimal number \n");
	scanf("%s", c);
	int t, k, i;
	double sum=0.0, po;
	t=strlen(c);
	for(i=t-1;i>=0;i--)
	{
		switch(c[i])
		{
			case 'A':
			{
				k=10;
				break;
			}
			case 'B':
			{
				k=11;
				break;
			}
			case 'C':
			{
				k=12;
				break;
			}
			case 'D':
			{
				k=13;
				break;
			}
			case 'E':
			{
				k=14;
				break;
			}
			case 'F':
			{
				k=15;
				break;
			}
			default:
				k=c[i]-'0';
		}
		//float g=k*pow(16,(t-1-i));
		//printf("%f \n", g);
		po=k*(pow(16,t-1-i));
		sum=sum+po;
	}
	printf("Decimal value of %s = %f", c, sum);
	return(0);
}
