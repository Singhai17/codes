#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str[1000];
    int cnt=0;
    int inW=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0';i++)
    {
    	int k=str[i];
    	if((k>=65&&k<=90)||(k>=97&&k<=122))
    	cnt++;
	}
	printf("No. of alphabets: %d", cnt);
	return 0;
}
