#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct node *head = NULL;

struct node{
    int data;
    struct node *next;
};

void insertAtBeginning(struct node ** head, int newdata){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    if(*head==NULL){
        newnode->next=newnode;
        *head=newnode;           
            printf("the value in head has been initialized\n");
            return;
    }
    struct node *temp=*head;
    while(temp->next !=*head){
        temp =temp->next;
    }
    temp->next=newnode;
    newnode->next=*head;    
    *head=newnode;printf("inserted at the beginning as head \n");
}

void insertAtEnd(struct node **head,int newdata){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    
    if(*head == NULL){
        
        newnode->next=newnode;*head=newnode;
        printf("inserted at the beginning as head as no previous head existed \n");
        return;

    }
    struct node *temp = *head;
    while(temp->next != *head){
        temp = temp->next;
    }
    temp->next= newnode;
    newnode->next=*head;
    printf("inserted at the end  \n");
}

void insertAtPosition(struct node **head,int position,int newdata){
    int count =1;
    struct node *temp = *head;
    do{
        temp = temp->next;
        count++;
    }while(temp != *head);
    if(count>=position){ 
        temp = *head;
        int count2=1;
        while( count2 <position-1){
            temp= temp->next;
            count2++;
        }    
    struct node *temp2 = temp;
    temp2= temp2->next;
    
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data=newdata;
        newnode->next = temp2;
        temp->next=newnode;
        printf("inserted %d at position %d \n",newdata,position);
    }else{
        printf("not a possible position in this linked list \n");
    }
}
void deletionAtBeginning(struct node **head){
    struct node *temp = *head;
    if(*head==NULL){
        printf("deletion not possible \n");
        return;
    }   if(temp->next==*head){
        free(temp);
        *head=NULL;
        
        printf("deleted!!list became empty \n");
        return;
    }
    
    else{
        while(temp->next != *head){
            temp=temp->next;
        }
        struct node *temp2= *head;
        *head= (*head)->next;
        temp->next=*head;


        printf("deleted %d from the beginning of linked list \n" ,temp2->data);
        free(temp2);
    }
}

void deletionAtEnd(struct node **head){
    struct node *temp =*head;
    if(*head==NULL){
        printf("empty ll !! cannot delete.\n");
        return;
    }

    if(temp->next == *head){
        free(temp);
        *head=NULL;
        printf("the list became empty \n");
        return;
    }
    while(temp->next->next != *head){
        temp =temp->next;
    }struct node *temp2 = temp->next;
    temp->next=*head;
    free(temp2);
}

void deletionAtPosition(struct node **head,int position){
    if(*head==NULL){
        printf("deletion not possible!! empty ll\n");
        return;
    }
    struct node *temp = *head;
    int count = 1;
    do{
        temp = temp->next;
        count++;
    }while(temp != *head);
    if(count>=position){
        count =1;
        temp = *head;
        while(count<position-1){
            temp = temp->next;
            count++;
        }
        struct node *temp2=temp->next;
        temp->next=temp->next->next;
        free(temp2);
        printf("deleted element at %d \n",position);        
    }else{
        printf("NOT A VALID POSITION FOR DELETION \n");
    }
}
void printlist(struct node *head){
    if(head==NULL){
        printf("empty list\n");
        return;
    }
    struct node *temp = head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;

    }while( temp != head);
    printf("HEAD\n");
    
}

void searching(struct node **head){
    printf("enter the number to search\n");
    int t,found=0,count=1;
    scanf("%d",&t);
    struct node *temp =*head;
    do{
        if(temp->data==t){
            found=1;
            printf("found at position %d \n",count);
        }
        count++;
        temp=temp->next;
    }while(temp !=*head);
    if(found==0){
        printf("not found\n");
    }
}
int main(){
    printlist(head);
    insertAtBeginning(&head,1);
    printlist(head);
    insertAtEnd(&head,2);
    printlist(head);
    insertAtPosition(&head,3,3);
    printlist(head);
    searching(&head);
    deletionAtPosition(&head,2);
    printlist(head);
}