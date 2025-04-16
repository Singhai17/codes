#include<stdio.h>
int main()
{
	char cType;
	int iType;
	float fType;
	double dType;
	printf("Size of char in bytes= %d \n", sizeof(cType));
	printf("Size of int in bytes= %d \n", sizeof(iType));
	printf("Size of float in bytes= %d \n", sizeof(fType));
	printf("Size of double in bytes= %d \n", sizeof(dType));
	//printf("Size of char in bytes= 1");
	//printf("Size of int in bytes= 4");
	//printf("Size of float in bytes= 4");
	//printf("Size of double in bytes= 8");
	printf("Size of char in bytes= %d \n", sizeof(char));
	printf("Size of int in bytes= %d \n", sizeof(int));
	printf("Size of float in bytes= %d \n", sizeof(float));
	printf("Size of double in bytes= %d \n", sizeof(double));
}
