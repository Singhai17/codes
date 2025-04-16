#include<stdio.h>
int main()
{
	int c1, c2, r1, r2, ch=1;
	printf("Enter size of mXn for first matrix \n");
	scanf("%d %d", &c1, &r1);
	printf("Enter size of mXn for second matrix \n");
	scanf("%d %d", &c2, &r2);
	if(c1!=c2||r1!=r2)
	{
		printf("Matrices are not equal");
	}
	else
	{
		int i, j;
		int a1[c1][r1];
		int a2[c2][r2];
		printf("Enter numbers in first matrix \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d", &a1[i][j]);
		}
		printf("Enter numbers in second matrix \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d", &a2[i][j]);
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				if(a1[i][j]!=a2[i][j])
				ch=0;
			}
		}
		if(ch==1)
		printf("Matrices are equal");
		else
		printf("Matrices are not equal");
	}
	return(0);
}
