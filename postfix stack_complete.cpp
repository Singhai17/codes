#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void Push(int val) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = val;
    }
}

int Pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int Opera(int k1, int k2, char op) {
    switch (op) {
        case '+': return k1 + k2;
        case '-': return k2 - k1;
        case '*': return k1 * k2;
        case '/': return k2 / k1;
        default: printf("Invalid operation\n");
                 return 0;
    }
}

int main() {
    printf("Postfix operation evaluation\n");
    int choko;
    printf("Enter 1 to input number, enter 2 to input operation and enter 0 to end input\n");
    scanf("%d", &choko);
    while (choko != 0) {
        if (choko == 1) {
            int val;
            printf("Enter number\n");
            scanf("%d", &val);
            Push(val);
        } else if (choko == 2) {
            int k1 = Pop();
            int k2 = Pop();
            char chod;
            printf("Enter operation\n");
            scanf(" %c", &chod);
            int k = Opera(k1, k2, chod);
            Push(k);
        }
        printf("Enter 1 to input number, enter 2 to input operation and enter 0 to end input\n");
        scanf("%d", &choko);
    }
    
    if (top == 0) {
        printf("Result of postfix expression: %d\n", Pop());
    } else {
        printf("Invalid postfix expression\n");
    }

    return 0;
}

