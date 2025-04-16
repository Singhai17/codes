#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct CDLL {
    struct Node* head;
};

void init(struct CDLL* list) {
    list->head = NULL;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;
    newNode->prev = newNode;
    return newNode;
}

void append(struct CDLL* list, int data) {
    struct Node* newNode = createNode(data);
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        struct Node* tail = list->head->prev;
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = list->head;
        list->head->prev = newNode;
    }
}

void removeEvenOrOdd(struct CDLL* list, int removeEven) {
    if (list->head == NULL) return;

    struct Node* curr = list->head;
    do {
        if ((removeEven && curr->data % 2 == 0) || (!removeEven && curr->data % 2 != 0)) {
            if (curr->next == curr) {
                free(curr);
                list->head = NULL;
                return;
            }

            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;

            if (curr == list->head) {
                list->head = curr->next;
            }

            struct Node* temp = curr;
            curr = curr->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    } while (curr != list->head);
}

void printList(struct CDLL* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* curr = list->head;
    do {
        printf("%d ", curr->data);
        curr = curr->next;
    } while (curr != list->head);
    printf("\n");
}

int main() {
    struct CDLL list;
    init(&list);

    append(&list, 1);
    append(&list, 2);
    append(&list, 3);
    append(&list, 4);
    append(&list, 5);
    append(&list, 6);

    printf("Original list:\n");
    printList(&list);

    int choice;
    printf("Enter 1 to remove even nodes, 0 to remove odd nodes: ");
    scanf("%d", &choice);

    if (choice == 1) {
        removeEvenOrOdd(&list, 1);
        printf("After removing even nodes:\n");
    } else if (choice == 0) {
        removeEvenOrOdd(&list, 0);
        printf("After removing odd nodes:\n");
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    printList(&list);

    return 0;
}

