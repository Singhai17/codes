#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


struct node{
    int data1;
    char data2;
    struct node *next;
};

struct node *front = NULL;
struct node *rear=NULL;

void enque(struct node ** front, int newdata,char data2){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data1 = newdata;
    newnode->data2=data2;
    newnode->next = NULL;
    if (*front == NULL) {
        
        *front = newnode;
        rear = newnode;
        printf("Inserted at the beginning as front == rear\n");
    } else {
        
        rear->next = newnode;
        rear = newnode;
        printf("Inserted at rear\n");
    }
}

void deque(struct node **front){
    struct node *temp = *front;
    if(*front==NULL){
        printf("deletion not possible \n");
        return;
    }   if(temp->next==NULL){
        free(temp);
        *front=NULL;
        
        printf("deleted!!queue became empty \n");
        return;
    }
    
    else{        
        *front= (*front)->next;
        printf("deleted %d %c from the front of queue\n" ,temp->data1,temp->data2);
        free(temp);
    }
}

void printlist(struct node *front){
    struct node * temp = front;
    printf("FRONT==");
    while(temp != rear){
        printf("%d %c <-", temp->data1,temp->data2 );
        temp = temp->next;
    }printf("%d %c ==REAR \n",temp->data1, temp->data2);
}

int main(){
    int n=5;
    char c='a';
    for(int i = 0; i<26;i++){
        enque(&front,10*(i+1),c);
        c++;
    }
    printlist(front);
    int t = -1;
    while(t != 0){
        printf("press 1 if you want to deque \n press 2 if you want show the queue else\n press 0 if you want to exit\n");
        scanf("%d",&t);
        if(t==1){
            deque(&front);
        }else if(t==2){
            printlist(front);
        }else if(t==0){
            printf("exit !! \n");
        }else{
            printf("invalid input\n");
        }
    }
}
