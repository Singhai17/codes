#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct DLL {
    struct Node* head;
};

void init(struct DLL* list) {
    list->head = NULL;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void append(struct DLL* list, int data) {
    struct Node* newNode = createNode(data);
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        struct Node* tail = list->head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->prev = tail;
    }
}

void reverse(struct DLL* list) {
    if (list->head == NULL) return;

    struct Node* current = list->head;
    struct Node* temp = NULL;

    while (current != NULL) {
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        current = temp;
    }

    if (temp != NULL) {
        list->head = temp->prev;
    }
}

void printList(struct DLL* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct DLL list;
    init(&list);

    append(&list, 1);
    append(&list, 2);
    append(&list, 3);
    append(&list, 4);
    append(&list, 5);

    printf("Original list:\n");
    printList(&list);

    reverse(&list);
    printf("Reversed list:\n");
    printList(&list);

    return 0;
}

