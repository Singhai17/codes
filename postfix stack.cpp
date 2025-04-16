#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

int main() {
	printf("Teri maa ki postfix operation \n");
	int choko;
	printf("Enter 1 to input number, enter 2 to input operation and enter 0 to end input \n");
	scanf("%d", &choko);
	while(choko != 0) {
		if(choko == 1) {
			int val;
			printf("Enter number \n");
			scanf("%d", &val);
			Push(val);
		}
		if(choko == 2) {
			int k1 = Pop();
			int k2 = Pop();
			char chod;
			printf("Enter operation \n");
			scanf("%c", &chod);
			int k = Opera(k1, k2, chod);
			Push(k);
		}
	}
}
