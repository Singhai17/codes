#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear=-1;

void printqueue(){
    if(front==-1){
        printf("no element in the queue\n");
        return;
    }
    printf("front= ");
    for(int i = front; i<rear;i++){
        printf("%d <-",queue[i]);
    }
    printf("%d =rear\n",queue[rear]);
}

void queueinsertion(int data){
    if(rear==MAX){
        printf("the queue is already full !!insertion not possible\n");
        return;
    }
    rear++;
    if(front==-1){
        front++;
        queue[rear]=data;
        printf("inserted %d in queue at the %d (last position)\n",data,rear);
        return;        
    }
    queue[rear]=data;
    printf("inserted %d in queue at the %d (last position)\n",data,rear);
}

int main(){
    int n;
    printf("enter the number of elements to be inserted in queue\n");
    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        queueinsertion(1000*(i+1));
          }
          printqueue();
return 0;
}