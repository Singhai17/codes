#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of array \n");
	scanf("%d", &n);
	int a[n];
	int i, j, t;
	printf("Enter numbers in array \n");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	printf("Pre sorting: \n");
	for(i=0;i<n;i++)
	printf("At position %d: %d \n", i, a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Post sorting: \n");
	for(i=0;i<n;i++)
	printf("At position %d: %d \n", i, a[i]);
	return 0;
}
