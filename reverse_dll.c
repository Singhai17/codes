#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
};

struct node *head=NULL;

void insertAtBeginning(struct node **head,int newdata){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    
    if(*head==NULL){
        newnode->prev=newnode;
         newnode->next=newnode;
        *head=newnode;
        printf("inserted as head as no previous head exists\n");
        return;
    }
    (*head)->prev=newnode;
    newnode->next=*head;
    struct node*temp=*head;
    do{
        temp=temp->next;
        
    }while(temp->next !=*head);
    newnode->prev=(temp);
    temp->next=newnode;
    *head=newnode;
    printf("inserted at the beginning\n");
}

void insertAtEnd(struct node **head,int newdata){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data= newdata;
    
    if(*head==NULL){
        newnode->next= newnode;
        newnode->prev=newnode;
        printf("inserted as head as no previous element existed \n");
        return;
    }
    struct node *temp=*head;
    do{
        temp=temp->next;
    }while(temp->next != *head);
    (*head)->prev=newnode;
    newnode->prev=temp;
    newnode->next=*head;
    temp->next=newnode;
    printf("inserted at end\n");
}

void reverseDLL(struct node **head){
    struct node *temp = *head;
    struct node *ptr;
    do{
       ptr= temp->next;
       temp->next=temp->prev;
       temp->prev=ptr;
       temp = temp->prev;
    }while(temp != *head);

}


void printlist(struct node *head){
    if(head==NULL){
        printf("empty linked list !!\n");
        return;
    }
    struct node *temp = head;
    printf("head<->");
    do{
        printf("%d <->",temp->data);
        temp=temp->next;
    }while(temp!=(head));
    printf("head\n");
}
void printlistBack(struct node *head){
    if(head==NULL){
        printf("empty linked list !!\n");
        return;
    }
    struct node *temp = head;
    printf("head==");
    do{
        printf("%d ->",temp->data);
        temp=temp->prev;
    }while(temp != head);
    printf("head\n");
}



int main(){
    printf("enter the number of elements \n");
 int n;
 scanf("%d",&n);
 insertAtBeginning(&head,10);
 for(int i = 1;i<n;i++){
    insertAtEnd(&head,10*(i+1));
 }
 printf("before reversal the ll==\n");
 printlist(head);
 reverseDLL(&head);
 
 printf("after reversal the ll==\n");
 printlist(head);
    

}