#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//initializing the linked list
struct node *head = NULL;

struct node{
    int data;
    struct node *next;
};


void insertAtBeginning(struct node ** head, int newdata){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;printf("inserted at the beginning as head \n");

}

void insertAtEnd(struct node **head,int newdata){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=NULL;
    if(*head == NULL){
        *head=newnode;
        printf("inserted at the beginning as head as no previous head existed \n");
        return;

    }
    struct node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next= newnode;
    printf("inserted at the end  \n");
}
//very important is this section of inserting at a specific position;
void insertAtPosition(struct node **head,int position,int newdata){
    int count =1;
    struct node *temp = *head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }if(count>=position){ 
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
    }   if(temp->next==NULL){
        free(temp);
        *head=NULL;
        
        printf("deleted!!list became empty \n");
        return;
    }
    
    else{
        
        *head= (*head)->next;
        printf("deleted %d from the beginning of linked list \n" ,temp->data);
        free(temp);
    }
}

void deletionAtEnd(struct node **head){
    if(*head==NULL){
        printf("deletion not possible!! empty ll\n");
        return;
    }
    struct node *temp = *head;   
    if(temp->next == NULL){
        free(temp);
        *head= NULL;
        return;
    }   
       
       while((temp->next->next) != NULL){
        temp = temp->next;
       }
            free(temp->next);
       temp->next=NULL;
    //    free(temp);
       printf("deleted from the end \n");
  
}

void deletionAtPosition(struct node **head,int position){
    if(*head==NULL){
        printf("deletion not possible!! empty ll\n");
        return;
    }
    struct node *temp = *head;
    int count = 1;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
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

//printing the linked list
void printlist(struct node *head){
    struct node * temp = head;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }printf("NULL \n");

}

void searching(struct node *head){
    struct node *temp =head;
    printf("enter the number to search \n");
    int t,count=1,found=0;
    scanf("%d",&t);
    while(temp != NULL){
        if(temp->data==t){
            printf("%d found at %d\n",t,count);
            found++;
        }temp=temp->next;
        count++;
    }
    if(found=0){
        printf("NOT FOUND \n");
    }
}


int main(){

 printf("the linked list is initialised with head =null\n press the following for doing the same \n 0>exit     1>insertion(beginning)      2>insertion(position)       3>insertion(end)\n4>deletion(beginning)     5>deletion(position)        6>deletion(end)     7>searching 8>print entire list\n");
 int t=-1 ; int data;
 while(t!=0){
    printf("what you want to do?? \n ");
    scanf("%d",&t);
    if(t==1){
        printf("enter the data to insert \n");
        scanf("%d",&data);
        insertAtBeginning(&head,data);
    }else if(t==2){
        int position;
        printf("enter the data to insert \n");
        scanf("%d",&data);
        printf("enter the position where you want to make the insertion\n");
        scanf("%d",&position);
        insertAtPosition(&head,position,data);
    }else if(t==3){
        printf("enter the data to insert \n");
        scanf("%d",&data);
        insertAtEnd(&head,data);
    }else if(t==4){
        deletionAtBeginning(&head);
    }else if(t==5){
        int position;
        printf("enter the position where you want to make the deletion\n");
        scanf("%d",&position);
        deletionAtPosition(&head,position);
    }else if(t==6){
        deletionAtEnd(&head);
    }else if(t==7){
        searching(head);
    }
    else if(t==8){
        printlist(head);
    }else if(t==0){
        printf("exit\n");
    }else{
        printf("NOT A VALID COMMAND \n");
    }
 }

}

