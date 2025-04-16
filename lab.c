#include <stdio.h> 
#include <stdlib.h> 
 
struct Node { 
    int data; 
    struct Node* next;
    struct Node* previous; 
}; 
// Function to print linked list 
void printList(struct Node* head) { 
    printf("forward\n");
    while (head != NULL) { 
        printf("%d -> ", head->data); 
        head = head->next; 
    } 
    printf("NULL\n"); 
} 
void insertAtBeginning(struct Node** head, int newData) {   
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));   
    newNode->data = newData;   
    newNode->next = *head;   
    *head = newNode;   
} 
void insertAtEnd(struct Node **tail, int newData){
    struct Node *newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode->data=newData; newnode->next = NULL;
    (*tail)->next=newnode;
    newnode->previous=tail;
    *tail=newnode;
}
void insertAtrandom(struct Node *head,int newData,int pos){
    
    for(int i = 0 ; i<pos;i++){
        head = head->next;

    }
    struct Node *newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=head->next;
    head->next=newNode;
}
void printListback(struct Node* last) { 
    printf("backward\n");
    while (last != NULL) { 
        printf("%d -> ", last->data); 
        last = last->previous; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* tail = NULL; 
    
    head = (struct Node*) malloc(sizeof(struct Node)); 
    second = (struct Node*) malloc(sizeof(struct Node)); 
    tail = (struct Node*) malloc(sizeof(struct Node)); 
     
    head->data = 1; head->next = second;head->previous=NULL; 
    second->data = 2; second->next = tail;second->previous=head; 
    tail->data = 3; tail->next = NULL;tail->previous=second; 
    printList(head); 
    printListback(tail);
    insertAtBeginning(&head,6);
    insertAtEnd(&tail,99);
    printList(head);
    insertAtrandom(head,1000,4);
    printList(head);
    
    return 0; 
} 