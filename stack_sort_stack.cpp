#include <stdio.h>

#define MAX 1000

int mstack[MAX];
int hstack[MAX];
int topm = -1;
int toph = -1;

void Push(int stack[], int *top, int value) {
    if (*top >= MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++(*top)] = value;
}

int Pop(int stack[], int *top) {
    if (*top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[(*top)--];
}

int Peek(int stack[], int top) {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void SortStack() {
    while (topm != -1) {
        int temp = Pop(mstack, &topm);
        while (toph != -1 && Peek(hstack, toph) > temp) {
            Push(mstack, &topm, Pop(hstack, &toph));
        }
        Push(hstack, &toph, temp);
    }

    while (toph != -1) {
        Push(mstack, &topm, Pop(hstack, &toph));
    }
}

int main() {
	int ci;
	printf("Enter 0 to end input and any other number to enter value \n");
	scanf("%d", &ci);
	while (ci != 0) {
		int p;
		printf("Enter value \n");
		scanf("%d", &p);
		Push(mstack, &topm, p);
		printf("Enter 0 to end input and any other number to enter value \n");
		scanf("%d", &ci);
	}

    printf("Original stack: ");
    for (int i = 0; i <= topm; i++) {
        printf("%d ", mstack[i]);
    }
    printf("\n");

    SortStack();

    printf("Sorted stack: ");
    for (int i = 0; i <= topm; i++) {
        printf("%d ", mstack[i]);
    }
    printf("\n");

    return 0;
}

