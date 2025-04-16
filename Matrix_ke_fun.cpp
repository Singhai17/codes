#include<stdio.h>
int main()
{
	int m1, m2, n1, n2, i, j, k;
	printf("Enter mXn for 1st matrix and 2nd matrix \n");
	scanf("%d %d %d %d", &m1, &n1, &m2, &n2);
	int A[m1][n1];
	int B[m2][n2];
	printf("Enter values in 1st matrix \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		scanf("%d", &A[i][j]);
	}
	printf("Enter values in 2nd matrix \n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		scanf("%d", &B[i][j]);
	}
	if(n1!=m2)
	printf("Addition, subtraction and multiplication not possible\n");
	else if(n1==n2&&m1==m2)
	{
		printf("Addition, subtraction and multiplication are possible \n");
		int add[m1][n1];
		int sub[m1][n1];
		int C[m1][n2];
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				for(k=0;k<m2;k++)
				C[i][j]+=A[i][k]*B[k][j];
				add[i][j]=A[i][j]+B[i][j];
				sub[i][j]=A[i][j]-B[i][j];
			}
		}
		printf("Sum: \n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			printf("%d ", add[i][j]);
			printf("\n");
		}
		printf("Difference: \n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			printf("%d ", sub[i][j]);
			printf("\n");
		}
		printf("Product: \n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			printf("%d ", C[i][j]);
			printf("\n");
		}
	}
	else
	{
		printf("Only multiplication is possible \n");
		int C[m1][n2];
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				for(k=0;k<m2;k++)
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
		printf("Product: \n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			printf("%d ", C[i][j]);
			printf("\n");
		}
	}
}
