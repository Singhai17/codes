#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};

void insertAtbeginning(struct Node **head,int data){
    if(head == NULL){
        
    struct Node *newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode->data= data;
    newnode->previous=newnode;
    newnode->next=newnode;
    *head=newnode;
    return;
    }
    struct Node *temp = (*head)->previous;
    struct Node *newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=*head;
    temp->next=newnode;
    newnode->previous=temp;
    head = newnode;
}

void printList(struct Node *head){
    struct Node *ptr = head;
    do{ 
        printf("%d -> ",ptr->data);
        ptr=ptr->next;

    }
    while(ptr->next != head);

    
}


int main(){
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));

}