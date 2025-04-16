#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter n for n array \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers in array \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int m1=a[0], m2=a[0];
	for(i=1;i<n;i++)
	{
		if(m1<a[i])
		m1=a[i];
	}
	for(i=1;i<n;i++)
	{
		if(m2<a[i]&&a[i]<m1)
		m2=a[i];
	}
	printf("The greatest number= %d \n ", m1);
	printf("The 2nd greatest number= %d", m2);
	return(0);
}
