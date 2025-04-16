#include<stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void Push() {
	
	int val;
	printf("Enter number to be pushed \n");
	scanf("%d", &val);
	
	if (top == MAX - 1)
	printf("Stack Overflows \n");
	
	else {
		top++;
		stack[top] = val;
	}
}

void Pop() {
	
	if (top == -1)
	printf("Stack Underflows \n");
	
	else {
		printf("Value to be popped: %d \n", stack[top]);
		top--;
	}
}

void Peek() {
	
	if (top == -1)
	printf("Stack Underflows \n");
	
	else {
		printf("Value on peeking: %d \n", stack[top]);
	}
}

void isEmpty() {
	
	if (top == -1)
	printf("Stack is empty \n");
	else
	printf("Stack is not empty \n");
	if (top != MAX - 1)
	printf("Stack underflows, elements can be pushed \n");
}

void isFull() {
	
	if (top == MAX - 1)
	printf("Stack is full \n");
	else
	printf("Stack is not full \n");
	if (top != MAX - 1)
	printf("Stack underflows, elements can be pushed \n");
}

void show() {
	
	for (int i = 0; i <= top; i++)
	printf("Element at position %d = %d \n", i, stack[i]);
}

int main() {
	
	int cho;
	printf("Enter 1 to push, 2 to pop, 3 to peek, 4 to check for empty, 5 to check for full and 0 to exit \n");
	scanf("%d", &cho);
	
	while (cho != 0) {
	
		if (cho == 1)
		Push();
		if (cho == 2)
		Pop();
		if (cho == 3)
		Peek();
		if (cho == 4)
		isEmpty();
		if (cho == 5)
		isFull();
		show();
		printf("Input for next action \n");
		scanf("%d", &cho);
	}
	
	printf("Program exited");
	
	return 0;
}
