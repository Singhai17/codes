#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head=NULL;

void insertAtBegining(struct node **head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=data;
    if(*head==NULL){
        newnode->next=NULL;
        *head=newnode;
        printf("no previous head existed \n inserted as head at beginning \n");
        return;
    }
    newnode->next=*head;
    (*head)->prev=newnode;
    *head=newnode;
}

void insertAtEnd(struct node **head,int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    if(*head==NULL){
        newnode->prev=NULL;
        *head=newnode;
        printf("inserted at beginning as no head existed \n");
        return;
    }
    struct node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
    printf("inserted at end \n");
}

void insertAtPosition(struct node **head,int position, int data){
    int count =1;
    struct node *temp = *head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    if(count >= position){
        temp =*head;
        count =1;
        while(count <position-1){
            temp = temp->next;
            count++;
        }
        struct node *newnode= (struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next->prev=newnode;
        printf("inserted at the given position \n");
    }else{
        printf("NOT A VALID POSITION\n");
    }
}

void printlistForward(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("NULL\n");
}

void printlistBackward(struct node *head){
    struct node *temp =head;
    printf("listed printed in reverse order\n");
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d->",temp->data);
        temp=temp->prev;
    }printf("NULL \n");
}

void deletionAtBegining(struct node **head){
    struct node *temp=*head;
    if(*head==NULL){
        printf("deletion not possible \n");
        return;
        }
    *head=(*head)->next;
    (*head)->prev=NULL;
    free(temp);
}

void deletionAtEnd(struct node **head){
    struct node *temp =*head;
    if(*head==NULL){
        printf("empty ll !! cannot delete.\n");
        return;
    }

    if(temp->next == NULL){
        free(temp);
        *head=NULL;
        printf("the list became empty \n");
        return;
    }
    while(temp->next->next != NULL){
        temp =temp->next;
    }struct node *temp2 = temp->next;
    temp->next=NULL;
    free(temp2);
}

void deletionAtPosition(struct node **head,int position){
    int count =1;
    struct node *temp = *head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    if(count >= position){
        
        temp = *head;
        count=1;
        while(count<position){
            temp = temp->next;
            count++;
        }
        if(temp->prev==NULL){
            *head=(*head)->next;
            (*head)->prev=NULL;
            free(temp);
            printf("deleted at head position\n");
            return;
        }else if(temp->next ==NULL){
            struct node *temp2=temp->prev;
            temp2->next=NULL;
            free(temp);
            printf("deleted the last element\n");
            return;
        }
        struct node *temp2=temp->prev;
        struct node *temp3=temp->next;
        temp3->prev=temp2;
        temp2->next=temp3;
        printf("%d deleted from %d position\n",temp->data,position);
        free(temp);
    

    
    }
    else{
        printf("NOT A VALID POSITION\n");
    }
}

void searching(struct node **head){
    printf("enter the number to search\n");
    int t,found=0,count=1;
    scanf("%d",&t);
    struct node *temp =*head;
    while(temp !=NULL){
        if(temp->data==t){
            found=1;
            printf("found at position %d \n",count);
        }
        count++;
        temp=temp->next;
    }
    if(found==0){
        printf("not found\n");
    }
}

void removeeven(struct node **head){
    struct node *temp =(*head);    
    if(*head==NULL||(*head)->next==NULL){
        printf("not enough nodes for deleting even nodes\n");
        return;
    }
    int count =0;
    
    while(temp != NULL){
        temp=temp->next;
        count++;
    }     
    for(int i = count; i>=2;i--){
        if(i%2==0){
            deletionAtPosition(head,i);
        }
    }   
    printf("DELETED ALL THE EVEN PLACED NUMBERS\n");
}
void removeodd(struct node **head){
    struct node *temp =(*head);    
    if(*head==NULL){
        printf("not enough nodes for deleting even nodes\n");
        return;
    }
    int count =0;
    
    while(temp != NULL){
        temp=temp->next;
        count++;
    }     
    for(int i = count; i>=1;i--){
        if(i%2==1){
            deletionAtPosition(head,i);
        }
    }   
    printf("DELETED ALL THE ODD PLACED NUMBERS\n");
}

int main(){
 printf("enter the number of elements \n");
 int n;
 scanf("%d",&n);
 insertAtBegining(&head,10);
 for(int i = 1;i<n;i++){
    insertAtEnd(&head,10*(i+1));
 }
 printlistForward(head);
 printf("enter the\n 1>remove all numbers at odd places \n2>remove all numbers at even places\n");
 int t;
 scanf("%d",&t);
 if(t==1){
    removeodd(&head);
    printf("the list became\n");
    printlistForward(head);
 }else if(t==2){
    removeeven(&head);
    printf("the list became\n");
    printlistForward(head);
 }else{
    printf("invalid operation\n");
 }

}
