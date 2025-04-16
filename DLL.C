//HERE WE ARE GOING TO CONSIDER THE OPERATIONS ON DLL IN WHICH WE WILL SE DECLARATION STRUCTURE OF DLL, PRINTING DLL, INSERTING ELEMENT IN DLL FROM BEGINNING , FROM END AND FROM RANDOM, SIMILARLY WE WOULD ALSO SEE THE THREE DELETIONS, THE SEARCH OPERATIONS AND SO ON.
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
//FUNCTION TO INSERT AN ELEMENT IN THE BEGINNING
void insertAtBeginning(struct Node** head, int newData) {   
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));   
    newNode->data = newData;   
    newNode->next = *head; 
    newNode->previous=NULL;  
    *head = newNode;   
} 
//INSERT ELEMENT AT END

void insertAtEnd(struct Node *head, int newData){
    while(head->next != NULL){
        head = head->next;
    }
    
    struct Node *newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode->data=newData; newnode->next = NULL;
    (head)->next=newnode;
    newnode->previous=(head);
    head=newnode;
}
//DELETION AT END

//INSERT ELEMENT AT RANDOM
void insertAtrandom(struct Node *head,int newData,int pos){
    
    for(int i = 0 ; i<pos;i++){
        head = head->next;

    }
    struct Node *newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=head->next;
    newNode->previous=head;
    head->next=newNode;
}
//PRINTING LIST IN REVERSE ORDER
void printListback(struct Node* last) { 
    printf("backward\n");
    while (last != NULL) { 
        printf("%d -> ", last->data); 
        last = last->previous; 
    } 
    printf("NULL\n"); 
} 

//DELETION AT BEGINNING
void deletionAtbegin(struct Node** head){
    struct Node* newnode = *head;
    *head = (*head)->next;
    free(newnode);
    }
//deletion at end
void deletionAtend(struct Node *head){
    while(head->next->next != NULL){
        head = head->next;
    }
    struct Node *deleted= head->next;
    head->next= NULL;
    free(deleted);
}
//deletion at random
void deletionAtrandom(struct Node **head, int pos){
    struct Node *begin = *head;
    for(int i = 0 ; i<pos; i++){
        *head = (*head)->next;
    }
    struct Node *temp = (*head)->next;
    (*head)->next=(*head)->next->next;
    free(temp);
    struct Node *prev=(*head);
    (*head) = (*head)->next;
    (*head)->previous=prev;
    *head = begin;
}

void search(struct Node **head, int data){
    struct Node *searcher= *head;
    bool found = false;
    int counter = 0;
    while(searcher->next != NULL){
        
        if(searcher->data==data){
            printf("%d found at index %d \n", data,counter);
            found=true;
        }
        counter++;
        searcher = searcher->next;

    }
   
    if(found == false){
        printf("%d not found \n",data);
    }
}

void reversal(struct Node **head){
    struct Node *temp=NULL;
    struct Node *current= *head;
    while(current != NULL){
        temp = current->previous;
        current->previous=current->next;
        current->next=temp;
        current = current->previous;
    }
    if(temp != NULL){
        *head = temp->previous;
    }
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
    insertAtEnd(head,99);
    printList(head);
    insertAtrandom(head,1000,2);
    printList(head);
    reversal(&head);
    printList(head);
    search(&head,3);
    search(&head,20);
    deletionAtbegin(&head);
    printList(head);
    deletionAtend(head);
    printList(head);
    deletionAtrandom(&head,1);
    printList(head);
    printListback(tail);
    return 0; 
} 