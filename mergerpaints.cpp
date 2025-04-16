#include <stdio.h>
#include <string.h>
int main()
{
	printf("Enter sizes for 2 arrays \n");
	int s1, s2, i, j, co;
	scanf("%d %d", &s1, &s2);
	printf("Enter given number for given data type arrays \n");
	printf("1 for String \n 2 for character \n 3 for integer \n 4 for double \n");
	scanf("%d", &co);
	switch(co)
	{
		case 1:
			{
			char st1[s1][100];
			char st2[s2][100];
			printf("Enter strings in 1st array \n");
			for(i=0;i<s1;i++)
			scanf("%s", st1[i]);
			printf("Enter strings in 2nd array \n");
			for(i=0;i<s2;i++)
			scanf("%s", st2[i]);
			char st3[s1+s2][100];
			for(i=0;i<s1;i++)
			strcpy(st3[i], st1[i]);
			for(i=s1;i<(s1+s2);i++)
			strcpy(st3[i], st2[i-s1]);
			printf("Merged array \n");
			for(i=0;i<s1+s2;i++)
			printf("%s \n", st3[i]);
			break;
			}
		case 2:
			{
			char ch1[s1];
			char ch2[s2];
			printf("Enter characters in 1st array \n");
			for(i=0;i<s1;i++)
			scanf("%c", ch1[i]);
			printf("Enter characters in 2nd array \n");
			for(i=0;i<s2;i++)
			scanf("%c", ch2[i]);
			char ch3[s1+s2];
			for(i=0;i<s1;i++)
			ch3[i]=ch1[i];
			for(i=s1;i<(s1+s2);i++)
			ch3[i]=ch2[i-s1];
			printf("Merged array \n");
			for(i=0;i<s1+s2;i++)
			printf("%c \n", ch3[i]);
			break;
			}
		case 3:
			{
			int nu1[s1];
			int nu2[s2];
			printf("Enter integers in 1st array \n");
			for(i=0;i<s1;i++)
			scanf("%d", nu1[i]);
			printf("Enter integers in 2nd array \n");
			for(i=0;i<s2;i++)
			scanf("%d", nu2[i]);
			char nu3[s1+s2];
			for(i=0;i<s1;i++)
			nu3[i]=nu1[i];
			for(i=s1;i<(s1+s2);i++)
			nu3[i]=nu2[i-s1];
			printf("Merged array \n");
			for(i=0;i<s1+s2;i++)
			printf("%d \n", nu3[i]);
			break;
			}
		case 4:
			{
			double do1[s1];
			double do2[s2];
			printf("Enter decimals in 1st array \n");
			for(i=0;i<s1;i++)
			scanf("%f", do1[i]);
			printf("Enter decimals in 2nd array \n");
			for(i=0;i<s2;i++)
			scanf("%f", do2[i]);
			double do3[s1+s2];
			for(i=0;i<s1;i++)
			do3[i]=do1[i];
			for(i=s1;i<(s1+s2);i++)
			do3[i]=do2[i-s1];
			printf("Merged array \n");
			for(i=0;i<s1+s2;i++)
			printf("%f \n", do3[i]);
			break;
			}
		default:
			printf("Invalid input");
	}
	return 0;
}
