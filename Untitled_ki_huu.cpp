#inlcude<stdio.h>
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
	
	return 0;
}
