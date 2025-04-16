#include <stdio.h>
#include <string.h>

#define MAX 1000

char stack[MAX];
int top = -1;

void reverseString(char* st) {
    int n = strlen(st);

    for (int i = 0; i < n; i++) {
        stack[++top] = st[i];
    }

    for (int i = 0; i < n; i++) {
        st[i] = stack[top--];
    }
}

int main() {
    char str[1000];
    printf("Enter a string \n");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

