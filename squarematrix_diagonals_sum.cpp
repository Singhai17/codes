#include<stdio.h>
int main()
{
	int n, i, j, sp=0, ss=0;
	printf("Enter n for nXn matrix \n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter elements in nXn matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sp+=a[i][j];
			if(i==(n-j-1))
			ss+=a[i][j];
		}
	}
	printf("Sum of primary diagonal= %d \n", sp);
	printf("Sum of secondary diagonal= %d \n", ss);
	printf("Sum of both diagonals= %d \n", (sp+ss));
	return(0);
}
