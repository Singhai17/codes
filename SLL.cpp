#include<stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	Node *next;
};
struct Node *head= NULL;
void insertAtBeginning(Node** head, int newData) {   
    Node* newNode = (Node*)malloc(sizeof(Node));   
    newNode->data = newData;   
    newNode->next = *head;   
    *head = newNode;  
}
void deleteAtBeginning(struct Node** head) { 
    if (*head == NULL) { 
        printf("List is empty. Cannot delete.\n"); 
        return; 
    } 
    struct Node* temp = *head; 
    *head = (*head)->next; 
    free(temp); 
    printf("Deleted node from the beginning.\n"); 
}
void deleteAtEnd(struct Node** head) { 
    if (*head == NULL) { 
        printf("List is empty. Cannot delete.\n"); 
        return; 
    } 
    struct Node* temp = *head; 
    if (temp->next == NULL) { 
        free(temp); 
        *head = NULL; 
        return; 
    } 
    while (temp->next->next != NULL) { 
        temp = temp->next; 
    } 
    free(temp->next); 
    temp->next = NULL; 
    printf("Deleted node from the end.\n"); 
}

void deleteAtPosition(struct Node** head, int position) { 
    if (*head == NULL) { 
        printf("List is empty. Cannot delete.\n"); 
        return; 
    } 
 
    struct Node* temp = *	head; 
    if (position == 1) {  
        *head = temp->next; 
        free(temp); 
        printf("Deleted node at position %d.\n", position); 
        return; 
    } 
 
    for (int i = 1; temp != NULL && i < position - 1; i++) { 
        temp = temp->next; 
    } 
 
    if (temp == NULL || temp->next == NULL) { 
        printf("Invalid position!\n"); 
        return; 
    } 
 
    struct Node* nextNode = temp->next->next; 
    free(temp->next); 
    temp->next = nextNode; 
    printf("Deleted node at position %d.\n", position); 
}
void insertAtEnd(struct Node** head, int value) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* temp = *head; 
    newNode->data = value; 
    newNode->next = NULL; 
 
    if (*head == NULL) { 
        *head = newNode;
        return; 
    } 
 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
 
    temp->next = newNode; 
} 
void displayList(struct Node* head) { 
    struct Node* temp = head; 
    if (head == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
 
    while (temp != NULL) { 
        printf("[%d] > ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
}
void insertAtPosition(struct Node** head, int position, int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* temp = *head; 
    newNode->data = value;
    
    if (*head == NULL) { 
        *head = newNode; 
        return; 
    } 
    if (position == 1) {  
        temp->next=*head; 
		*head=newNode; 
        printf("Inserted node at position %d.\n", position); 
        return; 
    } 
 	for (int i = 1; temp != NULL && i < position - 1; i++) { 
        temp = temp->next; 
    } 
 
    if (temp == NULL || temp->next == NULL) { 
        printf("Invalid position!\n"); 
        free(newNode);
        return; 
    } 
    newNode->next=temp->next;
    temp->next=newNode;
}
int main() {
	int choco, n, p;
	printf("This is a menu driven SLL \n");
	printf("Enter 1 to insert at beginning \n");
	printf("Enter 2 to insert at end \n");
	printf("Enter 3 to insert at specific position \n");
	printf("Enter 4 to delete at beginning \n");
	printf("Enter 5 to delete at end \n");
	printf("Enter 6 to delete at specific position \n");
	printf("Enter 7 to display \n");
	printf("Enter 8 to exit\n");
	scanf("%d", &choco);
	while(choco!=8) {
		if(choco==1) {
			printf("Enter data \n");
			scanf("%d", &n);
			insertAtBeginning(&head, n);
		}
		else if(choco==2) {
			printf("Enter data \n");
			scanf("%d", &n);
			insertAtEnd(&head, n);
		}
		else if(choco==3) {
			printf("Enter data and position\n");
			scanf("%d %d", &n, &p);
			insertAtPosition(&head, p, n);
		}
		else if(choco==4) {
			deleteAtBeginning(&head);
		}
		else if(choco==5) {
			deleteAtEnd(&head);
		}
		else if(choco==6) {
			printf("Enter position to delete\n");
    		scanf("%d", &p);
			deleteAtPosition(&head, p);
		}
		else if(choco==7) {
			displayList(head);
		}
		else
		printf("Wrong choice \n Try again\n");
		printf("Enter new choice \n");
		scanf("%d", &choco);
	}
}
