#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 26
int f=-1, r=-1;
struct Queue {
	char alpha[SIZE];
	int number[SIZE];
} q;
void insert(int no, char c) {
	if(r==SIZE-1) {
		printf("Bhar Gaya \n");
	}
	else if((f==-1&&r==-1)) {
		f=0;
		r=0;
		q.alpha[r]=c;
		q.number[r]=no;
		printf("%c%d Daal Diya\n", c,no);
	}
	else {
		r++;
		q.alpha[r]=c;
		q.number[r]=no;
		printf("%c%d Daal Diya\n", c,no);
	}
}
void dele() {
	if(f==-1&&r==-1) {
		printf("Khali Hai \n");
		return;
	}
	printf("%c%d Mita Diya\n", q.alpha[f], q.number[f]);
	f++;
	if(f>r) {
		f=-1;
		r=-1;
	}
}
void display() {
	if(f==-1||r==-1) {
		printf("Khali Hai");
	}
	printf("List: \n");
	for(int i=f;i<=r;i++) {
		printf("%c%d ",q.alpha[i],q.number[i]);
	}
	printf("\n");
}
int main() {
	int ch=64;
	int nu=10;
	for(int i=1;i<=26;i++) {
		char v=(char)(ch+i);
		insert((i*nu),v);
	}
	printf("Kya aapko dikha de ya mita de ek andar se? \n ");
	printf("Dikhane ke liye 1 dabaye aur mitane ke liye 2 dabaye aur bahar jane ke liye 0 dabaye\n");
	scanf("%d", &nu);
	while(nu!=0) {
		if(nu==1)
			display();
		else if(nu==2)
			dele();
		printf("Wapas button dabaye\n");
		scanf("%d", &nu);
	}
	printf("Shukriya!!");
}
